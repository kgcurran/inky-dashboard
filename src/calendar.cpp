#include "calendar.hpp"
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <string>

static const int min_time = 800;
static const int max_time = 1800;
static const int32_t left_margin = 18;
static const int32_t top_margin = 22;
static const int32_t event_horz_gap = 1;
static const int32_t event_pad_all = 3;
static const int32_t column_right_padding = 5;

static lv_style_t event_style_default;

static std::vector<string> headers;
static int days_count = 2;

static std::vector<event> events;

double time_diff_hours(int start_time, int end_time) {
    return ((end_time / 100) - (start_time / 100)) + ((end_time % 100) - (start_time % 100)) / 60.0;
}

void calendar_init(const json &calendar_data) {
    lv_style_init(&event_style_default);
    lv_style_set_pad_all(&event_style_default, event_pad_all);
    lv_style_set_margin_all(&event_style_default, 0);
    lv_style_set_border_width(&event_style_default, 0);
    lv_style_set_outline_width(&event_style_default, 0);    
    lv_style_set_radius(&event_style_default, 0);

    days_count = calendar_data["dh"].size();
    for(const auto &element : calendar_data["dh"]) {
        headers.push_back(element);
    }

    for(const auto &event_json : calendar_data["ev"]) {
        events.push_back(event(
            event_json["co"],
            event_json["sd"],
            event_json["st"],
            event_json["ed"],
            event_json["et"],
            event_json["txt"]
        ));
    }
}

static void draw_event(lv_obj_t *parent, int day, int start_time, int end_time, int width_denominator, int column_index, const char *text) {
    start_time = std::max(start_time, min_time);
    end_time = std::min(end_time, max_time + 200);

    lv_area_t coords;
    lv_obj_get_content_coords(parent, &coords);

    auto calendar_width = (coords.x2 - coords.x1);
    auto calendar_height = (coords.y2 - coords.y1);

    int32_t col_width = (calendar_width - left_margin) / days_count;
    int32_t day_width = (calendar_width - left_margin) / days_count - column_right_padding; // add some right padding to column
    int32_t event_col_width = day_width / width_denominator;
    int32_t hour_height = (calendar_height - top_margin) / ((max_time - min_time) / 100 + 1);

    int32_t event_width = event_col_width - event_horz_gap * 2;
    int32_t event_height = hour_height * time_diff_hours(start_time, end_time);

    int32_t event_xpos = left_margin + col_width * day + event_col_width * column_index + event_horz_gap;
    int32_t event_ypos = coords.y1 + top_margin + hour_height * time_diff_hours(min_time, start_time);

    lv_obj_t *event_obj = lv_obj_create(parent);
    lv_obj_add_style(event_obj, &event_style_default, LV_PART_MAIN);
    lv_obj_set_size(event_obj, event_width, event_height);
    lv_obj_set_pos(event_obj, event_xpos, event_ypos);

    lv_obj_set_style_bg_color(event_obj, INKY_RED, LV_PART_MAIN);

    lv_obj_t *event_label = lv_label_create(event_obj);
    lv_obj_set_style_text_color(event_label, INKY_WHITE, LV_PART_MAIN);
    lv_obj_set_style_text_font(event_label, &roboto_regular_12, LV_PART_MAIN);
    lv_obj_set_size(event_label, event_width - event_pad_all * 2, event_height - event_pad_all * 2);
    lv_label_set_text(event_label, text);
    lv_label_set_long_mode(event_label, LV_LABEL_LONG_DOT);
}

static void draw_event(lv_obj_t *parent, const draw_record &record) {
    draw_event(parent, record.day, record.start_time, record.end_time, record.width_denominator, record.column_index, record.text.c_str());
}

static void draw_events(lv_obj_t *parent, const std::vector<event> &events) {
    std::vector<draw_record> draw_records;

    for(const auto &x : events) {
        for(int i = x.start_day; i <= x.end_day; ++i) {
            int start_time, end_time;

            if(i == x.start_day) {
                start_time = x.start_time;
            } else {
                start_time = 0;
            }

            if(i == x.end_day) {
                end_time = x.end_time;
            } else {
                end_time = 2400;
            }

            draw_records.push_back({i, start_time, end_time, 1, 0, x.text});
        }
    }
    
    std::sort(draw_records.begin(), draw_records.end(), [](const auto &left, const auto &right) {
        if(left.day == right.day) {
            if(left.start_time == right.start_time) {
                return left.end_time < right.end_time;
            } else {
                return left.start_time < right.start_time;
            }
        } else {
            return left.day < right.day;
        }
    });

    int start_day = draw_records.front().day;
    int end_day = draw_records.back().day;

    // arrange each day separately
    int current_day = start_day;
    std::vector<std::vector<draw_record>> columns;
    std::vector<int> column_end_times;

    auto iter = draw_records.begin();
    while(iter != draw_records.end()) {
        if(iter->day > current_day) {
            // draw all events on previous day
            for(const auto &column : columns) {
                for(const auto &draw_record : column) {
                    draw_event(parent, draw_record);
                }
            }

            columns.clear();
            column_end_times.clear();
            current_day = iter->day;
        }

        int placement_column = -1;
        int start_time = iter->start_time;

        int overlap_count = 1;
        for(int i = 0; i < columns.size(); ++i) {
            if(start_time >= column_end_times[i] && (placement_column == -1 || start_time - column_end_times[i] < start_time - column_end_times[placement_column])) {
                placement_column = i;
            }

            if(start_time < column_end_times[i]) {
                ++overlap_count;
            }
        }

        for(int i = 0; i < columns.size(); ++i) {
            if(start_time < column_end_times[i]) {
                columns[i].back().width_denominator = std::max(overlap_count, columns[i].back().width_denominator);
            }
        }

        if(placement_column == -1) {
            // if there are no columns free, make a new one
            columns.push_back({});
            column_end_times.push_back(0);
            placement_column = columns.size() - 1;
        }

        iter->width_denominator = overlap_count;
        iter->column_index = placement_column;
        columns[placement_column].push_back(*iter);
        column_end_times[placement_column] = iter->end_time;

        ++iter;
    }

    for(const auto &column : columns) {
        for(const auto &draw_record : column) {
            draw_event(parent, draw_record);
        }
    }

    columns.clear();
    column_end_times.clear();
    current_day = iter->day;
}

void draw_events(lv_obj_t *parent) {
    draw_events(parent, events);
}

static void draw_grid_lines(lv_obj_t *obj, lv_layer_t *layer) {
    lv_area_t coords;
    lv_obj_get_coords(obj, &coords);

    static lv_draw_line_dsc_t line_dsc;
    lv_draw_line_dsc_init(&line_dsc);
    line_dsc.color = INKY_BLACK;
    line_dsc.width = 1;
    line_dsc.opa = LV_OPA_COVER;

    static lv_draw_label_dsc_t side_label_dsc;
    lv_draw_label_dsc_init(&side_label_dsc);
    side_label_dsc.font = &roboto_light_12;
    side_label_dsc.color = INKY_BLACK;
    side_label_dsc.align = LV_TEXT_ALIGN_RIGHT;

    int32_t width = coords.x2 - coords.x1;
    int32_t height = coords.y2 - coords.y1;

    char time_str[8];

    const int hour_cell_count = (max_time - min_time) / 100 + 1;

    int32_t font_height = lv_font_get_line_height(side_label_dsc.font);
    int32_t hour_height = (height - top_margin) / hour_cell_count;
    
    // draw hour lines
    for(int i = 0; i <= hour_cell_count; i++) {
        int32_t y_pos = coords.y1 + (i * hour_height) + top_margin;
        line_dsc.p1.x = coords.x1 + left_margin - 2;
        line_dsc.p1.y = y_pos;
        line_dsc.p2.x = coords.x2;
        line_dsc.p2.y = y_pos;
        lv_draw_line(layer, &line_dsc);

        // draw text on the side
        side_label_dsc.text = itoa(i + min_time / 100, time_str, 10);
        lv_area_t text_area = {coords.x1, y_pos - font_height / 2, coords.x1 + left_margin - 3, y_pos + font_height / 2};
        lv_draw_label(layer, &side_label_dsc, &text_area);
    }

    // draw the vertical line
    for(int i = 1; i <= days_count - 1; ++i) {
        line_dsc.p1.x = coords.x1 + (width - left_margin) / days_count * i + left_margin;
        line_dsc.p2.x = coords.x1 + (width - left_margin) / days_count * i + left_margin;
        line_dsc.p1.y = coords.y1;
        line_dsc.p2.y = coords.y2;
        lv_draw_line(layer, &line_dsc);
    }
}

static void draw_header_label(lv_obj_t *obj, lv_layer_t *layer, int day, const char *text) {
    lv_area_t coords;
    lv_obj_get_coords(obj, &coords);

    int32_t width = coords.x2 - coords.x1;
    int32_t height = coords.y2 - coords.y1;

    int32_t col_width = (width - left_margin) / days_count;

    static lv_draw_label_dsc_t header_label;
    lv_draw_label_dsc_init(&header_label);
    header_label.font = &roboto_medium_16;
    header_label.color = INKY_BLACK;
    header_label.align = LV_TEXT_ALIGN_CENTER;
    header_label.text = text;

    lv_area_t header_area = {coords.x1 + left_margin + col_width * day, coords.y1 + 2, coords.x1 + left_margin + col_width * (day + 1), coords.y1 + top_margin};

    lv_draw_label(layer, &header_label, &header_area);
}

void draw_calendar_template(lv_event_t *e) {
    lv_obj_t *obj = lv_event_get_target_obj(e);
    lv_layer_t *layer = lv_event_get_layer(e);

    draw_grid_lines(obj, layer);
    
    for(int i = 0; i < days_count; ++i) {
        draw_header_label(obj, layer, i, headers[i].c_str());
    }
}
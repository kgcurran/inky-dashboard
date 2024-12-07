#include "calendar.hpp"

static const int start_hour = 8;
static const int end_hour = 18;
static const lv_coord_t left_margin = 14;
static const lv_coord_t top_margin = 25;

void draw_event(lv_obj_t *parent, int day, int hour, int width_denominator) {
    lv_area_t coords;
    lv_obj_get_content_coords(parent, &coords);

    auto calendar_width = (coords.x2 - coords.x1);
    auto calendar_height = (coords.y2 - coords.y1);

    lv_coord_t day_width = (calendar_width - left_margin) / 2;
    lv_coord_t event_width = day_width / width_denominator;
    lv_coord_t hour_height = (calendar_height - top_margin) / (end_hour - start_hour + 1);

    lv_obj_t *event_obj = lv_obj_create(parent);
    lv_obj_set_size(event_obj, event_width, 100);
    lv_obj_set_pos(event_obj, left_margin + day_width * day, coords.y1 + top_margin + hour_height);

    lv_obj_set_style_bg_color(event_obj, INKY_BLUE, LV_PART_MAIN);
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

    lv_coord_t width = coords.x2 - coords.x1;
    lv_coord_t height = coords.y2 - coords.y1;

    char time_str[8];

    const int hour_cell_count = end_hour - start_hour + 1;

    lv_coord_t font_height = lv_font_get_line_height(side_label_dsc.font);
    lv_coord_t hour_height = ((height - top_margin) / hour_cell_count);
    
    // draw hour lines
    for(int i = 0; i <= hour_cell_count; i++) {
        lv_coord_t y_pos = coords.y1 + (i * hour_height) + top_margin;
        line_dsc.p1.x = coords.x1 + left_margin;
        line_dsc.p1.y = y_pos;
        line_dsc.p2.x = coords.x2;
        line_dsc.p2.y = y_pos;
        lv_draw_line(layer, &line_dsc);

        // draw text on the side
        side_label_dsc.text = itoa(i + start_hour, time_str, 10);
        lv_area_t text_area = {coords.x1, y_pos - font_height / 2, coords.x1 + left_margin, y_pos + font_height / 2};
        lv_draw_label(layer, &side_label_dsc, &text_area);
    }

    // draw the vertical line
    line_dsc.p1.x = coords.x1 + (width - left_margin) / 2 + left_margin;
    line_dsc.p2.x = coords.x1 + (width - left_margin) / 2 + left_margin;
    line_dsc.p1.y = coords.y1;
    line_dsc.p2.y = coords.y2;
    lv_draw_line(layer, &line_dsc);
}

void draw_calendar(lv_event_t *e) {
    lv_obj_t *obj = lv_event_get_target_obj(e);
    lv_layer_t *layer = lv_event_get_layer(e);

    draw_grid_lines(obj, layer);

    lv_area_t coords;
    lv_obj_get_coords(obj, &coords);

    lv_coord_t width = coords.x2 - coords.x1;
    lv_coord_t height = coords.y2 - coords.y1;

    static lv_draw_label_dsc_t header_label;
    lv_draw_label_dsc_init(&header_label);
    header_label.font = &roboto_bold_14;
    header_label.color = INKY_BLACK;
    header_label.align = LV_TEXT_ALIGN_CENTER;
    header_label.text = "Saturday, Dec 7";

    lv_area_t header_area_1 = {coords.x1 + left_margin, coords.y1, coords.x1 + left_margin + (width - left_margin) / 2, coords.y1 + top_margin};

    lv_draw_label(layer, &header_label, &header_area_1);
}
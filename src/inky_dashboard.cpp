#include <stdio.h>
#include <stdlib.h>
#include <nlohmann/json.hpp>
#include "inky_dashboard.hpp"
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

#include "lvgl/lvgl.h"
#include "inky_interface.hpp"
#include "calendar.hpp"
#include "net.hpp"

static uint LED_PIN = 6;

static lv_style_t style_default;

using json = nlohmann::json;

void init_display() {
    lv_display_t *display = lv_display_create(800, 480);
    lv_color_t *buf1 = (lv_color_t *) malloc(800 * 20 * sizeof(lv_color_t));

    lv_display_set_buffers(display, buf1, NULL, 800 * 20 * sizeof(lv_color_t), LV_DISP_RENDER_MODE_PARTIAL);
    lv_display_set_flush_cb(display, inky_flush_cb);

    lv_display_set_color_format(display, LV_COLOR_FORMAT_L8);
    lv_display_set_antialiasing(display, false);
    
    lv_style_init(&style_default);
    lv_style_set_pad_all(&style_default, 0);
    lv_style_set_margin_all(&style_default, 0);
    lv_style_set_border_width(&style_default, 0);
    lv_style_set_outline_width(&style_default, 0);
    lv_style_set_radius(&style_default, 0);
    lv_style_set_bg_color(&style_default, INKY_WHITE);
}

void draw_text_screen(lv_obj_t *scr, const string message) {
    lv_obj_set_flex_flow(scr, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(scr, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    lv_obj_t *error_label = lv_label_create(scr);
    lv_label_set_text(error_label, message.c_str());
    lv_obj_set_size(error_label, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_style_text_font(error_label, &roboto_regular_20, LV_PART_MAIN);
    lv_obj_set_style_text_color(error_label, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_style_margin_all(error_label, 8, LV_PART_MAIN);
}

void draw_gui(lv_obj_t *scr, const json& payload) {
    const auto &cal = payload["cal"];

    lv_obj_t *main_container = lv_obj_create(scr);
    lv_obj_add_style(main_container, &style_default, 0);
    lv_obj_set_size(main_container, lv_pct(100), lv_pct(100));
    lv_obj_set_flex_flow(main_container, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_gap(main_container, 0, LV_PART_MAIN);
    lv_obj_set_style_bg_color(main_container, INKY_WHITE, LV_PART_MAIN);

    lv_obj_t *left_side = lv_obj_create(main_container);
    lv_obj_add_style(left_side, &style_default, 0);
    lv_obj_set_size(left_side, lv_pct(45), lv_pct(100));
    lv_obj_set_flex_flow(left_side, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_border_side(left_side, LV_BORDER_SIDE_RIGHT, LV_PART_MAIN);
    lv_obj_set_style_border_width(left_side, 2, LV_PART_MAIN);
    lv_obj_set_style_border_color(left_side, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_style_pad_gap(left_side, 0, LV_PART_MAIN);

    lv_obj_t *date_header = lv_obj_create(left_side);
    lv_obj_add_style(date_header, &style_default, 0);
    lv_obj_set_style_size(date_header, lv_pct(100), LV_SIZE_CONTENT, LV_PART_MAIN);
    lv_obj_set_flex_flow(date_header, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_bg_color(date_header, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_style_flex_cross_place(date_header, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN);
    lv_obj_set_style_pad_left(date_header, 15, LV_PART_MAIN);
    lv_obj_set_style_pad_gap(date_header, 10, LV_PART_MAIN);

    lv_obj_t *day_of_month = lv_label_create(date_header);
    lv_obj_set_style_text_font(day_of_month, &roboto_black_64, LV_PART_MAIN);
    lv_obj_set_style_text_color(day_of_month, INKY_WHITE, LV_PART_MAIN);
    lv_label_set_text(day_of_month, "25");
    lv_obj_set_style_pad_top(day_of_month, 5, LV_PART_MAIN);

    lv_obj_t *date_text = lv_obj_create(date_header);
    lv_obj_add_style(date_text, &style_default, 0);
    lv_obj_set_width(date_text, LV_SIZE_CONTENT);
    lv_obj_set_height(date_text, LV_SIZE_CONTENT);
    lv_obj_set_style_bg_color(date_text, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_flex_flow(date_text, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_gap(date_text, 0, LV_PART_MAIN);

    lv_obj_t *day_of_week_text = lv_label_create(date_text);
    lv_obj_remove_style_all(day_of_week_text);
    lv_obj_set_style_text_color(day_of_week_text, INKY_WHITE, LV_PART_MAIN);
    lv_obj_set_style_text_font(day_of_week_text, &roboto_bold_30, LV_PART_MAIN);
    lv_label_set_text(day_of_week_text, "Monday");

    lv_obj_t *month_year_text = lv_label_create(date_text);
    lv_obj_remove_style_all(month_year_text);
    lv_obj_set_style_text_color(month_year_text, INKY_WHITE, LV_PART_MAIN);
    lv_obj_set_style_text_font(month_year_text, &roboto_regular_20, LV_PART_MAIN);
    lv_label_set_text(month_year_text, "November 2024");

    lv_obj_t *todo_list_item = lv_obj_create(left_side);
    lv_obj_add_style(todo_list_item, &style_default, 0);
    lv_obj_set_style_size(todo_list_item, lv_pct(100), LV_SIZE_CONTENT, LV_PART_MAIN);
    lv_obj_set_flex_flow(todo_list_item, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_gap(todo_list_item, 5, LV_PART_MAIN);
    lv_obj_set_style_pad_ver(todo_list_item, 8, LV_PART_MAIN);
    lv_obj_set_style_pad_hor(todo_list_item, 8, LV_PART_MAIN);
    lv_obj_set_style_border_side(todo_list_item, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN);
    lv_obj_set_style_border_width(todo_list_item, 1, LV_PART_MAIN);
    lv_obj_set_style_border_color(todo_list_item, INKY_BLACK, LV_PART_MAIN);

    lv_obj_t *task_name = lv_label_create(todo_list_item);
    lv_obj_set_style_text_color(task_name, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_style_text_font(task_name, &roboto_regular_18, LV_PART_MAIN);
    lv_label_set_text(task_name, "Project 5 - Dynamic Memory");

    lv_obj_t *task_details = lv_obj_create(todo_list_item);
    lv_obj_add_style(task_details, &style_default, 0);
    lv_obj_set_style_size(task_details, lv_pct(100), LV_SIZE_CONTENT, LV_PART_MAIN);
    lv_obj_set_flex_flow(todo_list_item, LV_FLEX_FLOW_COLUMN);

    lv_obj_t *task_due_date = lv_label_create(task_details);
    lv_obj_set_style_text_color(task_due_date, INKY_BLACK, LV_PART_MAIN);
    lv_obj_set_style_text_font(task_due_date, &roboto_bold_14, LV_PART_MAIN);
    lv_label_set_text(task_due_date, "Nov 26 · Tuesday · Today");

    lv_obj_t *calendar = lv_obj_create(main_container);
    lv_obj_add_style(calendar, &style_default, 0);
    lv_obj_set_flex_grow(calendar, 1);
    lv_obj_set_size(calendar, lv_pct(100), lv_pct(100));
    lv_obj_set_style_bg_color(calendar, INKY_WHITE, LV_PART_MAIN);
    lv_obj_add_event_cb(calendar, cal_draw_template, LV_EVENT_DRAW_MAIN, NULL);
    lv_obj_set_scrollbar_mode(calendar, LV_SCROLLBAR_MODE_OFF);

    lv_obj_update_layout(calendar);

    cal_init(cal);
    cal_draw_events(calendar);
}

int connect_wifi() {
    for(int i = 0; i < 5; ++i) {
        if(!cyw43_arch_wifi_connect_timeout_ms(SSID, PASS, CYW43_AUTH_WPA2_AES_PSK, 10000)) return 0;
    }
    
    return -1;
}

int main() {
    stdio_init_all();

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    if (cyw43_arch_init()) {
        return -1;
    }

    lv_init();
    init_display();

    lv_obj_t *scr = lv_scr_act();
    lv_obj_add_style(scr, &style_default, 0);

    cyw43_arch_enable_sta_mode();
    if (connect_wifi()) {
        draw_text_screen(scr, "Error: Wi-Fi connection failed.\nSSID: " + string(SSID));
    } else {
        json payload = net_fetch_payload();
        draw_gui(scr, payload);
    }

    lv_task_handler_callback();
    
    while (true) {
        sleep_ms(1000);
    }

    return 0;
}
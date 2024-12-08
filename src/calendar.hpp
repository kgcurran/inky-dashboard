#ifndef CALENDAR_T

#define CALENDAR_T

#include <ctime>
#include <string>
#include <stdlib.h>
#include <vector>
#include "lvgl/lvgl.h"
#include "inky_interface.hpp"
#include <nlohmann/json.hpp>

using string = std::string;
using json = nlohmann::json;

struct draw_record {
    int day, start_time, end_time;
    int width_denominator = 1, column_index = 0;
    string text;
};

struct event {
    int color;
    int start_day;
    int start_time;
    int end_day;
    int end_time;
    string text;

    event(int color, int start_day, int start_time, int end_day, int end_time, string text) {
        this->color = color;
        this->start_day = start_day;
        this->start_time = start_time;
        this->end_day = end_day;
        this->end_time = end_time;
        this->text = text;
    }
};

struct rect {
    int x, y, w, h;
};

void calendar_init(const json &calendar_data);
void draw_events(lv_obj_t *parent);
void draw_calendar_template(lv_event_t *);

#endif
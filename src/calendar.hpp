#ifndef CALENDAR_T

#define CALENDAR_T

#include <ctime>
#include <string>
#include <stdlib.h>
#include <vector>
#include "lvgl/lvgl.h"
#include "inky_interface.hpp"

struct draw_record {
    int day, start_time, end_time;
    int width_denominator = 1, column_index = 0;
};

struct event {
    int calendar_index;
    int start_day;
    int start_time;
    int end_day;
    int end_time;

    event(int calendar_index, int start_day, int start_time, int end_day, int end_time) {
        this->calendar_index = calendar_index;
        this->start_day = start_day;
        this->start_time = start_time;
        this->end_day = end_day;
        this->end_time = end_time;
    }
};

struct rect {
    int x, y, w, h;
};

void calendar_init();
void draw_events(lv_obj_t *parent, const std::vector<event> &events);
void draw_calendar_template(lv_event_t *);

#endif
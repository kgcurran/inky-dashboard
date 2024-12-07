#ifndef CALENDAR_T

#define CALENDAR_T

#include <ctime>
#include <string>
#include <stdlib.h>
#include "lvgl/lvgl.h"
#include "inky_interface.hpp"

void draw_event(lv_obj_t *parent, int day, int hour, int width_fraction);
void draw_calendar(lv_event_t *);

struct draw_record {
    int x, y, color_index;
};

struct event {
    int calendar_index;
    std::string summary;
    std::tm dtstart;
    std::tm dtend;
};

struct rect {
    int x, y, w, h;
};

#endif
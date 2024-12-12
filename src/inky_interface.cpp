#include "inky_interface.hpp"
#include "inky_dashboard.hpp"
#include "drivers/psram_display/psram_display.hpp"
#include "drivers/inky73/inky73.hpp"

using namespace pimoroni;

PSRamDisplay ramDisplay(800, 480);
PicoGraphics_PenInky7 graphics(800, 480, ramDisplay);
Inky73 inky7(800, 480);

void inky_flush_cb(lv_display_t * display, const lv_area_t * area, uint8_t * px_map) {
    uint8_t *buf8 = (uint8_t *) px_map;
    int32_t x, y;

    for(y = area->y1; y <= area->y2; ++y) {
        for(x = area->x1; x <= area->x2; x++) {
            graphics.set_pen(*buf8);
            graphics.set_pixel({x,y});
            ++buf8;
        }
    }
    
    lv_display_flush_ready(display);
}

void lv_task_handler_callback() {
    lv_timer_handler();
    gpio_put(STATUS_LED, 1);
    inky7.update(&graphics);
    gpio_put(STATUS_LED, 0);
}
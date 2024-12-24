#include "inky_interface.hpp"
#include "settings.hpp"
#include "libraries/inky_frame_7/inky_frame_7.hpp"
#include "pico/cyw43_arch.h"

using namespace pimoroni;

InkyFrame frame;

void inky_flush_cb(lv_display_t * display, const lv_area_t * area, uint8_t * px_map) {
    uint8_t *buf8 = (uint8_t *) px_map;
    int32_t x, y;

    for(y = area->y1; y <= area->y2; ++y) {
        for(x = area->x1; x <= area->x2; x++) {
            frame.set_pen(*buf8);
            frame.set_pixel({x,y});
            ++buf8;
        }
    }
    
    lv_display_flush_ready(display);
}

void inky_sleep(int wake_in_minutes) {
    frame.rtc.clear_timer_flag();
    frame.sleep(wake_in_minutes);
}

int connect_wifi() {
    cyw43_arch_enable_sta_mode();

    frame.led(InkyFrame::LED_CONNECTION, 100);
    for(int i = 0; i < 5; ++i) {
        if(!cyw43_arch_wifi_connect_timeout_ms(SSID, PASS, CYW43_AUTH_WPA2_AES_PSK, 10000)) {
            frame.led(InkyFrame::LED_CONNECTION, 0);
            return 0;
        }
    }

    frame.led(InkyFrame::LED_CONNECTION, 0);
    
    return -1;
}

int inky_init() {
    // Initializes stdio, GPIO, and cyw43

    stdio_init_all();

    frame.init();

    if(cyw43_arch_init()) {
        return -1;
    }

    return 0;
}

void lv_task_handler_callback() {
    lv_timer_handler();
    frame.led(InkyFrame::LED_ACTIVITY, 100);
    frame.update(true);
    frame.led(InkyFrame::LED_ACTIVITY, 0);
}
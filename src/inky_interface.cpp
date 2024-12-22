#include "inky_interface.hpp"
#include "inky_dashboard.hpp"
#include "drivers/pcf85063a/pcf85063a.hpp"
#include "drivers/psram_display/psram_display.hpp"
#include "drivers/inky73/inky73.hpp"
#include "pico/cyw43_arch.h"

using namespace pimoroni;

PSRamDisplay ramDisplay(800, 480);
PicoGraphics_PenInky7 graphics(800, 480, ramDisplay);
Inky73 inky7(800, 480);
PCF85063A rtc;

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

void sleep(int wake_in_minutes) {
    if(wake_in_minutes != -1) {
      // set an alarm to wake inky up in wake_in_minutes - the maximum sleep
      // is 255 minutes or around 4.5 hours which is the longest timer the RTC
      // supports, to sleep any longer we need to specify a date and time to
      // wake up
      rtc.set_timer(wake_in_minutes, PCF85063A::TIMER_TICK_1_OVER_60HZ);
      rtc.enable_timer_interrupt(true, false);
    }

    // release the vsys hold pin so that inky can go to sleep
    gpio_put(HOLD_VSYS_EN, false);
    while(true){};
}

int connect_wifi() {
    cyw43_arch_enable_sta_mode();
    
    gpio_put(WIFI_LED, 1);
    for(int i = 0; i < 5; ++i) {
        if(!cyw43_arch_wifi_connect_timeout_ms(SSID, PASS, CYW43_AUTH_WPA2_AES_PSK, 10000)) {
            gpio_put(WIFI_LED, 0);
            return 0;
        }
    }

    gpio_put(WIFI_LED, 0);
    
    return -1;
}

int inky_init() {
    // Initializes stdio, GPIO, and cyw43

    stdio_init_all();

    gpio_init(STATUS_LED);
    gpio_init(WIFI_LED);
    gpio_set_dir(STATUS_LED, GPIO_OUT);
    gpio_set_dir(WIFI_LED, GPIO_OUT);

    // hold vsys so that inky frame can work on battery
    gpio_set_function(HOLD_VSYS_EN, GPIO_FUNC_SIO);
    gpio_set_dir(HOLD_VSYS_EN, GPIO_OUT);
    gpio_put(HOLD_VSYS_EN, true);

    if (cyw43_arch_init()) {
        return -1;
    }

}

void lv_task_handler_callback() {
    lv_timer_handler();
    gpio_put(STATUS_LED, 1);
    inky7.update(&graphics);
    gpio_put(STATUS_LED, 0);
}
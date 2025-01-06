# Inky Dashboard
A simple e-ink dashboard for planning and organizing your life.

![](showcase.jpg)

## Features
- To-do list integration with Todoist
- Calendar syncing with Google Calendar/iCal
- Multiple colors for calendar events
- Overlapping calendar events
- Deep sleep to conserve battery

## Hardware
The code is written for the [Inky Frame 7.3" 7-color E ink display](https://shop.pimoroni.com/products/inky-frame-7-3?variant=40541882056787), which is powered by a Raspberry Pi Pico W. Layout is handled using [LVGL](https://lvgl.io/), so modifying the code to work with other E ink displays shoudn't be too difficult.

## Server
The code relies on a server program to retrieve the latest information to show on the display. That code can be found here: https://github.com/jaeheonshim/inky-dashboard-server. There are many platforms available to host the server for free - I recommend [PythonAnywhere](https://www.pythonanywhere.com)
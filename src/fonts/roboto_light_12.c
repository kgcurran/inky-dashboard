/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font Roboto-Light.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!@#$%^&*()-_=+[]{}|;:'",.<>?/\  --format lvgl -o roboto_light_12.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_LIGHT_12
#define ROBOTO_LIGHT_12 1
#endif

#if ROBOTO_LIGHT_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xfc,

    /* U+0023 "#" */
    0x14, 0x49, 0xf9, 0x22, 0x85, 0x3f, 0xa4, 0x48,

    /* U+0024 "$" */
    0x23, 0xa7, 0x18, 0x20, 0xc1, 0x8c, 0x5c, 0x40,

    /* U+0025 "%" */
    0x60, 0x90, 0x94, 0x68, 0xe, 0x19, 0x29, 0x29,
    0x6,

    /* U+0026 "&" */
    0x31, 0x24, 0x94, 0x62, 0x58, 0xe2, 0x74,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x91, 0x22,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x29, 0x28,

    /* U+002A "*" */
    0x21, 0x3e, 0xa5, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x58,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x12, 0x24, 0x44, 0x88,

    /* U+0030 "0" */
    0x76, 0xe3, 0x18, 0xc6, 0x3b, 0x70,

    /* U+0031 "1" */
    0x74, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x74, 0x62, 0x11, 0x10, 0x88, 0xf8,

    /* U+0033 "3" */
    0x74, 0x62, 0x13, 0x6, 0x31, 0x70,

    /* U+0034 "4" */
    0x8, 0x62, 0x92, 0x4a, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0xfc, 0x21, 0xe9, 0x84, 0x33, 0x70,

    /* U+0036 "6" */
    0x32, 0x21, 0x6c, 0xc6, 0x39, 0x70,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x42, 0x8, 0x20,

    /* U+0038 "8" */
    0x72, 0x28, 0xa2, 0x73, 0x68, 0x61, 0x78,

    /* U+0039 "9" */
    0x76, 0xe3, 0x19, 0xb4, 0x22, 0x60,

    /* U+003A ":" */
    0x82,

    /* U+003B ";" */
    0x40, 0x15,

    /* U+003C "<" */
    0x9, 0xb0, 0x83, 0x80,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x83, 0x6, 0x26, 0x40,

    /* U+003F "?" */
    0x74, 0x42, 0x11, 0x10, 0x80, 0x20,

    /* U+0040 "@" */
    0x1f, 0x8, 0x64, 0xa, 0x31, 0x92, 0x64, 0x9a,
    0x26, 0x5b, 0x9b, 0x90, 0x6, 0x0, 0xf0,

    /* U+0041 "A" */
    0x10, 0x30, 0xa1, 0x42, 0x48, 0x9f, 0x21, 0x82,

    /* U+0042 "B" */
    0xf2, 0x28, 0xa2, 0xf2, 0x38, 0x61, 0xf8,

    /* U+0043 "C" */
    0x38, 0x8a, 0xc, 0x8, 0x10, 0x20, 0xa2, 0x38,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0x62, 0xf0,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0xfc,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0x80,

    /* U+0047 "G" */
    0x3c, 0x8e, 0x4, 0x8, 0xf0, 0x60, 0xa1, 0x3c,

    /* U+0048 "H" */
    0x86, 0x18, 0x61, 0xfe, 0x18, 0x61, 0x84,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x86, 0x31, 0x70,

    /* U+004B "K" */
    0x85, 0x12, 0x45, 0xe, 0x12, 0x22, 0x44, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0x81, 0xc3, 0xc3, 0xc5, 0xa5, 0xa9, 0xb9, 0x99,
    0x91,

    /* U+004E "N" */
    0x83, 0x86, 0x8d, 0x19, 0x31, 0x62, 0xc3, 0x82,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,
    0x8,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x48, 0xa1, 0x84,

    /* U+0053 "S" */
    0x7a, 0x38, 0x60, 0x70, 0x38, 0x71, 0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+0056 "V" */
    0x83, 0x5, 0x12, 0x24, 0x45, 0xa, 0x14, 0x10,

    /* U+0057 "W" */
    0x84, 0x63, 0x14, 0xc5, 0x29, 0x4a, 0x94, 0xa3,
    0x18, 0xc6, 0x21, 0x0,

    /* U+0058 "X" */
    0x42, 0x88, 0xa1, 0x41, 0x5, 0xa, 0x22, 0x42,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x42, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x10, 0x84, 0x20, 0x84, 0x20, 0xfc,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x82, 0x10, 0x80,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x26, 0x55, 0x90,

    /* U+005F "_" */
    0xf8,

    /* U+0061 "a" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x84, 0x21, 0x6d, 0xc6, 0x31, 0x9f, 0x80,

    /* U+0063 "c" */
    0x76, 0x63, 0x8, 0x65, 0xc0,

    /* U+0064 "d" */
    0x8, 0x42, 0xdd, 0xc6, 0x31, 0xcb, 0xc0,

    /* U+0065 "e" */
    0x76, 0x63, 0xf8, 0x65, 0xc0,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x6e, 0xe3, 0x18, 0xe5, 0xe1, 0x9b, 0x80,

    /* U+0068 "h" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0x24, 0xf0,

    /* U+006B "k" */
    0x84, 0x21, 0x19, 0x53, 0x94, 0x94, 0x40,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xb3, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0070 "p" */
    0xb6, 0xe3, 0x18, 0xcf, 0xd0, 0x84, 0x0,

    /* U+0071 "q" */
    0x6e, 0xe3, 0x18, 0xe5, 0xe1, 0x8, 0x40,

    /* U+0072 "r" */
    0xba, 0x49, 0x20,

    /* U+0073 "s" */
    0x74, 0x60, 0xc1, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x92, 0x60,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0,

    /* U+0076 "v" */
    0x8a, 0x24, 0x94, 0x50, 0xc2, 0x0,

    /* U+0077 "w" */
    0x88, 0xcc, 0x95, 0x4a, 0xa5, 0x63, 0x30, 0x88,

    /* U+0078 "x" */
    0x49, 0x23, 0x8, 0x31, 0x28, 0x80,

    /* U+0079 "y" */
    0x8a, 0x24, 0x94, 0x50, 0xc2, 0x8, 0x21, 0x0,

    /* U+007A "z" */
    0xf8, 0x88, 0x44, 0x43, 0xe0,

    /* U+007B "{" */
    0x29, 0x24, 0xa2, 0x49, 0x22,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0x89, 0x24, 0x8a, 0x49, 0x28
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 47, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 43, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 55, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 106, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 142, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 33, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 37, .adv_w = 61, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 42, .adv_w = 63, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 47, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 51, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 58, .adv_w = 37, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 59, .adv_w = 55, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 60, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 76, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 66, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 106, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 40, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 37, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 130, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 106, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 136, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 140, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 161, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 136, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 101, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 283, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 172, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 46, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 366, .adv_w = 46, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 370, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 373, .adv_w = 83, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 374, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 64, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 415, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 43, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 44, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 429, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 43, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 170, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 105, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 464, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 471, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 105, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 145, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 516, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 63, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 526, .adv_w = 42, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 528, .adv_w = 63, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 64, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 29, .glyph_id_start = 65,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 65,
    3, 67,
    3, 68,
    3, 69,
    3, 71,
    3, 77,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 83,
    3, 87,
    8, 3,
    8, 8,
    8, 34,
    8, 65,
    8, 67,
    8, 68,
    8, 69,
    8, 71,
    8, 77,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 83,
    8, 87,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 79,
    34, 84,
    34, 85,
    34, 86,
    34, 87,
    34, 89,
    34, 90,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 93,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 67,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 79,
    38, 81,
    38, 85,
    38, 86,
    38, 87,
    38, 89,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 65,
    39, 67,
    39, 68,
    39, 69,
    39, 71,
    39, 79,
    39, 81,
    39, 82,
    39, 85,
    39, 86,
    39, 89,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 67,
    44, 68,
    44, 69,
    44, 71,
    44, 77,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 85,
    44, 86,
    44, 87,
    44, 89,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 85,
    45, 86,
    45, 87,
    45, 89,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 65,
    49, 67,
    49, 68,
    49, 69,
    49, 71,
    49, 79,
    49, 81,
    49, 84,
    49, 86,
    49, 89,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 65,
    53, 67,
    53, 68,
    53, 69,
    53, 71,
    53, 77,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 65,
    55, 67,
    55, 68,
    55, 69,
    55, 71,
    55, 79,
    55, 81,
    55, 82,
    55, 85,
    55, 86,
    55, 89,
    55, 93,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 65,
    56, 67,
    56, 68,
    56, 69,
    56, 71,
    56, 79,
    56, 81,
    56, 82,
    56, 85,
    56, 93,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 67,
    57, 68,
    57, 69,
    57, 71,
    57, 79,
    57, 81,
    57, 85,
    57, 86,
    57, 89,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 65,
    58, 67,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 77,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 88,
    58, 89,
    58, 90,
    58, 93,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 67,
    59, 68,
    59, 69,
    59, 71,
    59, 79,
    59, 81,
    59, 85,
    59, 86,
    59, 87,
    59, 89,
    60, 43,
    60, 54,
    65, 3,
    65, 8,
    65, 86,
    65, 89,
    66, 3,
    66, 8,
    66, 86,
    66, 88,
    66, 89,
    66, 90,
    67, 3,
    67, 8,
    69, 3,
    69, 8,
    69, 86,
    69, 89,
    70, 3,
    70, 8,
    70, 10,
    70, 62,
    70, 67,
    70, 68,
    70, 69,
    70, 71,
    70, 81,
    70, 93,
    72, 3,
    72, 8,
    75, 67,
    75, 68,
    75, 69,
    75, 71,
    75, 81,
    77, 3,
    77, 8,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    79, 86,
    79, 88,
    79, 89,
    79, 90,
    80, 3,
    80, 8,
    80, 86,
    80, 88,
    80, 89,
    80, 90,
    82, 3,
    82, 8,
    82, 13,
    82, 15,
    82, 65,
    82, 67,
    82, 68,
    82, 69,
    82, 70,
    82, 71,
    82, 79,
    82, 81,
    82, 84,
    82, 86,
    82, 87,
    82, 89,
    84, 79,
    86, 3,
    86, 8,
    86, 13,
    86, 15,
    86, 65,
    86, 67,
    86, 68,
    86, 69,
    86, 70,
    86, 71,
    86, 79,
    86, 81,
    87, 13,
    87, 15,
    88, 67,
    88, 68,
    88, 69,
    88, 71,
    88, 79,
    88, 81,
    89, 3,
    89, 8,
    89, 13,
    89, 15,
    89, 65,
    89, 67,
    89, 68,
    89, 69,
    89, 70,
    89, 71,
    89, 79,
    89, 81,
    90, 67,
    90, 68,
    90, 69,
    90, 71,
    90, 79,
    90, 81,
    91, 43,
    91, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -4, -10, -10, -11, -5, -6, -6, -6,
    -6, -2, -2, -6, -2, -6, -7, 1,
    -10, -10, -11, -5, -6, -6, -6, -6,
    -2, -2, -6, -2, -6, -7, 1, 2,
    2, 2, -16, -16, -16, -16, -21, -11,
    -11, -6, -1, -1, -1, -1, -12, -2,
    -8, -6, -9, -1, -2, -1, -5, -3,
    -5, 1, -3, -2, -5, -2, -3, -1,
    -2, -10, -10, -2, -3, -2, -2, -4,
    -2, 2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -2, -22, -22, -16,
    -25, 2, -3, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -2, 2, -3, 2,
    -3, 2, -3, 2, -3, -2, -6, -3,
    -3, -3, -3, -2, -2, -2, -2, -2,
    -2, -3, -2, -2, -2, -4, -6, -4,
    -31, -31, 2, -6, -6, -6, -6, -26,
    -5, -16, -13, -22, -4, -12, -9, -12,
    2, -3, 2, -3, 2, -3, 2, -3,
    -10, -10, -2, -3, -2, -2, -4, -2,
    -30, -30, -13, -19, -3, -2, -1, -1,
    -1, -1, -1, -1, -1, 1, 1, 1,
    -4, -3, -2, -3, -7, -2, -4, -4,
    -20, -22, -20, -7, -3, -3, -22, -3,
    -3, -1, 2, 2, 1, 2, -11, -9,
    -9, -9, -9, -10, -10, -9, -10, -9,
    -7, -11, -9, -7, -5, -7, -7, -6,
    -2, 2, -21, -3, -21, -7, -1, -1,
    -1, -1, 2, -4, -4, -4, -4, -4,
    -4, -4, -3, -3, -1, -1, 2, 1,
    -12, -6, -12, -4, 1, 1, -3, -3,
    -3, -3, -3, -3, -3, -2, -2, 1,
    -4, -2, -2, -2, -2, 1, -2, -2,
    -2, -2, -2, -2, -2, -3, -3, -3,
    2, -5, -20, -5, -20, -9, -3, -3,
    -9, -3, -3, -1, 2, -9, 2, 2,
    1, 2, 2, -7, -6, -6, -6, -2,
    -6, -4, -4, -6, -4, -6, -4, -5,
    -2, -4, -2, -2, -2, -3, 2, 1,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -3, -3, -3, -2, -2,
    -6, -6, -1, -1, -3, -3, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    2, 2, 2, 2, -2, -2, -2, -2,
    -2, 2, -10, -10, -2, -2, -2, -2,
    -2, -10, -10, -10, -10, -13, -13, -1,
    -2, -1, -1, -3, -3, -1, -1, -1,
    -1, 2, 2, -12, -12, -4, -2, -2,
    -2, 1, -2, -2, -2, 5, 2, 2,
    2, -2, 1, 1, -10, -10, -1, -1,
    -1, -1, 1, -1, -1, -1, -12, -12,
    -2, -2, -2, -2, -2, -2, 1, 1,
    -10, -10, -1, -1, -1, -1, 1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t roboto_light_12 = {
#else
lv_font_t roboto_light_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ROBOTO_LIGHT_12*/


/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --font Roboto-Medium.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!@#$%^&*()-_=+[]{}|;:'",.·<>?/\  --format lvgl -o roboto_medium_16.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_MEDIUM_16
#define ROBOTO_MEDIUM_16 1
#endif

#if ROBOTO_MEDIUM_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3,

    /* U+0022 "\"" */
    0xff, 0xff,

    /* U+0023 "#" */
    0x1b, 0x9, 0x4, 0x8f, 0xf1, 0x20, 0xb0, 0xd8,
    0x68, 0xff, 0x12, 0x9, 0x4, 0x80,

    /* U+0024 "$" */
    0x8, 0x8, 0x7e, 0xc7, 0xc3, 0xc0, 0xf0, 0x3c,
    0xe, 0x3, 0xc3, 0xe3, 0x7e, 0x8, 0x8,

    /* U+0025 "%" */
    0x70, 0x1b, 0x23, 0x64, 0x6d, 0x7, 0x20, 0x8,
    0x3, 0x0, 0x5e, 0x1e, 0x62, 0xcc, 0xd9, 0x81,
    0xe0,

    /* U+0026 "&" */
    0x3c, 0x19, 0x86, 0x61, 0x98, 0x6e, 0xf, 0x3,
    0x81, 0xf6, 0xcd, 0xb1, 0xcc, 0x70, 0xfe,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x11, 0x98, 0xc4, 0x63, 0x18, 0xc6, 0x31, 0x86,
    0x30, 0x86, 0x0,

    /* U+0029 ")" */
    0x43, 0xc, 0x61, 0xc, 0x63, 0x18, 0xc6, 0x33,
    0x19, 0x88, 0x0,

    /* U+002A "*" */
    0x18, 0x18, 0xda, 0x7e, 0x3c, 0x2c, 0x64,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x20, 0x86, 0x10, 0x43, 0x8, 0x21, 0x84,
    0x10, 0xc0,

    /* U+0030 "0" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+0031 "1" */
    0x1b, 0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0032 "2" */
    0x3c, 0x66, 0xc6, 0x6, 0x6, 0xe, 0x1c, 0x18,
    0x38, 0x70, 0xe0, 0xff,

    /* U+0033 "3" */
    0x7d, 0x8f, 0x18, 0x30, 0x47, 0x3, 0x3, 0x7,
    0x8f, 0xb3, 0xc0,

    /* U+0034 "4" */
    0x6, 0xe, 0x1e, 0x1e, 0x36, 0x26, 0x66, 0xc6,
    0xff, 0x6, 0x6, 0x6,

    /* U+0035 "5" */
    0x7f, 0x60, 0x60, 0x60, 0x7c, 0x66, 0x3, 0x3,
    0x3, 0x43, 0x66, 0x3c,

    /* U+0036 "6" */
    0x1c, 0x30, 0x60, 0xc0, 0xfc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0xc, 0xc, 0xc, 0x18,
    0x18, 0x30, 0x30, 0x30,

    /* U+0038 "8" */
    0x7d, 0x9f, 0x1e, 0x34, 0x47, 0x1b, 0x63, 0xc7,
    0x8d, 0xb1, 0xe0,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0xbf, 0x6,
    0x8, 0x31, 0x80,

    /* U+003A ":" */
    0xc0, 0x0, 0xc0,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0x69, 0x0,

    /* U+003C "<" */
    0x6, 0x3d, 0xe7, 0xf, 0x7, 0x83, 0x81,

    /* U+003D "=" */
    0xfe, 0x0, 0x0, 0xf, 0xe0,

    /* U+003E ">" */
    0x81, 0xc1, 0xf0, 0x71, 0xff, 0x38, 0x0,

    /* U+003F "?" */
    0x7d, 0x8f, 0x18, 0x30, 0xe3, 0x86, 0x18, 0x30,
    0x0, 0x1, 0x80,

    /* U+0040 "@" */
    0xf, 0x80, 0xc3, 0xc, 0x4, 0xc7, 0x2e, 0x4c,
    0xe6, 0x67, 0x32, 0x39, 0x11, 0xc8, 0x8e, 0x44,
    0x73, 0x64, 0xcd, 0xc6, 0x0, 0x1c, 0x0, 0x3e,
    0x0,

    /* U+0041 "A" */
    0xc, 0x1, 0xc0, 0x38, 0xd, 0x1, 0xb0, 0x66,
    0xc, 0x61, 0x8c, 0x7f, 0x8c, 0x19, 0x83, 0x60,
    0x60,

    /* U+0042 "B" */
    0xfe, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc6, 0xc3,
    0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0043 "C" */
    0x1e, 0x31, 0x98, 0x78, 0x3c, 0x6, 0x3, 0x1,
    0x80, 0xc1, 0xa0, 0xd8, 0xc7, 0xc0,

    /* U+0044 "D" */
    0xf8, 0xc6, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc6, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0047 "G" */
    0x3e, 0x31, 0x90, 0x78, 0xc, 0x6, 0x3, 0x1f,
    0x83, 0xc1, 0xb0, 0xd8, 0x63, 0xe0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x30,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x7,
    0x8f, 0x33, 0xc0,

    /* U+004B "K" */
    0xc3, 0x63, 0xb3, 0x99, 0x8d, 0x87, 0xc3, 0xe1,
    0xd8, 0xce, 0x63, 0x30, 0xd8, 0x70,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+004D "M" */
    0xe0, 0x7e, 0x7, 0xf0, 0xff, 0xf, 0xd0, 0xbd,
    0x9b, 0xd9, 0xbc, 0x93, 0xcf, 0x3c, 0xf3, 0xc6,
    0x3c, 0x63,

    /* U+004E "N" */
    0xc1, 0xf0, 0xf8, 0x7e, 0x3d, 0x9e, 0xcf, 0x37,
    0x9b, 0xc7, 0xe1, 0xf0, 0xf8, 0x30,

    /* U+004F "O" */
    0x3e, 0x31, 0x90, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x98, 0xc7, 0xc0,

    /* U+0050 "P" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0x1b, 0xf9,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x31, 0x90, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x98, 0xc7, 0xc0, 0x38, 0x8,

    /* U+0052 "R" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xcc,
    0xc6, 0xc6, 0xc3, 0xc3,

    /* U+0053 "S" */
    0x3e, 0x31, 0xb0, 0x78, 0xf, 0x3, 0xf0, 0xfc,
    0xf, 0x1, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+0056 "V" */
    0xc0, 0xd8, 0x36, 0x19, 0x86, 0x31, 0x8c, 0xc3,
    0x30, 0x6c, 0x1e, 0x7, 0x80, 0xe0, 0x30,

    /* U+0057 "W" */
    0xc3, 0xd, 0x8c, 0x26, 0x39, 0x99, 0xe6, 0x67,
    0x98, 0x9a, 0x63, 0x49, 0xf, 0x3c, 0x3c, 0xf0,
    0xf1, 0xc1, 0x87, 0x6, 0x18,

    /* U+0058 "X" */
    0x61, 0x9c, 0x63, 0x30, 0xec, 0x1e, 0x3, 0x80,
    0xe0, 0x78, 0x3b, 0xc, 0xc6, 0x19, 0x87,

    /* U+0059 "Y" */
    0xe1, 0xd8, 0x67, 0x38, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0xff, 0x7, 0x6, 0xc, 0xc, 0x18, 0x18, 0x30,
    0x70, 0x60, 0xe0, 0xff,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb7,

    /* U+005C "\\" */
    0xc0, 0xc1, 0x83, 0x3, 0x6, 0x4, 0xc, 0x18,
    0x18, 0x30, 0x60, 0x60,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x10, 0xe2, 0x9a, 0x6d, 0x10,

    /* U+005F "_" */
    0xfe,

    /* U+0061 "a" */
    0x7d, 0xcf, 0x18, 0x37, 0xf8, 0xf1, 0xe7, 0x7e,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xec, 0xd8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x37, 0xe0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0x1e, 0xc, 0x18, 0x31, 0xb3, 0x3c,

    /* U+0064 "d" */
    0x6, 0xc, 0x19, 0xf6, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0x9b, 0xf0,

    /* U+0065 "e" */
    0x1c, 0x66, 0x63, 0x63, 0xff, 0x40, 0x60, 0x63,
    0x3e,

    /* U+0066 "f" */
    0x3d, 0x86, 0x3e, 0x61, 0x86, 0x18, 0x61, 0x86,
    0x18,

    /* U+0067 "g" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xb3, 0x3e,
    0xd, 0x13, 0xc0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x30,

    /* U+0069 "i" */
    0xc3, 0xff, 0xff,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf0, 0xf8,
    0xf8, 0xcc, 0xce, 0xc6,

    /* U+006C "l" */
    0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xfd, 0xec, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+006F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66,
    0x3c,

    /* U+0070 "p" */
    0xfd, 0x9b, 0x1e, 0x3c, 0x78, 0xf1, 0xe6, 0xfd,
    0x83, 0x6, 0x0,

    /* U+0071 "q" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xb3, 0x3e,
    0xc, 0x18, 0x30,

    /* U+0072 "r" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x7d, 0x8f, 0x1f, 0x87, 0xc3, 0xf1, 0xe3, 0x7c,

    /* U+0074 "t" */
    0x63, 0x3e, 0xc6, 0x31, 0x8c, 0x63, 0xe,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7e,

    /* U+0076 "v" */
    0xc3, 0x66, 0x66, 0x66, 0x2c, 0x3c, 0x3c, 0x18,
    0x18,

    /* U+0077 "w" */
    0xc6, 0x24, 0x66, 0x66, 0x66, 0xf6, 0x6b, 0x42,
    0x94, 0x39, 0xc3, 0x9c, 0x30, 0x80,

    /* U+0078 "x" */
    0x66, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66,
    0x67,

    /* U+0079 "y" */
    0xe3, 0x66, 0x66, 0x66, 0x34, 0x3c, 0x3c, 0x18,
    0x18, 0x18, 0x10, 0x60,

    /* U+007A "z" */
    0xfe, 0x1c, 0x70, 0xc3, 0x86, 0x18, 0x70, 0xfe,

    /* U+007B "{" */
    0x19, 0x8c, 0x63, 0x18, 0xd8, 0x31, 0x8c, 0x63,
    0x18, 0x60,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc7, 0x18, 0xc6, 0x31, 0x83, 0x63, 0x18, 0xc6,
    0x73, 0x0,

    /* U+00B7 "·" */
    0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 69, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 83, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 146, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 43, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 68, .adv_w = 89, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 79, .adv_w = 90, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 90, .adv_w = 113, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 97, .adv_w = 143, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 105, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 107, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 108, .adv_w = 72, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 146, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 146, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 68, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 61, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 239, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 246, .adv_w = 143, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 251, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 258, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 229, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 294, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 167, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 145, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 182, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 72, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 139, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 182, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 177, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 177, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 515, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 155, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 155, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 167, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 166, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 225, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 156, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 70, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 653, .adv_w = 107, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 665, .adv_w = 70, .box_w = 4, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 673, .adv_w = 109, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 678, .adv_w = 116, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 679, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 134, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 91, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 746, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 65, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 64, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 768, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 65, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 223, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 825, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 836, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 85, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 190, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 125, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 909, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 86, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 927, .adv_w = 64, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 931, .adv_w = 86, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 941, .adv_w = 72, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 5}
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
    },
    {
        .range_start = 183, .range_length = 1, .glyph_id_start = 94,
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
    34, 77,
    34, 78,
    34, 79,
    34, 80,
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
    44, 79,
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
    -7, -5, -5, -15, -6, -7, -7, -7,
    -7, -2, -2, -11, -2, -7, -11, 1,
    -5, -5, -15, -6, -7, -7, -7, -7,
    -2, -2, -11, -2, -7, -11, 1, 3,
    5, 3, -36, -36, -36, -36, -31, -15,
    -15, -10, -3, -3, -3, -3, -15, -2,
    -10, -5, -19, -6, -6, -1, -6, -2,
    -1, -6, -4, -6, 2, -3, -3, -7,
    -3, -4, -1, -2, -15, -15, -3, -11,
    -3, -3, -5, -3, 3, -2, -2, -2,
    -2, -2, -2, -2, -2, -3, -3, -3,
    -34, -34, -24, -26, 3, -4, -3, -3,
    -3, -3, -3, -3, -3, -3, -3, -3,
    2, -4, 2, -3, 2, -4, 2, -3,
    -3, -20, -4, -4, -4, -4, -3, -3,
    -3, -3, -3, -3, -3, -5, -8, -5,
    -36, -36, 2, -8, -8, -8, -8, -26,
    -3, -26, -12, -35, -2, -15, -6, -15,
    2, -4, 2, -3, 2, -4, 2, -3,
    -15, -15, -3, -11, -3, -3, -5, -3,
    -50, -50, -22, -23, -6, -4, -1, -2,
    -2, -2, -2, -2, -2, 2, 2, 2,
    -4, -3, -2, -4, -6, -2, -6, -7,
    -32, -34, -32, -15, -3, -3, -27, -3,
    -3, -2, 2, 2, 2, 2, -21, -11,
    -11, -11, -11, -11, -11, -26, -11, -11,
    -8, -9, -8, -10, -6, -10, -10, -7,
    -3, 3, -27, -20, -27, -9, -2, -2,
    -2, -2, 2, -6, -5, -5, -5, -5,
    -6, -5, -4, -3, -1, -1, 2, 2,
    -18, -7, -18, -5, 2, 2, -4, -4,
    -4, -4, -4, -4, -4, -3, -2, 2,
    -19, -3, -3, -3, -3, 2, -3, -3,
    -3, -3, -3, -3, -3, -4, -4, -4,
    3, -6, -29, -19, -29, -19, -4, -4,
    -12, -4, -4, -2, 2, -12, 2, 2,
    2, 2, 2, -8, -8, -8, -8, -3,
    -8, -5, -5, -8, -5, -8, -5, -7,
    -3, -5, -2, -3, -2, -4, 2, 2,
    -3, -3, -3, -3, -3, -3, -3, -3,
    -3, -3, -2, -3, -3, -3, -2, -2,
    -2, -2, -2, -2, -4, -4, -1, -2,
    -1, -2, -1, -1, -2, -2, -2, -2,
    2, 2, 3, 2, -3, -3, -3, -3,
    -3, 2, -10, -10, -2, -2, -2, -2,
    -2, -10, -10, -10, -10, -11, -11, -2,
    -3, -2, -2, -4, -4, -1, -2, -1,
    -2, 2, 2, -22, -22, -4, -2, -2,
    -2, 3, -2, -4, -2, 6, 2, 2,
    2, -4, 2, 2, -21, -21, -2, -2,
    -2, -2, 2, -2, -2, -2, -15, -15,
    -2, -2, -2, -2, -5, -2, 2, 2,
    -21, -21, -2, -2, -2, -2, 2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
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
    .cmap_num = 3,
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
const lv_font_t roboto_medium_16 = {
#else
lv_font_t roboto_medium_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if ROBOTO_MEDIUM_16*/


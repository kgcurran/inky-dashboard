/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --font Roboto-Light.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!@#$%^&*()-_=+[]{}|;:'",.<>?/\  --format lvgl -o roboto_light_10.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_LIGHT_10
#define ROBOTO_LIGHT_10 1
#endif

#if ROBOTO_LIGHT_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x20, 0xa7, 0xd2, 0x53, 0xf5, 0x14,

    /* U+0024 "$" */
    0x23, 0xa3, 0x4, 0x18, 0x31, 0x71, 0x0,

    /* U+0025 "%" */
    0xc1, 0x52, 0xa2, 0x81, 0x45, 0x4a, 0x86,

    /* U+0026 "&" */
    0x21, 0x46, 0x8, 0x66, 0x58, 0x9d,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x2a, 0x49, 0x24, 0x91, 0x0,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x49, 0x0,

    /* U+002A "*" */
    0x22, 0x75,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x22, 0x24, 0x44, 0x88, 0x80,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0031 "1" */
    0x74, 0x92, 0x49,

    /* U+0032 "2" */
    0x74, 0x42, 0x21, 0x11, 0x1f,

    /* U+0033 "3" */
    0x74, 0x42, 0x60, 0x86, 0x2e,

    /* U+0034 "4" */
    0x11, 0x94, 0xa9, 0x7c, 0x42,

    /* U+0035 "5" */
    0xf8, 0x8e, 0x11, 0x9e,

    /* U+0036 "6" */
    0x36, 0x2d, 0xa8, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xf8, 0x44, 0x22, 0x10, 0x88,

    /* U+0038 "8" */
    0x74, 0x62, 0xe8, 0xc6, 0x2e,

    /* U+0039 "9" */
    0x74, 0x63, 0x18, 0xbc, 0x4c,

    /* U+003A ":" */
    0x0,

    /* U+003B ";" */
    0x6,

    /* U+003C "<" */
    0x16, 0x86, 0x10,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x86, 0x16, 0x80,

    /* U+003F "?" */
    0x69, 0x12, 0x44, 0x2,

    /* U+0040 "@" */
    0x1e, 0x30, 0xa3, 0x52, 0x9a, 0x4d, 0x26, 0x95,
    0x36, 0x40, 0x1e, 0x0,

    /* U+0041 "A" */
    0x10, 0xc3, 0x12, 0x49, 0xe8, 0x61,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc6, 0x3e,

    /* U+0043 "C" */
    0x7a, 0x28, 0x20, 0x82, 0x18, 0x9e,

    /* U+0044 "D" */
    0xf4, 0xa3, 0x18, 0xc6, 0x5e,

    /* U+0045 "E" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0x42, 0x10,

    /* U+0047 "G" */
    0x7a, 0x18, 0x20, 0x9e, 0x18, 0x5e,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x86, 0x2e,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8a, 0x4a, 0x51,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0x83, 0x8f, 0x1e, 0x5a, 0xb5, 0x6c, 0xc9,

    /* U+004E "N" */
    0x87, 0x1c, 0x69, 0x96, 0x58, 0xe1,

    /* U+004F "O" */
    0x7a, 0x28, 0x61, 0x86, 0x18, 0x9e,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x7a, 0x28, 0x61, 0x86, 0x18, 0x9e, 0x8,

    /* U+0052 "R" */
    0xf4, 0x63, 0x1f, 0x4a, 0x51,

    /* U+0053 "S" */
    0x74, 0x60, 0x83, 0x6, 0x2e,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0x86, 0x14, 0x92, 0x48, 0xc3, 0x4,

    /* U+0057 "W" */
    0x88, 0xcc, 0xa6, 0x4a, 0xa5, 0x53, 0x31, 0x98,
    0x44,

    /* U+0058 "X" */
    0x89, 0x23, 0xc, 0x31, 0x44, 0xa1,

    /* U+0059 "Y" */
    0x8c, 0x54, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0x84, 0x42, 0x22, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0x88, 0x44, 0x42, 0x22, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005E "^" */
    0x46, 0xa9,

    /* U+005F "_" */
    0xf0,

    /* U+0061 "a" */
    0x69, 0x79, 0x97,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0xb8,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+0065 "e" */
    0x74, 0x7f, 0x8, 0x38,

    /* U+0066 "f" */
    0x29, 0x74, 0x92, 0x40,

    /* U+0067 "g" */
    0x7c, 0x63, 0x18, 0xbc, 0x2e,

    /* U+0068 "h" */
    0x88, 0xe9, 0x99, 0x99,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x60,

    /* U+006B "k" */
    0x88, 0x9a, 0xca, 0xa9,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x32, 0x40,

    /* U+006E "n" */
    0xe9, 0x99, 0x99,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0xfa, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21,

    /* U+0072 "r" */
    0xf2, 0x49, 0x0,

    /* U+0073 "s" */
    0x69, 0x43, 0x96,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x93,

    /* U+0075 "u" */
    0x99, 0x99, 0x97,

    /* U+0076 "v" */
    0x94, 0x94, 0xc6, 0x10,

    /* U+0077 "w" */
    0x93, 0x25, 0xab, 0x66, 0xc4, 0x80,

    /* U+0078 "x" */
    0x92, 0x88, 0x45, 0x48,

    /* U+0079 "y" */
    0x94, 0x94, 0xc6, 0x11, 0x18,

    /* U+007A "z" */
    0xf2, 0x24, 0x8f,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 39, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 46, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 3, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 16, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 27, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 30, .adv_w = 51, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 35, .adv_w = 52, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 40, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 42, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 46, .adv_w = 31, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 47, .adv_w = 46, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 48, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 64, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 54, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 89, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 89, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 34, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 31, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 103, .adv_w = 82, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 106, .adv_w = 89, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 108, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 73, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 127, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 101, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 138, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 217, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 143, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 38, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 271, .adv_w = 63, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 276, .adv_w = 38, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 279, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 281, .adv_w = 69, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 282, .adv_w = 86, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 53, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 312, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 36, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 320, .adv_w = 78, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 142, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 343, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 348, .adv_w = 54, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 81, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 51, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 121, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 78, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 379, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 387, .adv_w = 35, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 389, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2}
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
    -3, -8, -8, -9, -4, -5, -5, -5,
    -5, -2, -2, -5, -2, -5, -6, 1,
    -8, -8, -9, -4, -5, -5, -5, -5,
    -2, -2, -5, -2, -5, -6, 1, 2,
    1, 2, -13, -13, -13, -13, -17, -9,
    -9, -5, -1, -1, -1, -1, -10, -1,
    -7, -5, -7, -1, -1, -1, -4, -3,
    -4, 1, -2, -2, -4, -2, -2, -1,
    -1, -8, -8, -2, -2, -2, -2, -3,
    -2, 2, -1, -1, -1, -1, -1, -1,
    -1, -1, -2, -2, -2, -18, -18, -13,
    -21, 2, -3, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -2, 1, -2, 1,
    -2, 1, -2, 1, -2, -2, -5, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -2, -3, -5, -3,
    -26, -26, 1, -5, -5, -5, -5, -21,
    -4, -14, -11, -19, -3, -10, -7, -10,
    1, -2, 1, -2, 1, -2, 1, -2,
    -8, -8, -2, -2, -2, -2, -3, -2,
    -25, -25, -11, -16, -2, -2, -1, -1,
    -1, -1, -1, -1, -1, 1, 1, 1,
    -3, -2, -2, -3, -6, -1, -4, -3,
    -17, -18, -17, -6, -2, -2, -19, -2,
    -2, -1, 1, 1, 1, 1, -9, -8,
    -8, -8, -8, -9, -9, -8, -9, -8,
    -6, -9, -7, -6, -4, -6, -6, -5,
    -2, 2, -18, -3, -18, -6, -1, -1,
    -1, -1, 1, -4, -3, -3, -3, -3,
    -4, -3, -2, -2, -1, -1, 1, 1,
    -10, -5, -10, -3, 1, 1, -3, -2,
    -2, -2, -2, -2, -2, -2, -1, 1,
    -4, -2, -2, -2, -2, 1, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    2, -4, -16, -4, -16, -7, -2, -2,
    -7, -2, -2, -1, 1, -7, 1, 1,
    1, 1, 1, -6, -5, -5, -5, -2,
    -5, -3, -3, -5, -3, -5, -3, -5,
    -2, -3, -2, -2, -2, -2, 1, 1,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, -1, -2, -2, -2, -1, -1,
    -5, -5, -1, -1, -2, -2, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    1, 1, 2, 1, -2, -2, -2, -2,
    -2, 1, -8, -8, -2, -2, -2, -2,
    -2, -8, -8, -8, -8, -11, -11, -1,
    -2, -1, -1, -2, -2, -1, -1, -1,
    -1, 1, 1, -10, -10, -3, -1, -1,
    -1, 1, -1, -2, -1, 4, 1, 1,
    1, -2, 1, 1, -8, -8, -1, -1,
    -1, -1, 1, -1, -1, -1, -10, -10,
    -2, -2, -2, -2, -2, -2, 1, 1,
    -8, -8, -1, -1, -1, -1, 1, -1,
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
const lv_font_t roboto_light_10 = {
#else
lv_font_t roboto_light_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if ROBOTO_LIGHT_10*/


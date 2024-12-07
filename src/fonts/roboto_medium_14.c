/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font Roboto-Medium.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ
abcdefghijklmnopqrstuvwxyz
0123456789
!@#$%^&*()-_=+[]{}|;:'",.·<>?/\  --format lvgl -o roboto_medium_14.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_MEDIUM_14
#define ROBOTO_MEDIUM_14 1
#endif

#if ROBOTO_MEDIUM_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x3c,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0x12, 0x14, 0x14, 0x7f, 0x34, 0x24, 0x24, 0xfe,
    0x28, 0x28, 0x28,

    /* U+0024 "$" */
    0x10, 0x21, 0xf6, 0x3c, 0x78, 0x1c, 0x1e, 0x7,
    0x8f, 0x1b, 0xe1, 0x2, 0x0,

    /* U+0025 "%" */
    0x60, 0x49, 0x24, 0x92, 0x86, 0xc0, 0x40, 0x6c,
    0x29, 0x24, 0xb2, 0x40, 0xc0,

    /* U+0026 "&" */
    0x38, 0x36, 0x1b, 0xd, 0x83, 0x81, 0x81, 0xed,
    0x96, 0xce, 0x67, 0x1f, 0xc0,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x13, 0x66, 0xcc, 0xcc, 0xcc, 0xc4, 0x62, 0x10,

    /* U+0029 ")" */
    0x8c, 0x66, 0x33, 0x33, 0x33, 0x36, 0x64, 0x80,

    /* U+002A "*" */
    0x21, 0x3e, 0x65, 0x6c,

    /* U+002B "+" */
    0x30, 0x60, 0xc7, 0xf3, 0x6, 0xc, 0x0,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0xc4, 0x23, 0x10, 0x8c, 0x42, 0x31, 0x0,

    /* U+0030 "0" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0031 "1" */
    0x1b, 0xf6, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x79, 0x9b, 0x30, 0x60, 0xc3, 0xe, 0x18, 0x61,
    0xc3, 0xf8,

    /* U+0033 "3" */
    0x7d, 0x8f, 0x18, 0x30, 0x47, 0x1, 0x83, 0xc7,
    0x8d, 0xf0,

    /* U+0034 "4" */
    0xc, 0x38, 0x71, 0x66, 0xc9, 0xb3, 0x7f, 0xc,
    0x18, 0x30,

    /* U+0035 "5" */
    0x7e, 0x81, 0x6, 0xf, 0xc9, 0xc1, 0x83, 0xc7,
    0x99, 0xf0,

    /* U+0036 "6" */
    0x18, 0xc1, 0x86, 0xf, 0xdd, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x10, 0x60, 0xc3, 0x6, 0x8, 0x30,
    0x61, 0x80,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1e, 0x34, 0x47, 0x33, 0x63, 0xc7,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x7d, 0xdf, 0x83, 0x4,
    0x18, 0xc0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0xf, 0xe8,

    /* U+003C "<" */
    0xc, 0xff, 0x30, 0x70, 0x70, 0x40,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x83, 0x83, 0xc3, 0x7b, 0x88, 0x0,

    /* U+003F "?" */
    0x7b, 0x30, 0xc3, 0x1c, 0xe3, 0xc, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0x1f, 0x6, 0x11, 0x1, 0x20, 0x28, 0xf3, 0x12,
    0x64, 0x4c, 0x99, 0x93, 0x32, 0x6b, 0x77, 0x20,
    0x2, 0x10, 0x3e, 0x0,

    /* U+0041 "A" */
    0xc, 0xe, 0x7, 0x2, 0xc3, 0x61, 0x90, 0x8c,
    0xfe, 0x61, 0x20, 0xf0, 0x60,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x5f, 0x31, 0xe3, 0xc7,
    0x8f, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x62, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc3, 0x63, 0x3c,

    /* U+0044 "D" */
    0xf8, 0xc6, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc6, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc0, 0xc0, 0xcf, 0xc3,
    0xc3, 0x63, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0xc7,
    0x8d, 0xe0,

    /* U+004B "K" */
    0xc7, 0xc6, 0xcc, 0xd8, 0xf8, 0xf8, 0xf8, 0xcc,
    0xc6, 0xc6, 0xc3,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xe1, 0xf8, 0x7e, 0x1f, 0xcf, 0xd2, 0xf4, 0xbd,
    0x2f, 0x7b, 0xcc, 0xf3, 0x3c, 0xcc,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xd3, 0xdb, 0xcb, 0xcf,
    0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c, 0x7, 0x2,

    /* U+0052 "R" */
    0xfd, 0x9f, 0x1e, 0x3c, 0x79, 0xbe, 0x64, 0xcd,
    0x8f, 0x18,

    /* U+0053 "S" */
    0x3c, 0xc7, 0xc3, 0xc0, 0xf8, 0x7e, 0xf, 0x3,
    0xc3, 0x63, 0x3e,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0056 "V" */
    0xc1, 0xa0, 0x98, 0xcc, 0x62, 0x31, 0xb0, 0xd8,
    0x2c, 0x1c, 0xe, 0x3, 0x0,

    /* U+0057 "W" */
    0xc6, 0x34, 0x63, 0x67, 0x36, 0x72, 0x6d, 0x66,
    0xd6, 0x29, 0x62, 0x9e, 0x38, 0xc3, 0x8c, 0x10,
    0xc0,

    /* U+0058 "X" */
    0x63, 0x31, 0x8d, 0x86, 0xc1, 0xc0, 0xe0, 0x70,
    0x6c, 0x36, 0x31, 0x98, 0xc0,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0x61, 0x86, 0xc, 0x30, 0x61,
    0x83, 0xf8,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x6, 0x18, 0x20, 0xc3, 0x4, 0x18, 0x20,
    0xc3,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb7, 0xc0,

    /* U+005E "^" */
    0x30, 0xc3, 0x1e, 0x49, 0x20,

    /* U+005F "_" */
    0xfc,

    /* U+0061 "a" */
    0x7b, 0x30, 0xdf, 0xcf, 0x3c, 0xdf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xec, 0xd8, 0xf1, 0xe3, 0xc7,
    0x9b, 0xf0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0x1e, 0xc, 0x18, 0xd9, 0x9e,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xf6, 0x78, 0xf1, 0xe3, 0xc6,
    0xcd, 0xf8,

    /* U+0065 "e" */
    0x3c, 0x8f, 0x1f, 0xfc, 0x18, 0x19, 0x9e,

    /* U+0066 "f" */
    0x36, 0x6f, 0x66, 0x66, 0x66, 0x60,

    /* U+0067 "g" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xd9, 0xbf, 0x6,
    0x9d, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0069 "i" */
    0xf3, 0xff, 0xfc,

    /* U+006A "j" */
    0x6c, 0x36, 0xdb, 0x6d, 0xb7, 0x80,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0x9f, 0x3c, 0x7c, 0xd9,
    0x9b, 0x18,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfb, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0x1c,

    /* U+0070 "p" */
    0xfd, 0x9b, 0x1e, 0x3c, 0x78, 0xf3, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xd9, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xcc, 0xcc,

    /* U+0073 "s" */
    0x7b, 0x3c, 0x3e, 0x7c, 0x3c, 0xde,

    /* U+0074 "t" */
    0x66, 0xf6, 0x66, 0x66, 0x63,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf,

    /* U+0076 "v" */
    0xc6, 0x89, 0xb3, 0x62, 0x87, 0xe, 0x8,

    /* U+0077 "w" */
    0xcc, 0xd3, 0x34, 0xed, 0xba, 0x7a, 0x8c, 0xe3,
    0x38, 0xc4,

    /* U+0078 "x" */
    0x44, 0xd8, 0xa1, 0xc3, 0x85, 0x1b, 0x63,

    /* U+0079 "y" */
    0x46, 0xcd, 0x91, 0x63, 0xc7, 0xe, 0xc, 0x10,
    0x61, 0x80,

    /* U+007A "z" */
    0xfc, 0x71, 0x8c, 0x31, 0x8c, 0x3f,

    /* U+007B "{" */
    0x19, 0x8c, 0x63, 0x1b, 0x6, 0x31, 0x8c, 0x61,
    0x80,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0xc6, 0x66, 0x66, 0x16, 0x66, 0x66, 0xc0,

    /* U+00B7 "·" */
    0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 127, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 38, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 57, .adv_w = 78, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 65, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 73, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 77, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 84, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 86, .adv_w = 74, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 87, .adv_w = 63, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 89, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 127, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 59, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 53, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 198, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 204, .adv_w = 125, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 207, .adv_w = 117, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 213, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 200, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 242, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 63, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 124, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 196, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 423, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 135, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 145, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 197, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 61, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 536, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 545, .adv_w = 61, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 551, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 556, .adv_w = 101, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 557, .adv_w = 121, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 79, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 613, .adv_w = 124, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 57, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 56, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 631, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 57, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 195, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 677, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 687, .adv_w = 79, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 116, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 74, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 124, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 166, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 109, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 742, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 75, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 757, .adv_w = 56, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 759, .adv_w = 75, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 766, .adv_w = 63, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
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
    -7, -4, -4, -13, -5, -6, -6, -6,
    -6, -2, -2, -10, -2, -6, -10, 1,
    -4, -4, -13, -5, -6, -6, -6, -6,
    -2, -2, -10, -2, -6, -10, 1, 2,
    4, 2, -31, -31, -31, -31, -27, -13,
    -13, -9, -2, -2, -2, -2, -13, -2,
    -8, -4, -16, -5, -5, -1, -5, -2,
    -1, -5, -4, -5, 1, -3, -3, -6,
    -3, -3, -1, -2, -13, -13, -2, -9,
    -2, -2, -5, -3, 2, -2, -2, -2,
    -2, -2, -2, -2, -2, -3, -2, -3,
    -30, -30, -21, -23, 2, -4, -2, -2,
    -2, -2, -2, -2, -3, -2, -3, -3,
    2, -3, 2, -3, 2, -3, 2, -3,
    -2, -18, -3, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -4, -7, -4,
    -31, -31, 2, -7, -7, -7, -7, -22,
    -3, -23, -10, -31, -2, -13, -6, -13,
    2, -3, 2, -3, 2, -3, 2, -3,
    -13, -13, -2, -9, -2, -2, -5, -3,
    -44, -44, -19, -20, -6, -4, -1, -1,
    -1, -1, -1, -1, -1, 2, 2, 2,
    -4, -3, -2, -4, -5, -2, -5, -7,
    -28, -30, -28, -13, -3, -3, -24, -3,
    -3, -2, 2, 2, 2, 2, -18, -10,
    -10, -10, -10, -10, -10, -23, -10, -10,
    -7, -8, -7, -9, -5, -8, -9, -7,
    -2, 2, -24, -17, -24, -8, -1, -1,
    -1, -1, 2, -5, -5, -5, -5, -5,
    -5, -5, -3, -3, -1, -1, 2, 2,
    -16, -7, -16, -5, 2, 1, -4, -3,
    -3, -3, -3, -3, -3, -2, -2, 2,
    -17, -3, -3, -3, -3, 2, -3, -3,
    -3, -3, -2, -3, -2, -3, -3, -3,
    2, -5, -25, -17, -25, -16, -3, -3,
    -10, -3, -3, -2, 2, -10, 2, 2,
    1, 2, 2, -7, -7, -7, -7, -2,
    -7, -4, -4, -7, -4, -7, -4, -6,
    -2, -4, -2, -3, -2, -3, 2, 1,
    -3, -3, -3, -3, -2, -2, -2, -2,
    -2, -2, -2, -3, -3, -3, -2, -2,
    -2, -2, -2, -2, -3, -3, -1, -2,
    -1, -2, -1, -1, -2, -2, -1, -1,
    2, 2, 2, 2, -3, -3, -3, -3,
    -3, 2, -9, -9, -2, -2, -2, -2,
    -2, -9, -9, -9, -9, -10, -10, -2,
    -2, -2, -2, -3, -3, -1, -2, -1,
    -2, 2, 2, -19, -19, -3, -2, -2,
    -2, 2, -2, -4, -2, 5, 2, 2,
    2, -3, 2, 2, -18, -18, -2, -1,
    -1, -1, 1, -1, -2, -1, -14, -14,
    -2, -2, -2, -2, -4, -2, 2, 2,
    -18, -18, -2, -1, -1, -1, 1, -1,
    -2, -1, -2, -2, -2, -2, -2, -2,
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
const lv_font_t roboto_medium_14 = {
#else
lv_font_t roboto_medium_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
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



#endif /*#if ROBOTO_MEDIUM_14*/


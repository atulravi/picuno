
#include "shared-bindings/displayio/Bitmap.h"
#include "shared-bindings/displayio/Palette.h"
#include "supervisor/shared/display.h"

#if CIRCUITPY_REPL_LOGO
const uint32_t blinka_bitmap_data[28] = {
    0x00000111, 0x00000000,
    0x00001153, 0x10000000,
    0x00001156, 0x11000000,
    0x00001111, 0x14000000,
    0x00000112, 0x00200000,
    0x00000011, 0x30000000,
    0x00000011, 0x20000000,
    0x00011144, 0x13000000,
    0x00232324, 0x12000000,
    0x01111444, 0x13000000,
    0x32323234, 0x12010000,
    0x11111144, 0x44100000
};
const displayio_bitmap_t blinka_bitmap = {
    .base = {.type = &displayio_bitmap_type },
    .width = 12,
    .height = 12,
    .data = (uint32_t*) blinka_bitmap_data,
    .stride = 2,
    .bits_per_value = 4,
    .x_shift = 3,
    .x_mask = 0x7,
    .bitmask = 0xf,
    .read_only = true
};

_displayio_color_t blinka_colors[7] = {
    {
        .rgb888 = 0x000000,
        .transparent = true
    },
    { // Purple
        .rgb888 = 0x8428bc
    },
    { // Pink
        .rgb888 = 0xff89bc
    },
    { // Light blue
        .rgb888 = 0x7beffe
    },
    { // Dark purple
        .rgb888 = 0x51395f
    },
    { // White
        .rgb888 = 0xffffff
    },
    { // Dark Blue
        .rgb888 = 0x0736a0
    },
};

displayio_palette_t blinka_palette = {
    .base = {.type = &displayio_palette_type },
    .colors = blinka_colors,
    .color_count = 7,
    .needs_refresh = false
};

displayio_tilegrid_t supervisor_blinka_sprite = {
    .base = {.type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &blinka_bitmap,
    .pixel_shader = &blinka_palette,
    .x = 0,
    .y = 0,
    .pixel_width = 12,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 1,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 12,
    .tile_height = 12,
    .top_left_x = 12,
    .top_left_y = 12,
    .tiles = 0,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = true,
    .in_group = true
};
#endif
#if CIRCUITPY_TERMINALIO
_displayio_color_t terminal_colors[2] = {
    {
        .rgb888 = 0x000000
    },
    {
        .rgb888 = 0xffffff
    },
};

displayio_palette_t supervisor_terminal_color = {
    .base = {.type = &displayio_palette_type },
    .colors = terminal_colors,
    .color_count = 2,
    .needs_refresh = false
};
displayio_tilegrid_t supervisor_terminal_scroll_area_text_grid = {
    .base = { .type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &supervisor_terminal_font_bitmap,
    .pixel_shader = &supervisor_terminal_color,
    .x = 0,
    .y = 0,
    .pixel_width = 6,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 95,
    .tiles_in_bitmap = 95,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 6,
    .tile_height = 12,
    .tiles = NULL,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = false,
    .in_group = true
};
displayio_tilegrid_t supervisor_terminal_status_bar_text_grid = {
    .base = { .type = &displayio_tilegrid_type },
    .bitmap = (displayio_bitmap_t*) &supervisor_terminal_font_bitmap,
    .pixel_shader = &supervisor_terminal_color,
    .x = 0,
    .y = 0,
    .pixel_width = 6,
    .pixel_height = 12,
    .bitmap_width_in_tiles = 95,
    .tiles_in_bitmap = 95,
    .width_in_tiles = 1,
    .height_in_tiles = 1,
    .tile_width = 6,
    .tile_height = 12,
    .tiles = NULL,
    .partial_change = false,
    .full_change = false,
    .hidden = false,
    .hidden_by_parent = false,
    .moved = false,
    .inline_tiles = false,
    .in_group = true
};
const uint32_t font_bitmap_data[216] = {
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00050000, 0x00080000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000200, 0x20000000, 0x00000080, 0x80000000, 0x00000000, 0x00000000, 0x00000480, 
0x00851421, 0x22081100, 0x00000002, 0x70871c0b, 0xe73e71c0, 0x0000001c, 0x71cf1ce3, 0xef9c89c3, 0xa282289c, 0xf1cf1cfa, 0x28a28a2f, 0x9c41c500, 0x00080008, 0x01808080, 0x90600000, 0x00000020, 0x00000000, 0x06218a80, 
0x00851472, 0xa5082080, 0x00000002, 0x8988a21a, 0x08028a20, 0x00080422, 0x8a28a292, 0x08228881, 0x248368a2, 0x8a28a222, 0x28a28a20, 0x90404880, 0x00080008, 0x02008000, 0x10200000, 0x00000020, 0x00000000, 0x08204900, 
0x00803ea9, 0x45004045, 0x08000004, 0x9888822a, 0x08028a22, 0x0813e222, 0x9a28a08a, 0x08208881, 0x2882aca2, 0x8a28a022, 0x28a25141, 0x10204000, 0x01cf1c79, 0xc71ef181, 0x9223cf1c, 0xf1eb9e72, 0x28a28a2f, 0x88204000, 
0x008014a0, 0x42004042, 0x08000004, 0xa8808c4b, 0xcf047222, 0x08200104, 0xaa2f208b, 0xcf20f881, 0x3082aaa2, 0x8a289c22, 0x25222142, 0x10204000, 0x0028a28a, 0x22228880, 0x9422a8a2, 0x8a2c2022, 0x28a25221, 0x10202000, 
0x00801470, 0x8680404f, 0xbe03e008, 0xc8810288, 0x288489e0, 0x00400088, 0xabe8a08a, 0x082e8881, 0x308229a2, 0xf22f0222, 0x252a2084, 0x10104000, 0x01e8a08b, 0xe2228880, 0x9822a8a2, 0x8a281c22, 0x252a2222, 0x08204000, 
0x00003e28, 0xa9004042, 0x08000008, 0x888202f8, 0x28888820, 0x0023e100, 0x9a28a08a, 0x08228889, 0x288228a2, 0x822a0222, 0x252a5088, 0x10104000, 0x0228a08a, 0x02228880, 0x9822a8a2, 0x8a280222, 0x252a2224, 0x08204000, 
0x008014a9, 0x59002085, 0x08200210, 0x8884220a, 0x28888822, 0x08100208, 0x8228a292, 0x08228889, 0x248228a2, 0x82a92222, 0x22368888, 0x10084000, 0x0228a28a, 0x02228880, 0x9422a8a2, 0x8a280222, 0x222a5228, 0x08204000, 
0x00801471, 0x26801100, 0x00200210, 0x71cf9c09, 0xc70871c2, 0x08080408, 0x7a2f1ce3, 0xe81c89c6, 0x22fa289c, 0x81c89c21, 0xc222888f, 0x9c09c000, 0x01ef1c79, 0xe21e89c0, 0x9272a89c, 0xf1e83c19, 0xe21c89ef, 0x86218000, 
0x00000020, 0x00000000, 0x00400000, 0x00000000, 0x00000000, 0x10000000, 0x00000000, 0x00000000, 0x00000000, 0x00200000, 0x00000000, 0x0000003e, 0x00000000, 0x00020004, 0x80000000, 0x80200000, 0x00000020, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x001c0003, 0x00000000, 0x80200000, 0x000001c0, 0x00000000, 
};
displayio_bitmap_t supervisor_terminal_font_bitmap = {
    .base = {.type = &displayio_bitmap_type },
    .width = 570,
    .height = 12,
    .data = (uint32_t*) font_bitmap_data,
    .stride = 18.0,
    .bits_per_value = 1,
    .x_shift = 5,
    .x_mask = 0x1f,
    .bitmask = 0x1,
    .read_only = true
};
const fontio_builtinfont_t supervisor_terminal_font = {
    .base = {.type = &fontio_builtinfont_type },
    .bitmap = &supervisor_terminal_font_bitmap,
    .width = 6,
    .height = 12,
    .unicode_characters = (const uint8_t*) "",
    .unicode_characters_len = 0
};
terminalio_terminal_obj_t supervisor_terminal = {
    .base = { .type = &terminalio_terminal_type },
    .font = &supervisor_terminal_font,
    .cursor_x = 0,
    .cursor_y = 0,
    .scroll_area = NULL,
    .status_bar = NULL
};

#endif

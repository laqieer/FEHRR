#pragma once

#include <gba_types.h>

enum
{
    LANGUAGE_JAPANESE,
    LANGUAGE_ENGLISH,
    LANGUAGE_CHINESE,
    LANGUAGE_NUM,
};

struct GlyphNew
{
    struct GlyphNew const * next;

    u8 utf_byte_2;
    u8 width;
    u8 utf_byte_3;
    u8 utf_byte_4;
    const u32 * bitmap;
};

void PrintSystemGlyphs();
void PrintTalkGlyphs();

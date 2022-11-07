#include "common.h"
#include "text.h"
#include "textNew.h"
#include "msg.h"

#include "hardware.h"
#include "ramfunc.h"
#include "proc.h"

#include "constants/videoalloc_global.h"

#include "log.h"

#include <stdio.h>
#include <stdlib.h>

struct SpecialCharSt
{
    i8 color;
    i8 id;
    i16 chr_position;
};

struct TextPrintProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Text * text;
    /* 30 */ char const * str;
    /* 34 */ i8 interval;
    /* 35 */ i8 clock;
    /* 36 */ i8 char_per_tick;
};

u8 * GetTextDrawDest(struct Text * text);
u16 const * GetColorLut(int color);
void DrawTextGlyph(struct Text * text, struct GlyphNew const * glyph);
void DrawTextGlyphNoClear(struct Text * text, struct GlyphNew const * glyph);
void Text_DrawStringAscii(struct Text * text, char const * str);
char const * Text_DrawCharacterAscii(struct Text * text, char const * str);
int GetStringTextLenAscii(char const * str);
u8 * GetSpriteTextDrawDest(struct Text * text);
void DrawSpriteTextGlyph(struct Text * text, struct GlyphNew const * glyph);
void TextPrint_OnLoop(struct TextPrintProc * proc);
void GreenText_OnLoop(ProcPtr proc);
void DrawSpecialCharGlyph(int chr_position, int color, struct GlyphNew const * glyph);
int AddSpecialChar(struct SpecialCharSt * st, int color, int id);
int GetSpecialCharChr(int color, int id);

extern struct SpecialCharSt sSpecialCharStList[0x40];

extern u16 const * const s2bppTo4bppLutTable[];

// extern struct GlyphNew const * const TextGlyphs_SpecialNew[];
extern struct GlyphNew const * const TextGlyphs_SystemNew[];
extern struct GlyphNew const * const TextGlyphs_TalkNew[];
// #define TextGlyphs_SystemNew TextGlyphs_System
// #define TextGlyphs_TalkNew TextGlyphs_Talk

u8 gLang = LANGUAGE_JAPANESE;

// size: 0x10
int GetLangNew(void)
{
    // return LANG_JAPANESE;
    return gLang;
}

void SetLang(int lang)
{
    gLang = lang;
}

void ChangeLang(void)
{
    gLang = (gLang + 1) % LANGUAGE_NUM;
}

void SetTextFontGlyphsNew(int glyphSet)
{
    if (glyphSet == TEXT_GLYPHS_SYSTEM)
    {
        gActiveFont->glyphs = (const struct Glyph * const *)TextGlyphs_SystemNew;
    }
    else
    {
        gActiveFont->glyphs = (const struct Glyph * const *)TextGlyphs_TalkNew;
    }
}

void SetTextFontGlyphsOld(int glyphSet)
{
    SetTextFontGlyphsNew(glyphSet);
}

int GetStringTextLenNew(char const * str)
{
    struct GlyphNew const * glyph;

    int result = 0;

    // if (gActiveFont->lang == LANG_ENGLISH)
    //     return GetStringTextLenAscii(str);
    str = GetMsg((int)str);

    while (*str > 1)
    {
        u8 byte1 = 0;
        u8 byte2 = 0;
        u8 byte3 = 0;
        u8 byte4 = 0;

        byte1 = *str++;

        if (byte1 < 0x20)
            continue;

        if (byte1 >= 0xC0)
            byte2 = *str++;

        if (byte1 >= 0xE0)
            byte3 = *str++;

        if (byte1 >= 0xF0)
            byte4 = *str++;

        glyph = (const struct GlyphNew *)gActiveFont->glyphs[byte1 - 0x20];

        while (glyph)
        {
            if (glyph->utf_byte_2 == byte2 && glyph->utf_byte_3 == byte3 && glyph->utf_byte_4 == byte4)
            {
                result += glyph->width;
                break;
            }

            glyph = glyph->next;
        }
    }

    return result;
}

int GetStringTextLenOld(char const * str)
{
    return GetStringTextLenNew(str);
}

char const * GetCharTextLenNew(char const * str, int* out_width)
{
    struct GlyphNew const * glyph;
    u8 byte1 = 0;
    u8 byte2 = 0;
    u8 byte3 = 0;
    u8 byte4 = 0;

    // if (gActiveFont->lang != LANG_JAPANESE) { }

    byte1 = *str++;

    if (byte1 < 0x20)
    {
        *out_width = 0;
        return str;
    }

    if (byte1 >= 0xC0)
        byte2 = *str++;

    if (byte1 >= 0xE0)
        byte3 = *str++;

    if (byte1 >= 0xF0)
        byte4 = *str++;

    glyph = (const struct GlyphNew *)gActiveFont->glyphs[byte1 - 0x20];

    while (glyph)
    {
        if (glyph->utf_byte_2 == byte2 && glyph->utf_byte_3 == byte3 && glyph->utf_byte_4 == byte4)
        {
            *out_width = glyph->width;
            break;
        }

        glyph = glyph->next;
    }

    return str;
}

char const * GetCharTextLenOld(char const * str, int* out_width)
{
    return GetCharTextLenNew(str, out_width);
}

char const * GetStringLineEndNew(char const * str)
{
    while (*str > 1)
    {
        // if (*str == 4)
        // {
        //     str++;
        //     continue;
        // }

        // str += 2;

        str++;
    }

    return str;
}

char const * GetStringLineEndOld(char const * str)
{
    return GetStringLineEndNew(str);
}

void Text_DrawStringNew(struct Text * text, char const * str)
{
    struct GlyphNew const * glyph;

    // if (gActiveFont->lang != LANG_JAPANESE)
    // {
    //     Text_DrawStringAscii(text, str);
    //     return;
    // }
    str = GetMsg((int)str);

    while (*str > 1)
    {
        u8 byte1 = 0;
        u8 byte2 = 0;
        u8 byte3 = 0;
        u8 byte4 = 0;

        byte1 = *str++;

        if (byte1 < 0x20)
            continue;

        if (byte1 >= 0xC0)
            byte2 = *str++;

        if (byte1 >= 0xE0)
            byte3 = *str++;

        if (byte1 >= 0xF0)
            byte4 = *str++;

    retry_draw:
        glyph = (const struct GlyphNew *)gActiveFont->glyphs[byte1 - 0x20];

        while (glyph)
        {
            if (glyph->utf_byte_2 == byte2 && glyph->utf_byte_3 == byte3 && glyph->utf_byte_4 == byte4)
            {
                gActiveFont->draw_glyph(text, (const struct Glyph *)glyph);
                break;
            }

            glyph = glyph->next;

            if (glyph == NULL)
            {
                Errorf("Glyph not found: %02X %02X %02X %02X", byte1, byte2, byte3, byte4);
                byte1 = '?';
                byte2 = 0;
                byte3 = 0;
                byte4 = 0;

                goto retry_draw;
            }
        }
    }
}

void Text_DrawStringOld(struct Text * text, char const * str)
{
    Text_DrawStringNew(text, str);
}

void Text_DrawNumberNew(struct Text * text, int number)
{
    // if (number == 0)
    // {
    //     Text_DrawCharacter(text, JTEXT("０"));
    //     return;
    // }

    // while (number != 0)
    // {
    //     u16 chr = 0x4F82 + ((number % 10) << 8);
    //     number /= 10;

    //     Text_DrawCharacter(text, (char const *) &chr);

    //     text->x -= 16;
    // }

    char str[12];
    sprintf(str, "%d", number);
    text->x -= GetStringTextLenNew(str) - 8;
    Text_DrawStringNew(text, str);
}

void Text_DrawNumberOld(struct Text * text, int number)
{
    Text_DrawNumberNew(text, number);
}

char const * Text_DrawCharacterNew(struct Text * text, char const * str)
{
    struct GlyphNew const * glyph;
    u8 byte1 = 0;
    u8 byte2 = 0;
    u8 byte3 = 0;
    u8 byte4 = 0;

    // if (gActiveFont->lang != LANG_JAPANESE)
    //     return Text_DrawCharacterAscii(text, str);

    byte1 = *str++;

    if (byte1 < 0x20)
        return str;

    if (byte1 >= 0xC0)
        byte2 = *str++;

    if (byte1 >= 0xE0)
        byte3 = *str++;

    if (byte1 >= 0xF0)
        byte4 = *str++;

retry_draw:
    glyph = (const struct GlyphNew *)gActiveFont->glyphs[byte1 - 0x20];

    while (glyph)
    {
        if (glyph->utf_byte_2 == byte2 && glyph->utf_byte_3 == byte3 && glyph->utf_byte_4 == byte4)
        {
            gActiveFont->draw_glyph(text, (const struct Glyph *)glyph);
            break;
        }

        glyph = glyph->next;
    }

    if (glyph == NULL)
    {
        Errorf("Glyph not found: %02X %02X %02X %02X", byte1, byte2, byte3, byte4);
        byte1 = '?';
        byte2 = 0;
        byte3 = 0;
        byte4 = 0;

        goto retry_draw;
    }

    return str;
}

char const * Text_DrawCharacterOld(struct Text * text, char const * str)
{
    return Text_DrawCharacterNew(text, str);
}

void DrawTextGlyphNew(struct Text * text, struct GlyphNew const * glyph)
{
    u8 * draw_dest = gActiveFont->get_draw_dest(text);
    int subx = text->x & 7;
    unsigned int const * bitmap = glyph->bitmap;

    DrawGlyphRam(GetColorLut(text->color), draw_dest, (const u32 *)bitmap, subx);
    text->x += glyph->width;
}

void DrawTextGlyphOld(struct Text * text, struct GlyphNew const * glyph)
{
    DrawTextGlyphNew(text, glyph);
}

void DrawTextGlyphNoClearNew(struct Text * text, struct GlyphNew const * glyph)
{
    int i;

    u32 * dst = (u32 *) gActiveFont->get_draw_dest(text);
    int subx = text->x & 7;
    unsigned int const * bitmap = glyph->bitmap;

    u64 bitmapRow;

    u16 const * maskLut = GetColorLut(TEXT_COLOR_MASK);
    u16 const * colorLut = GetColorLut(text->color);

    // int unused;

    for (i = 0; i < 16; ++i)
    {
        // read one row of 32 bits from the bitmap
        bitmapRow = (u64) *bitmap << subx * 2;

        dst[0x00] &= maskLut[bitmapRow & 0xFF] | (maskLut[(bitmapRow >> 8) & 0xFF] << 16);
        dst[0x00] |= colorLut[bitmapRow & 0xFF] | (colorLut[(bitmapRow >> 8) & 0xFF] << 16);

        dst[0x10] &= maskLut[(bitmapRow >> 16) & 0xFF] | (maskLut[(bitmapRow >> 24) & 0xFF] << 16);
        dst[0x10] |= colorLut[(bitmapRow >> 16) & 0xFF] | (colorLut[(bitmapRow >> 24) & 0xFF] << 16);

        dst[0x20] &= maskLut[(bitmapRow >> 32) & 0xFF] | (maskLut[(bitmapRow >> 40) & 0xFF] << 16);
        dst[0x20] |= colorLut[(bitmapRow >> 32) & 0xFF] | (colorLut[(bitmapRow >> 40) & 0xFF] << 16);

        dst++;
        bitmap++;
    }

    text->x += glyph->width;
}

void DrawTextGlyphNoClearOld(struct Text * text, struct GlyphNew const * glyph)
{
    DrawTextGlyphNoClearNew(text, glyph);
}

void DrawSpriteTextGlyphNew(struct Text * text, struct GlyphNew const * glyph)
{
    int i;

    u32 * dst = (u32 *) gActiveFont->get_draw_dest(text);
    int subx = text->x & 7;
    unsigned int const * bitmap = glyph->bitmap;

    u64 bitmapRow;

    u16 const * lut = GetColorLut(text->color);

    for (i = 0; i < 8; ++i)
    {
        bitmapRow = (u64) *bitmap << subx * 2;

        dst[0x00] |= lut[bitmapRow & 0xFF] | (lut[(bitmapRow >> 8) & 0xFF] << 16);
        dst[0x08] |= lut[(bitmapRow >> 16) & 0xFF] | (lut[(bitmapRow >> 24) & 0xFF] << 16);
        dst[0x10] |= lut[(bitmapRow >> 32) & 0xFF] | (lut[(bitmapRow >> 40) & 0xFF] << 16);

        dst++;
        bitmap++;
    }

    dst = (u32 *) (gActiveFont->get_draw_dest(text) + 0x20 * CHR_SIZE);

    for (i = 0; i < 8; ++i)
    {
        bitmapRow = (u64) *bitmap << subx * 2;

        dst[0x00] |= lut[bitmapRow & 0xFF] | (lut[(bitmapRow >> 8) & 0xFF] << 16);
        dst[0x08] |= lut[(bitmapRow >> 16) & 0xFF] | (lut[(bitmapRow >> 24) & 0xFF] << 16);
        dst[0x10] |= lut[(bitmapRow >> 32) & 0xFF] | (lut[(bitmapRow >> 40) & 0xFF] << 16);

        dst++;
        bitmap++;
    }

    text->x += glyph->width;
}

void DrawSpriteTextGlyphOld(struct Text * text, struct GlyphNew const * glyph)
{
    DrawSpriteTextGlyphNew(text, glyph);
}

// void DrawSpecialCharGlyphNew(int chr_position, int color, struct GlyphNew const * glyph)
// {
//     int i;

//     u32 * dst = (u32 *) (gActiveFont->draw_dest + chr_position * 2 * CHR_SIZE);
//     u32 const * bitmap = glyph->bitmap;

//     int lo, hi;

//     u16 const * lut = GetColorLut(color);

//     for (i = 0; i < 16; ++i)
//     {
//         lo = lut[(*bitmap) & 0xFF];
//         hi = lut[(*bitmap >> 8) & 0xFF];

//         *dst = lo + (hi << 16);

//         dst++;
//         bitmap++;
//     }
// }

// int AddSpecialCharNew(struct SpecialCharSt * st, int color, int id)
// {
//     st->color = color;
//     st->id = id;
//     st->chr_position = gActiveFont->chr_counter++;

//     (st + 1)->color = -1;

//     DrawSpecialCharGlyph(st->chr_position, color, TextGlyphs_SpecialNew[id]);

//     return st->chr_position;
// }

void PrintGlyphs(struct Glyph const * const glyphs[])
{
    for (int byte2 = 0x40; byte2 <= 0xFF; byte2++)
    {
        struct Glyph const * glyph = glyphs[byte2 - 0x40];
        while(glyph)
        {
            LogPrintf("%02X %02X: width = %d, bitmap = 0x%X", glyph->sjis_byte_1, byte2, glyph->width, glyph->bitmap);
            glyph = glyph->next;
        }
    }
}

void PrintSystemGlyphs()
{
    Info("System font glyphs:");
    PrintGlyphs(TextGlyphs_System);
}

void PrintTalkGlyphs()
{
    Info("Talk font glyphs:");
    PrintGlyphs(TextGlyphs_Talk);
}

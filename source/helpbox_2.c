#include "helpbox.h"

#include "prelude.h"
#include "armfunc.h"
#include "oam.h"
#include "sound.h"
#include "text.h"
#include "sprite.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "talk.h"
#include "bm.h"
#include "bmNew.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "ui.h"
#include "chapterNew.h"
#include "textNew.h"
#include "msgNew.h"
#include "faceNew.h"

#include "hardware.h"
#include "armfunc.h"
#include "proc.h"
#include "log.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "chapters.h"
#include "constants/songs.h"

#include "gfx_misc.h"

struct Unk_0203D404
{
    u16 unk_00;
    u16 unk_02;
};

struct Unk_0203D40C
{
    /* 00 */ struct Font font;
    /* 18 */ struct Text text[3];
    /* 30 */ u16 unk_30;
};

struct HelpBoxStartPrintProc
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 pad_29[0x58 - 0x29];
    /* 58 */ i32 item;
    /* 5C */ i32 msg;
    /* 60 */ u8 pad_60[0x64 - 0x60];
    /* 64 */ i16 unk_64; // NOTE: might not be same proc
};

struct UnkAgainProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ i32 x;
    /* 30 */ i32 y;
    /* 34 */ i32 msg;
    /* 38 */ u8 pal;
};

struct HelpBoxPrintProc2
{
    /* 00 */ PROC_HEADER;
    /* 2C */ char const * str;
    /* 30 */ struct Font * font;
    /* 34 */ struct Text * text[6];
    /* 4C */ i16 line;
    /* 4E */ i16 unk_4E;
    /* 50 */ i16 unk_50;
    /* 52 */ i16 chars_per_frame;
    /* 54 */ u8 pad_54[0x56 - 0x54];
    /* 56 */ u8 x, y;
    /* 58 */ u8 unk_58;
    /* 5C */ i32 msg; // Maybe other proc?
};

extern u8 const gUnk_0830C804[]; // img
extern u8 const gUnk_0830CFE0[]; // img
extern u8 const gUnk_0830D4F0[]; // tsa
extern u8 const gUnk_08308A78[]; // img
extern u16 const Pal_08100A48[]; // pal

extern struct Unk_0203D404 gUnk_0203D404;
extern int unused_0203D408;
extern struct Unk_0203D40C gUnk_0203D40C;
extern struct Unk_0203D40C gUnk_0203D460;

u16 const * GetColorLut(int color);

#define GENERATE_LOOKUP_TABLE \
  X(0x00), X(0x01), X(0x02), X(0x03), X(0x04), X(0x05), X(0x06), X(0x07), \
  X(0x08), X(0x09), X(0x0A), X(0x0B), X(0x0C), X(0x0D), X(0x0E), X(0x0F), \
  X(0x10), X(0x11), X(0x12), X(0x13), X(0x14), X(0x15), X(0x16), X(0x17), \
  X(0x18), X(0x19), X(0x1A), X(0x1B), X(0x1C), X(0x1D), X(0x1E), X(0x1F), \
  X(0x20), X(0x21), X(0x22), X(0x23), X(0x24), X(0x25), X(0x26), X(0x27), \
  X(0x28), X(0x29), X(0x2A), X(0x2B), X(0x2C), X(0x2D), X(0x2E), X(0x2F), \
  X(0x30), X(0x31), X(0x32), X(0x33), X(0x34), X(0x35), X(0x36), X(0x37), \
  X(0x38), X(0x39), X(0x3A), X(0x3B), X(0x3C), X(0x3D), X(0x3E), X(0x3F), \
  X(0x40), X(0x41), X(0x42), X(0x43), X(0x44), X(0x45), X(0x46), X(0x47), \
  X(0x48), X(0x49), X(0x4A), X(0x4B), X(0x4C), X(0x4D), X(0x4E), X(0x4F), \
  X(0x50), X(0x51), X(0x52), X(0x53), X(0x54), X(0x55), X(0x56), X(0x57), \
  X(0x58), X(0x59), X(0x5A), X(0x5B), X(0x5C), X(0x5D), X(0x5E), X(0x5F), \
  X(0x60), X(0x61), X(0x62), X(0x63), X(0x64), X(0x65), X(0x66), X(0x67), \
  X(0x68), X(0x69), X(0x6A), X(0x6B), X(0x6C), X(0x6D), X(0x6E), X(0x6F), \
  X(0x70), X(0x71), X(0x72), X(0x73), X(0x74), X(0x75), X(0x76), X(0x77), \
  X(0x78), X(0x79), X(0x7A), X(0x7B), X(0x7C), X(0x7D), X(0x7E), X(0x7F), \
  X(0x80), X(0x81), X(0x82), X(0x83), X(0x84), X(0x85), X(0x86), X(0x87), \
  X(0x88), X(0x89), X(0x8A), X(0x8B), X(0x8C), X(0x8D), X(0x8E), X(0x8F), \
  X(0x90), X(0x91), X(0x92), X(0x93), X(0x94), X(0x95), X(0x96), X(0x97), \
  X(0x98), X(0x99), X(0x9A), X(0x9B), X(0x9C), X(0x9D), X(0x9E), X(0x9F), \
  X(0xA0), X(0xA1), X(0xA2), X(0xA3), X(0xA4), X(0xA5), X(0xA6), X(0xA7), \
  X(0xA8), X(0xA9), X(0xAA), X(0xAB), X(0xAC), X(0xAD), X(0xAE), X(0xAF), \
  X(0xB0), X(0xB1), X(0xB2), X(0xB3), X(0xB4), X(0xB5), X(0xB6), X(0xB7), \
  X(0xB8), X(0xB9), X(0xBA), X(0xBB), X(0xBC), X(0xBD), X(0xBE), X(0xBF), \
  X(0xC0), X(0xC1), X(0xC2), X(0xC3), X(0xC4), X(0xC5), X(0xC6), X(0xC7), \
  X(0xC8), X(0xC9), X(0xCA), X(0xCB), X(0xCC), X(0xCD), X(0xCE), X(0xCF), \
  X(0xD0), X(0xD1), X(0xD2), X(0xD3), X(0xD4), X(0xD5), X(0xD6), X(0xD7), \
  X(0xD8), X(0xD9), X(0xDA), X(0xDB), X(0xDC), X(0xDD), X(0xDE), X(0xDF), \
  X(0xE0), X(0xE1), X(0xE2), X(0xE3), X(0xE4), X(0xE5), X(0xE6), X(0xE7), \
  X(0xE8), X(0xE9), X(0xEA), X(0xEB), X(0xEC), X(0xED), X(0xEE), X(0xEF), \
  X(0xF0), X(0xF1), X(0xF2), X(0xF3), X(0xF4), X(0xF5), X(0xF6), X(0xF7), \
  X(0xF8), X(0xF9), X(0xFA), X(0xFB), X(0xFC), X(0xFD), X(0xFE), X(0xFF)

// expands the 2-bits per pixel packed image into 4 bits per pixel and converts
// the pixel value with the COLOR_CONVERT function

#define X(byte) (COLOR_CONVERT(((byte >> 0) & 3)) <<  0) \
              | (COLOR_CONVERT(((byte >> 2) & 3)) <<  4) \
              | (COLOR_CONVERT(((byte >> 4) & 3)) <<  8) \
              | (COLOR_CONVERT(((byte >> 6) & 3)) << 12)

// colors: transparent, shade, text, outline
#define COLOR_CONVERT(pixel) ((pixel == 0) ? 0 : ((pixel == 1) ? 12 : ((pixel == 2) ? 2 : 4)))
u16 CONST_DATA TextColorLut_ChapterTitle[] = { GENERATE_LOOKUP_TABLE };
#undef COLOR_CONVERT

#undef X
#undef GENERATE_LOOKUP_TABLE

void DrawGlyphInChapterTitle(void * draw_dest, struct GlyphNew const * glyph, int * x)
{
    u32 * dst = draw_dest + ((*x) / 8) * CHR_SIZE;
    u32 const * bitmap = (u32 const *)glyph->bitmap;
    int subx = (*x) & 7;
    u64 bitmapRow;

    u16 const * maskLut = GetColorLut(TEXT_COLOR_MASK);
    u16 const * colorLut = TextColorLut_ChapterTitle;

    for (int i = 0; i < 8; ++i)
    {
        // read one row of 32 bits from the bitmap
        bitmapRow = (u64) *bitmap << subx * 2;

        dst[0] &= maskLut[bitmapRow & 0xFF] | (maskLut[(bitmapRow >> 8) & 0xFF] << 16);
        dst[0] |= colorLut[bitmapRow & 0xFF] | (colorLut[(bitmapRow >> 8) & 0xFF] << 16);

        dst[8] &= maskLut[(bitmapRow >> 16) & 0xFF] | (maskLut[(bitmapRow >> 24) & 0xFF] << 16);
        dst[8] |= colorLut[(bitmapRow >> 16) & 0xFF] | (colorLut[(bitmapRow >> 24) & 0xFF] << 16);

        dst[16] &= maskLut[(bitmapRow >> 32) & 0xFF] | (maskLut[(bitmapRow >> 40) & 0xFF] << 16);
        dst[16] |= colorLut[(bitmapRow >> 32) & 0xFF] | (colorLut[(bitmapRow >> 40) & 0xFF] << 16);

        dst++;
        bitmap++;
    }

    dst = draw_dest + (32 + ((*x) / 8)) * CHR_SIZE;

    for (int i = 0; i < 8; ++i)
    {
        // read one row of 32 bits from the bitmap
        bitmapRow = (u64) *bitmap << subx * 2;

        dst[0] &= maskLut[bitmapRow & 0xFF] | (maskLut[(bitmapRow >> 8) & 0xFF] << 16);
        dst[0] |= colorLut[bitmapRow & 0xFF] | (colorLut[(bitmapRow >> 8) & 0xFF] << 16);

        dst[8] &= maskLut[(bitmapRow >> 16) & 0xFF] | (maskLut[(bitmapRow >> 24) & 0xFF] << 16);
        dst[8] |= colorLut[(bitmapRow >> 16) & 0xFF] | (colorLut[(bitmapRow >> 24) & 0xFF] << 16);

        dst[16] &= maskLut[(bitmapRow >> 32) & 0xFF] | (maskLut[(bitmapRow >> 40) & 0xFF] << 16);
        dst[16] |= colorLut[(bitmapRow >> 32) & 0xFF] | (colorLut[(bitmapRow >> 40) & 0xFF] << 16);

        dst++;
        bitmap++;
    }

    (*x) += glyph->width;
}

void ShowChapterTitleInText(void * draw_dest, int msg_id)
{
    struct GlyphNew const * glyph;
    char const * str = DecodeMsg(msg_id);
    int x = (DISPLAY_WIDTH - GetStringTextLen(str)) / 2 - 8 * 3;

    Decompress(blank_chapter_titleTiles, draw_dest);

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
                DrawGlyphInChapterTitle(draw_dest, glyph, &x);
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

void func_fe6_08070D08New(int chr, int title_id)
{
    // TODO: is this really chapter?
    if (title_id < 0)
        title_id = CHAPTER_21X;

    gUnk_0203D404.unk_02 = chr & 0x3FF;

    void * draw_dest = ((void *) VRAM) + chr * CHR_SIZE;

    Debugf("Draw chapter title: %d, chr: %d, draw_dest: 0x%x", title_id, chr, draw_dest);

    if (title_id >= CHAPTER_CH_COUNT)
        return ShowChapterTitleInText(draw_dest, title_id);
    if (title_id < CHAPTER_COUNT)
        Decompress(gUnk_08677F20[title_id], draw_dest);
}

void func_fe6_08070D08Old(int chr, int title_id)
{
    func_fe6_08070D08New(chr, title_id);
}

int func_fe6_08070E0CNew(struct PlayStNew * play_st)
{
    if (play_st == NULL)
        return 0x26;

    int chapter = GetChapterInPlaySt(play_st);

    switch (chapter)
    {

    case 0xFFFF:
    case 0x28 ... 0x2C:
        return 0x2B;

    default:
        if (play_st->flags & PLAY_FLAG_COMPLETE)
        {
            switch (play_st->ending_id)
            {

                // TODO: ending enum constants

            case 0:
                return 0x2A;

            case 1:
                return 0x29;

            case 2:
                return 0x28;

            }
        }

        return IsChapterNew(chapter) ? GetChapterInfo(chapter)->msg_38 : GetChapterInfo(chapter)->title_id;
    }
}

int func_fe6_08070E0COld(struct PlayStNew * play_st)
{
    return func_fe6_08070E0CNew(play_st);
}

#define OBJCHR_HELPBOX_OFFSET (27 - OBCHR_HELPBOX_180)

void LoadHelpBoxGfxNew(void * vram, int pal)
{
    if (vram == NULL)
        vram = ((void *) VRAM) + 0x10000 + OBCHR_HELPBOX_180 * CHR_SIZE;

    if (pal < 0)
        pal = OBPAL_HELPBOX_5;

    pal = (pal & 15) + 0x10;

    // Decompress(gUnk_08308A78, vram);
    Decompress(helpbox_outline_1Tiles, vram + OBJCHR_HELPBOX_OFFSET * CHR_SIZE);
    Decompress(helpbox_outline_2Tiles, vram + (OBJCHR_HELPBOX_OFFSET + 32) * CHR_SIZE);

    InitSpriteTextFont(&gUnk_0203D40C.font, vram, pal);
    InitSpriteText(gUnk_0203D40C.text + 0);
    InitSpriteText(gUnk_0203D40C.text + 1);
    InitSpriteText(gUnk_0203D40C.text + 2);
    SetTextFont(NULL);

    ApplyPalette(Pal_08100A48, pal);

    gUnk_0203D40C.unk_30 = OAM2_CHR(((uptr) vram) / CHR_SIZE) + OAM2_PAL(pal);
}

void LoadHelpBoxGfxOld(void * vram, int pal)
{
    LoadHelpBoxGfxNew(vram, pal);
}

void func_fe6_08070EECNew(void * vram, int pal)
{
    if (vram == NULL)
        vram = ((void *) VRAM) + 0x10000 + OBCHR_HELPBOX_180 * CHR_SIZE;

    if (pal < 0)
        pal = OBPAL_HELPBOX_5;

    pal = (pal & 15) + 0x10;

    // Decompress(gUnk_08308A78, vram);
    Decompress(helpbox_outline_1Tiles, vram + OBJCHR_HELPBOX_OFFSET * CHR_SIZE);
    Decompress(helpbox_outline_2Tiles, vram + (OBJCHR_HELPBOX_OFFSET + 32) * CHR_SIZE);

    InitSpriteTextFont(&gUnk_0203D40C.font, vram, pal);
    InitSpriteText(gUnk_0203D40C.text + 0);
    InitSpriteText(gUnk_0203D40C.text + 1);
    gUnk_0203D40C.text[2].tile_width = 0; // ok???
    SetTextFont(NULL);

    ApplyPalette(Pal_08100A48, pal);

    gUnk_0203D40C.unk_30 = OAM2_CHR(((uptr) vram) / CHR_SIZE) + OAM2_PAL(pal);
}

void func_fe6_08070EECOld(void * vram, int pal)
{
    func_fe6_08070EECNew(vram, pal);
}

void func_fe6_080718FCNew(void * vram, int pal)
{
    // identical to LoadHelpBoxGfx
    // except for gUnk_0203D460 instead of gUnk_0203D40C

    if (vram == NULL)
        vram = ((void *) VRAM) + 0x10000 + OBCHR_HELPBOX_180 * CHR_SIZE;

    if (pal < 0)
        pal = OBPAL_HELPBOX_5;

    pal = (pal & 15) + 0x10;

    // Decompress(gUnk_08308A78, vram);
    Decompress(helpbox_outline_1Tiles, vram + OBJCHR_HELPBOX_OFFSET * CHR_SIZE);
    Decompress(helpbox_outline_2Tiles, vram + (OBJCHR_HELPBOX_OFFSET + 32) * CHR_SIZE);

    InitSpriteTextFont(&gUnk_0203D460.font, vram, pal);
    InitSpriteText(gUnk_0203D460.text + 0);
    InitSpriteText(gUnk_0203D460.text + 1);
    InitSpriteText(gUnk_0203D460.text + 2);
    SetTextFont(NULL);

    ApplyPalette(Pal_08100A48, pal);

    gUnk_0203D460.unk_30 = OAM2_CHR(((uptr) vram) / CHR_SIZE) + OAM2_PAL(pal);
}

void func_fe6_080718FCOld(void * vram, int pal)
{
    func_fe6_080718FCNew(vram, pal);

}

void PutSpriteTalkBoxNew(int x_box, int y_box, int w_box, int h_box)
{
    int y_count, x_count;
    int iy, ix, x_px, y_px;

    if (w_box < 0x20)
        w_box = 0x20;

    // if (w_box > 0xC0)
    //     w_box = 0xC0;
    if (w_box > 0xE0)
        w_box = 0xE0;

    if (h_box < 0x10)
        h_box = 0x10;

    if (h_box > 0x30)
        h_box = 0x30;

    x_count = (w_box + 0x1F) / 0x20;
    y_count = (h_box + 0x0F) / 0x10;

    for (ix = x_count - 1; ix >= 0; ix--)
    {
        for (iy = y_count; iy >= 0; iy--)
        {
            x_px = (ix + 1) * 0x20;
            if (x_px > w_box)
                x_px = w_box;
            x_px = x_px - 0x20;

            y_px = (iy + 1) * 0x10;
            if (y_px > h_box)
                y_px = h_box;
            y_px = y_px - 0x10;

            PutSprite(0, x_box + x_px, y_box + y_px, Sprite_32x16, gUnk_0203D40C.unk_30 + ix * 4 + iy * 0x40);
        }
    }

    for (ix = x_count - 1; ix >= 0; ix--)
    {
        x_px = (ix + 1) * 0x20;
        if (x_px > w_box)
            x_px = w_box;
        x_px = x_px - 0x20;

        PutSprite(0, x_box + x_px, y_box - 8, Sprite_32x8, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET);
        PutSprite(0, x_box + x_px, y_box + h_box, Sprite_32x8_VFlipped, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET);
    }

    for (iy = y_count; iy >= 0; iy--)
    {
        y_px = (iy + 1) * 0x10;
        if (y_px > h_box)
            y_px = h_box;
        y_px -= 0x10;

        PutSprite(0, x_box - 8, y_box + y_px, Sprite_8x16, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 4);
        PutSprite(0, x_box + w_box, y_box + y_px, Sprite_8x16_HFlipped, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 4);
    }

    PutSprite(0, x_box - 8, y_box - 8, Sprite_8x8, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(0, x_box + w_box, y_box - 8, Sprite_8x8_HFlipped, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(0, x_box - 8, y_box + h_box, Sprite_8x8_VFlipped, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(0, x_box + w_box, y_box + h_box, Sprite_8x8_HFlipped_VFlipped, gUnk_0203D40C.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
}

void PutSpriteTalkBoxOld(int x_box, int y_box, int w_box, int h_box)
{
    PutSpriteTalkBoxNew(x_box, y_box, w_box, h_box);
}

void func_fe6_08071D94New(int x_box, int y_box, int w_box, int h_box)
{
    // identical to PutSpriteTalkBox
    // except it refers to gUnk_0203D460 instead of gUnk_0203D40C, and uses layer 2 instead of 0

    int y_count, x_count;
    int iy, ix, x_px, y_px;

    if (w_box < 0x20)
        w_box = 0x20;

    // if (w_box > 0xC0)
    //     w_box = 0xC0;
    if (w_box > 0xE0)
        w_box = 0xE0;

    if (h_box < 0x10)
        h_box = 0x10;

    if (h_box > 0x30)
        h_box = 0x30;

    x_count = (w_box + 0x1F) / 0x20;
    y_count = (h_box + 0x0F) / 0x10;

    for (ix = x_count - 1; ix >= 0; ix--)
    {
        for (iy = y_count; iy >= 0; iy--)
        {
            x_px = (ix + 1) * 0x20;
            if (x_px > w_box)
                x_px = w_box;
            x_px = x_px - 0x20;

            y_px = (iy + 1) * 0x10;
            if (y_px > h_box)
                y_px = h_box;
            y_px = y_px - 0x10;

            PutSprite(2, x_box + x_px, y_box + y_px, Sprite_32x16, gUnk_0203D460.unk_30 + ix * 4 + iy * 0x40);
        }
    }

    for (ix = x_count - 1; ix >= 0; ix--)
    {
        x_px = (ix + 1) * 0x20;
        if (x_px > w_box)
            x_px = w_box;
        x_px = x_px - 0x20;

        PutSprite(2, x_box + x_px, y_box - 8, Sprite_32x8, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET);
        PutSprite(2, x_box + x_px, y_box + h_box, Sprite_32x8_VFlipped, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET);
    }

    for (iy = y_count; iy >= 0; iy--)
    {
        y_px = (iy + 1) * 0x10;
        if (y_px > h_box)
            y_px = h_box;
        y_px -= 0x10;

        PutSprite(2, x_box - 8, y_box + y_px, Sprite_8x16, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 4);
        PutSprite(2, x_box + w_box, y_box + y_px, Sprite_8x16_HFlipped, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 4);
    }

    PutSprite(2, x_box - 8, y_box - 8, Sprite_8x8, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(2, x_box + w_box, y_box - 8, Sprite_8x8_HFlipped, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(2, x_box - 8, y_box + h_box, Sprite_8x8_VFlipped, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
    PutSprite(2, x_box + w_box, y_box + h_box, Sprite_8x8_HFlipped_VFlipped, gUnk_0203D460.unk_30 + OBJCHR_HELPBOX_OFFSET + 0x3E - 0x1B);
}

void func_fe6_08071D94Old(int x_box, int y_box, int w_box, int h_box)
{
    func_fe6_08071D94New(x_box, y_box, w_box, h_box);
}

#define HELPBOX_MAX_LINES 3

struct HelpBoxPrintProcNew
{
    /* 00 */ PROC_HEADER;

    /* 2C */ char const * str_it;
    /* 30 */ struct Font * font;
    /* 34 */ struct Text * text[6];
    /* 4C */ STRUCT_PAD(0x4C, 0x5C);
    /* 5C */ i16 line;
    /* 5E */ i16 clock;
    /* 60 */ i16 clock_interval;
    /* 62 */ i16 chars_per_print;
    /* 64 */ char const * str;
    /* 68 */ i16 lines;
    /* 6A */ i16 baseline;
};

u8 * GetSpriteTextDrawDest(struct Text * text);

void func_fe6_08071274New(struct HelpBoxPrintProcNew * proc)
{
    int i;

    proc->clock--;

    if (proc->clock > 0)
        return;

    proc->clock = proc->clock_interval;

    SetTextFont(proc->font);

    if (gKeySt->pressed & KEY_BUTTON_A)
    {
        proc->clock_interval = 0;
        proc->chars_per_print = INT8_MAX;

        if (proc->lines > HELPBOX_MAX_LINES)
        {
            proc->line = 0;
            proc->baseline += HELPBOX_MAX_LINES;
            if (proc->baseline >= proc->lines)
                proc->baseline = 0;
            proc->str_it = MoveToLine(proc->str, proc->baseline);

            for (i = 0; i < HELPBOX_MAX_LINES; i++)
            {
                SpriteText_DrawBackgroundWide(proc->text[i]);
            }

            proc->font->chr_counter = 0;
        }

        Debugf("baseline: %d, proc->str_it (0x%x): %s", proc->baseline, proc->str_it, proc->str_it);
    }

    for (i = 0; i < proc->chars_per_print; i++)
    {
        switch (*proc->str_it)
        {

            // TODO: control character constants

        case 0:
            if (proc->lines <= HELPBOX_MAX_LINES)
                Proc_Break(proc);
            break;

        case 1:
            proc->str_it++;
            proc->line++;
            if (proc->line >= HELPBOX_MAX_LINES)
            {
                Text_DrawCharacter(proc->text[proc->line - 1], GetMsg(3787));
                break;
            }
            continue;

        case 4:
            proc->str_it++;
            continue;

        default:
            proc->str_it = Text_DrawCharacter(proc->text[proc->line], proc->str_it);
            continue;

        }

        break;
    }

    SetTextFont(NULL);
}

struct ProcScr const ProcScr_Unk_08677FD0New[] =
{
    PROC_REPEAT(func_fe6_08071274New),
    PROC_END,
};

void func_fe6_08071410New(struct HelpBoxStartPrintProc * proc)
{
    struct HelpBoxPrintProcNew * print_proc;

    SetTextFont(&gUnk_0203D40C.font);
    SetTextFontGlyphs(TEXT_GLYPHS_TALK);
    Text_SetColor(&gUnk_0203D40C.text[0], TEXT_COLOR_4DEF);
    Text_SetColor(&gUnk_0203D40C.text[1], TEXT_COLOR_4DEF);
    Text_SetColor(&gUnk_0203D40C.text[2], TEXT_COLOR_4DEF);
    SetTextFont(NULL);

    Proc_EndEach(ProcScr_Unk_08677FD0New);

    print_proc = SpawnProc(ProcScr_Unk_08677FD0New, PROC_TREE_3);
    print_proc->font = &gUnk_0203D40C.font;
    print_proc->text[0] = &gUnk_0203D40C.text[0];
    print_proc->text[1] = &gUnk_0203D40C.text[1];
    print_proc->text[2] = &gUnk_0203D40C.text[2];
    print_proc->line = proc->unk_64;
    print_proc->str = DecodeMsg(proc->msg);
    print_proc->str_it = print_proc->str;
    print_proc->lines = GetStringLines(print_proc->str);
    Debugf("print_proc->lines: %d", print_proc->lines);
    print_proc->baseline = 0;
    print_proc->chars_per_print = 1;
    print_proc->clock = 0;

    switch (gPlaySt.config_talk_speed)
    {

        // TODO: talk speed enum constants

    case 0:
        print_proc->clock_interval = 2;
        break;

    case 1:
        print_proc->clock_interval = 1;
        break;

    case 2:
        print_proc->clock_interval = 1;
        print_proc->chars_per_print = 2;
        break;

    case 3:
        print_proc->clock_interval = 0;
        print_proc->chars_per_print = INT8_MAX;
        break;

    }
}

int DrawHelpBoxWeaponLabels(int item);
void DrawHelpBoxWeaponStats(int item);
int DrawHelpBoxStaffLabels(int item);

void func_fe6_08071374New(struct HelpBoxStartPrintProc * proc)
{
    int item = proc->item;

    SetTextFont(&gUnk_0203D40C.font);
    SetTextFontGlyphs(TEXT_GLYPHS_SYSTEM);

    switch (func_fe6_08070B30(item))
    {

    case HELPBOX_INFO_NONE:
        proc->unk_64 = 0;
        break;

    case HELPBOX_INFO_WEAPON:
        DrawHelpBoxWeaponLabels(item);
        proc->unk_64 = 2;
        break;

    case HELPBOX_INFO_STAFF:
        DrawHelpBoxStaffLabels(item);
        proc->unk_64 = 1;
        break;

    }

    SetTextFont(NULL);

    Proc_Break(proc);
}

void func_fe6_080713DCNew(struct HelpBoxStartPrintProc * proc)
{
    int item = proc->item;

    SetTextFont(&gUnk_0203D40C.font);

    if (func_fe6_08070B30(item) == HELPBOX_INFO_WEAPON)
    {
        DrawHelpBoxWeaponStats(item);
    }

    SetTextFont(NULL);

    Proc_Break(proc);
}

struct ProcScr const gUnk_08677FF8New[] =
{
    PROC_SLEEP(6),
    PROC_REPEAT(func_fe6_08071374New),
    PROC_REPEAT(func_fe6_080713DCNew),
    PROC_CALL(func_fe6_08071410New),
    PROC_END,
};

void func_fe6_08071514New(void)
{
    SetTextFont(&gUnk_0203D40C.font);

    SpriteText_DrawBackgroundWide(&gUnk_0203D40C.text[0]);
    SpriteText_DrawBackgroundWide(&gUnk_0203D40C.text[1]);
    SpriteText_DrawBackgroundWide(&gUnk_0203D40C.text[2]);

    Proc_EndEach(ProcScr_Unk_08677FD0);
    Proc_EndEach(gUnk_08677FF8);

    SetTextFont(NULL);
}

void func_fe6_08071514Old(void)
{
    func_fe6_08071514New();
}

void ClearNewFaceAndLockGameWhenOpenHelpBox2()
{
    ClearNewFace();
    LockGame();
}

// Tutorial help box
const struct ProcScr ProcScr_ClearNewFaceAndLockGameWhenOpenHelpBox2 = PROC_CALL(ClearNewFaceAndLockGameWhenOpenHelpBox2);

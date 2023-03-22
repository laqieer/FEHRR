#include "helpbox.h"

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

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/songs.h"

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

struct HelpBoxPrintProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ char const * str_it;
    /* 30 */ struct Font * font;
    /* 34 */ struct Text * text[6];
    /* 4C */ u8 pad_4C[0x5C - 0x4C];
    /* 5C */ i16 line;
    /* 5E */ i16 clock;
    /* 60 */ i16 clock_interval;
    /* 62 */ i16 chars_per_print;
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

int func_fe6_08070E0CNew(struct PlayStNew * play_st)
{
    if (play_st == NULL)
        return 0x26;

    switch (GetChapterInPlaySt(play_st))
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

        //FIXME: expand title_id
        return GetChapterInfo(GetChapterInPlaySt(play_st))->title_id;
    }
}

int func_fe6_08070E0COld(struct PlayStNew * play_st)
{
    return func_fe6_08070E0CNew(play_st);
}

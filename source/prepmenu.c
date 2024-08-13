#include "prelude.h"

#include "armfunc.h"
#include "hardware.h"
#include "sound.h"
#include "icon.h"
#include "text.h"
#include "face.h"
#include "event.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "unit.h"
#include "unitsprite.h"
#include "faction.h"
#include "chapterinfo.h"
#include "unitrearrange.h"
#include "ui.h"
#include "statscreen.h"
#include "helpbox.h"
#include "unitlistscreen.h"

#include "constants/pids.h"
#include "constants/chapters.h"
#include "constants/msg.h"
#include "constants/songs.h"

#include "constants/videoalloc_global.h"

#include "bmNew.h"
#include "chapterNew.h"

#define BGCHR_PREPMENU_230 0x230
#define BGCHR_PREPMENU_240 0x240
#define BGCHR_PREPMENU_700 0x700

#define OBCHR_PREPMENU_240 0x240
#define OBCHR_PREPMENU_380 0x380

#define BGPAL_PREPMENU_2 0x02
#define BGPAL_PREPMENU_A 0x0A // ..E // background
#define BGPAL_PREPMENU_E 0x0E
#define BGPAL_PREPMENU_F 0x0F

#define OBPAL_PREPMENU_2 0x02 // ..4
#define OBPAL_PREPMENU_4 0x04
#define OBPAL_PREPMENU_5 0x05
#define OBPAL_PREPMENU_6 0x06 // ..A
#define OBPAL_PREPMENU_D 0x0D

extern u32 const gUnk_0831A268[]; // img(lz)
extern u32 const gUnk_08320E18[]; // img(lz)
extern u32 const gUnk_08326930[]; // img(lz)
extern u16 const gUnk_08319E88[]; // pal
extern u16 const gUnk_0831AABC[]; // pal (x2)
extern u16 const gUnk_08326E64[]; // pal (x4)
extern u16 const gUnk_08327108[]; // pal
extern u32 const gUnk_0831B0A8[]; // img(lz)
extern u16 const gUnk_08320D98[]; // pal (x4)
extern u32 const gUnk_08321FA4[]; // img(lz)
extern u16 const gUnk_08326910[]; // pal
extern u8 gUnk_0203D494[5];

extern struct Unit * gUnk_0200E6D4[];
extern struct Text gUnk_0200E7DC;
extern struct Text gUnk_0200E864[];
extern struct Text gUnk_0200E89C;
extern u16 gUnk_0200E8A4[];
extern struct Unit gUnk_0200F0A4[]; // rearrange buf
extern struct Text gUnk_0200E7E4[];
extern u8 gUnk_0200E7D4;
extern struct Text gUnk_0200E88C[];
extern u8 gUnk_020104A4[]; // img buf

extern u16 const gUnk_08320FCE[]; // tiles
extern u16 const gUnk_08326EE6[]; // tiles

enum
{
    PREPMENU_FLAG_MULTIARENA = 1 << 0,
};

struct PrepMenuProc
{
    /* 00 */ PROC_HEADER;
    /* 29 */ u8 unk_29;
    /* 2A */ u8 unk_2A;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 unk_2C;
    /* 2D */ u8 unk_2D; // size of gUnk_0200E6D4?
    /* 2E */ u8 unk_2E;
    /* 2F */ u8 unk_2F;
    /* 30 */ u8 unk_30; // id within gUnk_0200E6D4
    /* 31 */ u8 unk_31;
    /* 32 */ STRUCT_PAD(0x32, 0x33);
    /* 33 */ u8 unk_33[2];
    /* 35 */ u8 unk_35;
    /* 36 */ i8 unk_36;
    /* 37 */ u8 unk_37; // i8 also?
    /* 38 */ u8 unk_38;
    /* 39 */ u8 unk_39;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 unk_3B;
    /* 3C */ u8 unk_3C;
    /* 3D */ u8 unk_3D;
    /* 3E */ u8 unk_3E;
    /* 3F */ u8 unk_3F;
    /* 40 */ u16 unk_40;
    /* 42 */ u16 unk_42;
    /* 44 */ u16 unk_44;
    /* 46 */ STRUCT_PAD(0x46, 0x48);
    /* 48 */ u32 unk_48;
    /* 4C */ u32 unk_4C;
    /* 50 */ struct UnkProc_PrepMenu_50 * unk_50;
    /* 54 */ STRUCT_PAD(0x54, 0x58);
    /* 58 */ ProcPtr unk_58;
    /* 5C */ struct UnkProc_08678E18 * unk_5C;
    /* 60 */ ProcPtr unk_60;
};

void func_fe6_0807A268(struct PrepMenuProc * proc);
void func_fe6_0807A59C(struct PrepMenuProc * proc);
void func_fe6_08079F50(struct PrepMenuProc * proc, fu8 row);
void func_fe6_08079EA0(struct PrepMenuProc * proc);

bool IsUnitMandatoryDeployNew(struct Unit * unit)
{
    if (IsChapterNew(GetChapterInPlaySt(&gPlayStNew)))
        return FALSE;

    if (UNIT_PID(unit) == PID_ROY)
        return TRUE;

    // if (GetChapterInPlaySt(&gPlayStNew) == CHAPTER_24 && UNIT_PID(unit) == PID_FAE)
    //     return TRUE;

    return FALSE;
}

bool IsUnitMandatoryDeployOld(struct Unit * unit)
{
    return IsUnitMandatoryDeployNew(unit);
}

void func_fe6_0807A59CNew(struct PrepMenuProc * proc)
{
    int i, j;

    InitBgs(NULL);

    func_fe6_0807A268(proc);

    if ((proc->unk_2C & PREPMENU_FLAG_MULTIARENA) != 0)
    {
        proc->unk_58 = StartMuralBackground(NULL, NULL, BGPAL_PREPMENU_A);
    }
    else
    {
        Decompress(gUnk_0831B0A8, (void *) VRAM + GetBgChrOffset(3));
        ApplyBgPalettes(gUnk_08320D98, BGPAL_PREPMENU_A, 4);
        proc->unk_58 = func_fe6_08082560(proc);
    }

    Decompress(gUnk_08321FA4, gUnk_020104A4);
    ApplyPalette(gUnk_08326910, BGPAL_PREPMENU_E);

    int chapter = GetChapterInPlaySt(&gPlayStNew);
    for (i = 0; i < 12; i++)
    {
        CpuFastCopy(
            gUnk_020104A4 + (((GetChapterInfo(chapter)->unk_40 + i) * 0x20)
                + GetChapterInfo(chapter)->unk_3F) * 0x20,
            (void *) VRAM + CHR_SIZE * BGCHR_PREPMENU_700 + 15 * CHR_SIZE * i, 15 * CHR_SIZE);
    }

    for (j = 0; j < CHR_SIZE / 2; j++)
    {
        ((u16 *) VRAM)[(BGCHR_PREPMENU_700 + 0xC0) * CHR_SIZE + j] = 0;
    }
}

void func_fe6_0807A59COld(struct PrepMenuProc * proc)
{
    func_fe6_0807A59CNew(proc);
}

void func_fe6_0807A84CNew(struct PrepMenuProc * proc)
{
    int i;

    gUnk_0200E7D8 = 0;

    proc->unk_48 = 0;
    proc->unk_4C = 0;
    proc->unk_44 = 0;
    proc->unk_30 = 0;
    proc->unk_31 = 0xFF;
    proc->unk_29 = 0;
    proc->unk_2A = 0;
    proc->unk_2B = 0;
    proc->unk_36 = 0;

    if (func_fe6_08036984() == 1)
    {
        proc->unk_2C = PREPMENU_FLAG_MULTIARENA;
    }
    else
    {
        proc->unk_2C = 0;
        StartBgm(SONG_22, &gMusicPlayer_030064B0);
    }

    proc->unk_38 = 0;
    proc->unk_39 = 0;
    proc->unk_3A = 0;
    proc->unk_3B = 0;
    proc->unk_3D = 0;
    proc->unk_3C = 0;
    proc->unk_3E = 0;

    for (i = 0; i < 2; i++)
        proc->unk_33[i] = 0;

    proc->unk_35 = 0;

    proc->unk_60 = func_fe6_08082CF4(proc);

    func_fe6_0807A59C(proc);

    int chapter = GetChapterInPlaySt(&gPlayStNew);
    func_fe6_0807B8CC((proc->unk_50 = func_fe6_0807C508(proc)),
        GetChapterInfo(chapter)->unk_41 * 8,
        GetChapterInfo(chapter)->unk_42 * 8,
        GetChapterInfo(chapter)->number_id);
}

void func_fe6_0807A84COld(struct PrepMenuProc * proc)
{
    func_fe6_0807A84CNew(proc);
}

void func_fe6_0807A67CNew(struct PrepMenuProc * proc)
{
    int i, j;

    if (proc->unk_2A == 0)
    {
        u16 const * tiles = gUnk_08326EE6;

        SetBgChrOffset(2, 0x8000);
        SetBgOffset(2, 0, 0);
        TmFill(GetBgTilemap(2), TILE_CHR_SAFE(BGCHR_PREPMENU_700  - 65) + TILE_PAL_SAFE(BGPAL_PREPMENU_E));

        for (i = 0; i < 12; i++)
        {
            for (j = 0; j < 15; j++)
            {
                gBg2Tm[TM_OFFSET(14 + j, 5 + i)] = i * 15 + j + TILE_CHR_SAFE(BGCHR_PREPMENU_700) + TILE_PAL_SAFE(BGPAL_PREPMENU_E);
            }
        }

        for (i = 0; i < 16; i++)
        {
            for (j = 0; j < 17; j++)
            {
                gBg1Tm[TM_OFFSET(13 + j, 4 + i)] = tiles[(15 - i) * 17 + j] + TILE_PAL_SAFE(1);
            }
        }

        gBg0Tm[TM_OFFSET(20, 4)] = 0;
        gBg0Tm[TM_OFFSET(21, 4)] = 0;
        gBg0Tm[TM_OFFSET(20, 19)] = 0;
        gBg0Tm[TM_OFFSET(21, 19)] = 0;

        ClearText(&gUnk_0200E7DC);

        int chapter = GetChapterInPlaySt(&gPlayStNew);
        Text_SetCursor(&gUnk_0200E7DC, (0x48 - GetStringTextLen(DecodeMsg(GetChapterInfo(chapter)->msg_unk_0C))) >> 1);
        Text_SetColor(&gUnk_0200E7DC, TEXT_COLOR_SYSTEM_WHITE);
        Text_DrawString(&gUnk_0200E7DC, DecodeMsg(GetChapterInfo(chapter)->msg_unk_0C));

        PutText(&gUnk_0200E7DC, gBg0Tm + TM_OFFSET(17, 17));
    }
    else
    {
        SetBgChrOffset(2, 0x0000);
        TmFill(gBg2Tm, 0);

        for (i = proc->unk_44 / 16; i < proc->unk_44 / 16 + 7; i++)
        {
            func_fe6_08079F50(proc, i);
        }

        PutUiWindowFrame(13, 4, 17, 16, UI_WINDOW_REGULAR);

        SetBgOffset(2, -0x80, (proc->unk_44 - 0x28) & 0xFF);

        if (proc->unk_33[0] == 0)
            func_fe6_08079EA0(proc);
    }

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT | BG2_SYNC_BIT);
}

void func_fe6_0807A67COld(struct PrepMenuProc * proc)
{
    func_fe6_0807A67CNew(proc);
}

void func_fe6_08079424New(struct PrepMenuProc * proc)
{
    func_fe6_0807CC34(func_fe6_0807C5B8, 0, MSG_6AE, 0, MSG_659, 0);
    func_fe6_0807CC34(func_fe6_0807C7B8, 0, MSG_6AF, 0, MSG_65A, 1);

    if (func_fe6_0808D0F8() != 0xFF && (proc->unk_2C & PREPMENU_FLAG_MULTIARENA) == 0 && (gPlaySt.flags & PLAY_FLAG_COMPLETE) == 0)
    {
        func_fe6_0807CC34(func_fe6_0807CB08, 0, MSG_6B7, 0, MSG_6A3, 10);
    }

    func_fe6_0807CC34(func_fe6_0807C884, 1, MSG_6B3, proc->unk_2D == 1 ? 1 : 0, MSG_65F, 5);

    if ((proc->unk_2C & PREPMENU_FLAG_MULTIARENA) == 0)
    {
        if ((gPlaySt.flags & PLAY_FLAG_COMPLETE) == 0)
        {
            func_fe6_0807CC34(func_fe6_0807CB78, 0, MSG_6B1, 0, MSG_65C, 3);
        }

        func_fe6_0807CC34(func_fe6_0807CBB0, 0, MSG_6B2, 0, MSG_65D, 4);
        func_fe6_0807CC34(func_fe6_0807C97C, 1, MSG_6B4, 0, MSG_660, 6);
    }

    func_fe6_0807CC34(func_fe6_0807C9F4, 1, MSG_6B5, 0, MSG_661, 7);
    func_fe6_0807CC34(func_fe6_0807CA48, 1, MSG_6B6, 0, MSG_662, 8);

    if ((proc->unk_2C & PREPMENU_FLAG_MULTIARENA) == 0)
    {
        if ((gPlaySt.flags & (PLAY_FLAG_COMPLETE | PLAY_FLAG_HARD)) == 0 || ((gPlaySt.flags & PLAY_FLAG_COMPLETE) == 0 && IsChapterNew(GetChapterInPlaySt(&gPlayStNew))))
        {
            func_fe6_0807CC34(func_fe6_0807CA9C, 1, MSG_6B9, 0, MSG_663, 9);
        }
    }

    if ((proc->unk_2C & PREPMENU_FLAG_MULTIARENA) != 0)
    {
        func_fe6_0807CC34(func_fe6_0807CBDC, 0, MSG_6B0, 0, MSG_6F1, 12);
    }
    else
    {
        func_fe6_0807CC34(func_fe6_0807CBDC, 0, MSG_6BA, 0, MSG_65E, 12);
    }
}

void func_fe6_08079424Old(struct PrepMenuProc * proc)
{
    func_fe6_08079424New(proc);
}

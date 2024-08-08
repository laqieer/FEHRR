// TODO: better name for this file

#include "bmfx.h"
#include "prelude.h"

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "icon.h"
#include "sound.h"
#include "sprite.h"
#include "face.h"
#include "spriteanim.h"
#include "util.h"
#include "msg.h"
#include "bm.h"
#include "bmNew.h"
#include "item.h"
#include "unit.h"
#include "unitNew.h"
#include "map.h"
#include "mapwork.h"
#include "mapmenu.h"
#include "faction.h"
#include "unitsprite.h"
#include "battle.h"
#include "trap.h"
#include "bmio.h"
#include "supply.h"
#include "chapterinfo.h"
#include "subtitlehelp.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"
#include "mu.h"
#include "statscreen.h"
#include "helpbox.h"
#include "utilNew.h"

#include "constants/videoalloc_global.h"
#include "constants/pids.h"
#include "constants/jids.h"
#include "constants/icons.h"
#include "constants/songs.h"
#include "constants/chapters.h"
#include "chapterNew.h"

extern u16 gChapterIntroMotifTmBuf[];

struct RescueTransferAnimProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ int facing;
    /* 30 */ struct Unit * unit;
    /* 34 */ struct MuProc * mu;
    /* 38 */ u8 movescr[4];
    /* 3C */ bool8 unk_3C;
};

struct EquipInfoWindowProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Unit * unit;
    /* 30 */ u8 x;
    /* 31 */ u8 y;
    /* 32 */ u8 iconPalid;
    /* 33 */ i8 compareWeaponSlot;
    /* 34 */ struct Text text[3];
};

struct UnkProc2
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Unit * unit;
    /* 30 */ short unk_30;
    /* 32 */ short unk_32;
    /* 34 */ short unk_34;
    /* 36 */ short unk_36;
    /* 38 */ int pad_38;
    /* 3C */ short unk_3C;
    /* 3E */ short unk_3E;
    /* 40 */ int pad_40;
    /* 44 */ int unk_44;
};

struct ShowMapChangeProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ int mcId;
    /* 30 */ int altSong;
    /* 34 */ int sndx;
};

void SetFogVisionNew(int vision)
{
    if (vision < 0)
        vision = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog;

    RenderMapForFade();

    gPlaySt.vision = vision;

    RefreshEntityMaps();
    RefreshUnitSprites();
    RenderMap();

    StartMapFade(TRUE);
}

void SetFogVisionOld(int vision)
{
    SetFogVisionNew(vision);
}

extern struct ProcScr const ProcScr_Unk_085C5BA0[];

extern struct ProcScr const ProcScr_ChapterIntro_Bg3Scroll[];

extern struct ProcScr const ProcScr_ChapterIntro_KeyListen[];

void ChapterIntro_Init(struct GenericProc * proc);
void ChapterIntro_BeginFadeIn(struct GenericProc * proc);
void ChapterIntro_LoopFadeIn(struct GenericProc * proc);
void ChapterIntro_BeginMotifFadeIn(struct GenericProc * proc);
void ChapterIntro_LoopMotifFadeIn(struct GenericProc * proc);
void ChapterIntro_BeginHOpenText(struct GenericProc * proc);
void ChapterIntro_LoopHOpenText(struct GenericProc * proc);
void ChapterIntro_BeginVOpenText(struct GenericProc * proc);
void ChapterIntro_LoopVOpenText(struct GenericProc * proc);
void ChapterIntro_Begin_0801E1A0(struct GenericProc * proc);
void ChapterIntro_Loop_0801E1F8(struct GenericProc * proc);
void ChapterIntro_Begin_0801E220(struct GenericProc * proc);
void ChapterIntro_Loop_0801E244(struct GenericProc * proc);
void ChapterIntro_0801E2B0(struct GenericProc * proc);
void ChapterIntro_InitMapDisplay(struct GenericProc * proc);
void ChapterIntro_BeginFadeToMap(struct GenericProc * proc);
void ChapterIntro_LoopFadeToMap(struct GenericProc * proc);
void ChapterIntro_BeginCloseText(struct GenericProc * proc);
void ChapterIntro_LoopCloseText(struct GenericProc * proc);
void ChapterIntro_BeginFastCloseText(struct GenericProc * proc);
void ChapterIntro_LoopFastCloseText(struct GenericProc * proc);
void ChapterIntro_BeginFadeOut(struct GenericProc * proc);
void ChapterIntro_LoopFadeOut(struct GenericProc * proc);
void ChapterIntro_BeginFastFadeToMap(struct GenericProc * proc);
void ChapterIntro_LoopFastFadeToMap(struct GenericProc * proc);
void ChapterIntro_SetSkipTarget(short arg, struct GenericProc * proc);

void ChapterIntro_InitMapDisplayNew(struct GenericProc * proc)
{
    int val;

    SetDispEnable(1, 1, 1, 1, 1);

    SetBlendAlpha(0x10, 0);

    SetBlendTargetANew(0, 1, 0, 0, 0);
    SetBlendTargetBNew(0, 0, 0, 1, 1); SetBlendBackdropB(1);

    TmFill(gBg2Tm, 0);
    EnableBgSync(BG2_SYNC_BIT);

    DisableTilesetPalAnim();

    int chapter = GetChapterInPlaySt(&gPlayStNew);

    ApplyChapterMapGraphics(chapter);
    ApplyUnitSpritePalettes();
    ApplySystemObjectsGraphics();

    val = GetChapterInfo(chapter)->unk_0F; // initial X
    val = GetCameraCenteredX(val*16);
    val = (val + 15) & 0x1F0;
    gBmSt.camera.x = val;

    val = GetChapterInfo(chapter)->unk_10; // initial Y
    val = GetCameraCenteredY(val*16);
    val = (val + 15) & 0x3F0;
    gBmSt.camera.y = val;

    RefreshEntityMaps();
    RenderMap();
}

struct ProcScr const ProcScr_ChapterIntroNew[] =
{
    PROC_CALL(LockBmDisplay),

    PROC_CALL(ChapterIntro_Init),

    PROC_START_CHILD(ProcScr_ChapterIntro_Bg3Scroll),
    PROC_START_CHILD(ProcScr_ChapterIntro_KeyListen),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 1),

    PROC_CALL(ChapterIntro_BeginFadeIn),
    PROC_REPEAT(ChapterIntro_LoopFadeIn),

    PROC_SLEEP(40),

    PROC_CALL(ChapterIntro_BeginMotifFadeIn),
    PROC_REPEAT(ChapterIntro_LoopMotifFadeIn),

    PROC_SLEEP(80),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 0),

    PROC_CALL(ChapterIntro_BeginHOpenText),
    PROC_REPEAT(ChapterIntro_LoopHOpenText),

    PROC_CALL(ChapterIntro_BeginVOpenText),
    PROC_REPEAT(ChapterIntro_LoopVOpenText),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 1),

    PROC_CALL(ChapterIntro_Begin_0801E1A0),
    PROC_REPEAT(ChapterIntro_Loop_0801E1F8),

    PROC_SLEEP(120),

    PROC_CALL(ChapterIntro_Begin_0801E220),
    PROC_REPEAT(ChapterIntro_Loop_0801E244),

    PROC_END_EACH(ProcScr_ChapterIntro_Bg3Scroll),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 0),

    PROC_CALL(ChapterIntro_0801E2B0),

    PROC_CALL(UnlockBmDisplay),

    PROC_CALL(ChapterIntro_InitMapDisplayNew),

    PROC_CALL(ChapterIntro_BeginFadeToMap),
    PROC_REPEAT(ChapterIntro_LoopFadeToMap),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 2),

    PROC_SLEEP(90),

    PROC_CALL_ARG(ChapterIntro_SetSkipTarget, 0),

    PROC_CALL(ChapterIntro_BeginCloseText),
    PROC_REPEAT(ChapterIntro_LoopCloseText),

    PROC_SLEEP(30),

    PROC_GOTO(99),

PROC_LABEL(1),
    PROC_CALL(ChapterIntro_BeginFadeOut),
    PROC_REPEAT(ChapterIntro_LoopFadeOut),

    PROC_CALL(ChapterIntro_0801E2B0),

    PROC_CALL(UnlockBmDisplay),

    PROC_CALL(ChapterIntro_InitMapDisplayNew),

    PROC_CALL(ChapterIntro_BeginFastFadeToMap),
    PROC_REPEAT(ChapterIntro_LoopFastFadeToMap),

    PROC_GOTO(99),

PROC_LABEL(2),
    PROC_CALL(ChapterIntro_BeginFastCloseText),
    PROC_REPEAT(ChapterIntro_LoopFastCloseText),

PROC_LABEL(99),
    PROC_END,
};

void ChapterIntro_BeginFadeToMapNew(struct GenericProc * proc)
{
    ColorFadeInit();

    func_fe6_08001D44(gPal + 0x10*BGPAL_TILESET, 6, 10, +1);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_10), 0x10+OBPAL_10, 6, +1);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_SYSTEM_OBJECTS), 0x10+OBPAL_SYSTEM_OBJECTS, 2, +1);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_7), 0x10+OBPAL_7, 1, +1);

    ColorFadeTick();
    EnablePalSync();

    proc->unk4C = 30;

    if (GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather == WEATHER_FLAMES)
        ApplyFlamesWeatherGradient();
}

void ChapterIntro_BeginFadeToMapOld(struct GenericProc * proc)
{
    ChapterIntro_BeginFadeToMapNew(proc);
}

int getChapterOpeningBGM(void)
{
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    return IsChapterNew(chapter) ? ChapterOPBGMs[chapter - CHAPTER_CH_NEW] : GetChapterInfo(chapter)->song_opening_bgm;
}

void ChapterIntro_LoopFadeToMapNew(struct GenericProc * proc)
{
    if ((GetGameTime() % 2) == 0)
    {
        int val;

        ColorFadeTick();

        if (GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather == WEATHER_FLAMES)
            ApplyFlamesWeatherGradient();

        EnablePalSync();

        val = (proc->unk4C+7)/8;
        SetBlendAlpha(12 + val, 4 - val);

        proc->unk4C--;

        if (proc->unk4C == 24)
            StartBgm(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_opening_bgm, NULL);

        if (proc->unk4C < 0)
        {
            EnableTilesetPalAnim();
            Proc_Break(proc);
        }
    }
}

void ChapterIntro_LoopFadeToMapOld(struct GenericProc * proc)
{
    ChapterIntro_LoopFadeToMapNew(proc);
}

void ChapterIntro_BeginFastFadeToMapNew(struct GenericProc * proc)
{
    ClearUi();

    ColorFadeInit();

    func_fe6_08001D44(gPal + 0x10*BGPAL_TILESET, 6, 10, +2);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_10), 0x10+OBPAL_10, 6, +2);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_SYSTEM_OBJECTS), 0x10+OBPAL_SYSTEM_OBJECTS, 2, +2);
    func_fe6_08001D44(gPal + 0x10*(0x10+OBPAL_7), 0x10+OBPAL_7, 1, +2);

    ColorFadeTick();
    EnablePalSync();

    proc->unk4C = 14;

    StartBgm(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->song_opening_bgm, NULL);
}

void ChapterIntro_BeginFastFadeToMapOld(struct GenericProc * proc)
{
    ChapterIntro_BeginFastFadeToMapNew(proc);
}

void ChapterIntro_LoopFastFadeToMapNew(struct GenericProc * proc)
{
    ColorFadeTick();

    if (GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->weather == WEATHER_FLAMES)
        ApplyFlamesWeatherGradient();

    EnablePalSync();

    proc->unk4C--;

    if (proc->unk4C < 0)
    {
        EnableTilesetPalAnim();

        Proc_Break(proc);
    }
}

void ChapterIntro_LoopFastFadeToMapOld(struct GenericProc * proc)
{
    ChapterIntro_LoopFastFadeToMapNew(proc);
}

void GetPlayerInitialCursorPositionNew(int * x_out, int * y_out)
{
    struct Unit * unit;

    if (gPlaySt.turn == 1)
    {
        unit = GetUnitToSelectAuto();

        gPlaySt.x_cursor = unit->x;
        gPlaySt.y_cursor = unit->y;
    }

    if (!gPlaySt.config_no_auto_cursor)
    {
        unit = GetUnitToSelectAuto();

        *x_out = unit->x;
        *y_out = unit->y;
    }
    else
    {
        *x_out = gPlaySt.x_cursor;
        *y_out = gPlaySt.y_cursor;
    }
}

void GetPlayerInitialCursorPositionOld(int * x_out, int * y_out)
{
    GetPlayerInitialCursorPositionNew(x_out, y_out);
}

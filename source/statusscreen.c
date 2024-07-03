#include "statusscreen.h"

#include "hardware.h"
#include "oam.h"
#include "armfunc.h"
#include "sound.h"
#include "icon.h"
#include "sprite.h"
#include "face.h"
#include "msg.h"
#include "util.h"
#include "unit.h"
#include "chapterinfo.h"
#include "chapter.h"
#include "gold.h"
#include "faction.h"
#include "bm.h"
#include "bmio.h"
#include "ui.h"
#include "statscreen.h"
#include "helpbox.h"
#include "save_core.h"
#include "save_stats.h"
#include "save_xmap.h"

#include "constants/msg.h"
#include "constants/pids.h"
#include "constants/faces.h"
#include "constants/songs.h"
#include "constants/chapters.h"

#include "constants/videoalloc_global.h"

#include "msgNew.h"
#include "bmNew.h"
#include "chapterNew.h"
#include "chapters.h"
#include "heroes.h"
#include "enemies.h"

#define MSG_ID_GOLD 3727
#define MSG_ID_周目 3344

extern struct StatusScreenSt gStatusScreenSt;

void func_fe6_0807372CNew(struct StatusScreenProc * proc)
{
    Text_InsertDrawString(gStatusScreenSt.text + 1, 2, TEXT_COLOR_SYSTEM_WHITE, DecodeMsg(MSG_724));
    PutDrawText(gStatusScreenSt.text + 1, gBg0Tm + TM_OFFSET(1, 5), TEXT_COLOR_SYSTEM_BLUE, 25, 0,
        DecodeMsg(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->msg_30));

    Text_InsertDrawString(gStatusScreenSt.text + 2, 0, TEXT_COLOR_SYSTEM_WHITE, DecodeMsg(MSG_725));
    Text_SetParams(gStatusScreenSt.text + 2, 74, TEXT_COLOR_SYSTEM_BLUE);
    Text_DrawNumber(gStatusScreenSt.text + 2, gPlaySt.turn);
    PutText(gStatusScreenSt.text + 2, gBg0Tm + TM_OFFSET(18, 4));

    Text_InsertDrawString(gStatusScreenSt.text + 3, 0, TEXT_COLOR_SYSTEM_WHITE, DecodeMsg(MSG_726));
    Text_InsertDrawString(gStatusScreenSt.text + 3, 82, TEXT_COLOR_SYSTEM_GOLD, GetMsg(MSG_ID_GOLD));
    Text_InsertDrawNumberOrBlank(gStatusScreenSt.text + 3, 74, 2, GetGold());
    PutText(gStatusScreenSt.text + 3, gBg0Tm + TM_OFFSET(18, 6));
}

void func_fe6_0807372COld(struct StatusScreenProc * proc)
{
    func_fe6_0807372CNew(proc);
}

void func_fe6_08073808New(struct StatusScreenProc * proc)
{
    char const * text_str;
    int x_text;

    Text_InsertDrawString(gStatusScreenSt.text + 1, 2, TEXT_COLOR_SYSTEM_WHITE, DecodeMsg(MSG_724));
    PutDrawText(gStatusScreenSt.text + 1, gBg0Tm + TM_OFFSET(1, 6), TEXT_COLOR_SYSTEM_BLUE, 25, 0,
        func_fe6_080867FC(GetChapterInPlaySt(&gPlayStNew)));

    Text_InsertDrawString(gStatusScreenSt.text + 2, 0, TEXT_COLOR_SYSTEM_WHITE, DecodeMsg(MSG_725));
    Text_SetParams(gStatusScreenSt.text + 2, 50, TEXT_COLOR_SYSTEM_BLUE);
    Text_DrawNumber(gStatusScreenSt.text + 2, gPlaySt.turn);
    PutText(gStatusScreenSt.text + 2, gBg0Tm + TM_OFFSET(21, 6));

    SetTextFontGlyphs(TEXT_GLYPHS_TALK);
    gActiveFont->tileref |= TILE_PAL_SAFE(BGPAL_STATUSSCREEN_TALKTEXT);

    text_str = func_fe6_080867F0(GetChapterInPlaySt(&gPlayStNew));
    x_text = GetStringTextCenteredPos(12 * 8, text_str);

    Text_InsertDrawString(gStatusScreenSt.text + 0, x_text, 0, text_str);
    PutText(gStatusScreenSt.text + 0, gBg0Tm + TM_OFFSET(9, 4));

    SetTextFontGlyphs(TEXT_GLYPHS_SYSTEM);
    gActiveFont->tileref &= ~TILE_PAL_SAFE(-1);
}

void func_fe6_08073808Old(struct StatusScreenProc * proc)
{
    func_fe6_08073808New(proc);
}

char const * GetRedLeaderNameNew(void)
{
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    if (IsChapterNew(chapter) && chapter != CHAPTER_CH_S0000)
    {
        FOR_UNITS_FACTION(FACTION_RED, unit,
        {
            if (unit->pinfo->id != EID_ENEMY_GENERIC)
                return DecodeMsg(unit->pinfo->msg_name);
        })
    }

    FOR_UNITS_FACTION(FACTION_RED, unit,
    {
        if ((UNIT_ATTRIBUTES(unit) & UNIT_ATTR_BOSS) != 0)
            return DecodeMsg(unit->pinfo->msg_name);
    })

    return DecodeMsg(MSG_727);
}

char const * GetRedLeaderNameOld(void)
{
    return GetRedLeaderNameNew();
}

void func_fe6_080738FCNew(struct StatusScreenProc * proc)
{
    Text_InsertDrawString(gStatusScreenSt.text + 4, 0, TEXT_COLOR_SYSTEM_WHITE,
        DecodeMsg(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->msg_32));
    Text_SetParams(gStatusScreenSt.text + 4, 69, TEXT_COLOR_SYSTEM_BLUE);
    Text_DrawNumber(gStatusScreenSt.text + 4,
        CountFactionUnitsWithoutFlags(FACTION_BLUE, UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED));

    Text_InsertDrawString(gStatusScreenSt.text + 5, 0, TEXT_COLOR_SYSTEM_WHITE,
        DecodeMsg(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->msg_34));
    Text_SetParams(gStatusScreenSt.text + 5, 69, TEXT_COLOR_SYSTEM_BLUE);
    Text_DrawNumber(gStatusScreenSt.text + 5,
        CountFactionUnitsWithoutFlags(FACTION_RED, UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED));

    Text_InsertDrawString(gStatusScreenSt.text + 6, 0, TEXT_COLOR_SYSTEM_WHITE,
        DecodeMsg(GetUnitByPid(PID_ROY)->pinfo->msg_name));

    Text_InsertDrawString(gStatusScreenSt.text + 7, 0, TEXT_COLOR_SYSTEM_WHITE, GetRedLeaderNameNew());

    Text_InsertDrawString(gStatusScreenSt.text + 8, 0, TEXT_COLOR_SYSTEM_GOLD, GetMsg(MSG_ID_周目));
}

void func_fe6_080738FCOld(struct StatusScreenProc * proc)
{
    func_fe6_080738FCNew(proc);
}

void DrawStatusScreenPageANew()
{
    int chibi = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->chibi_36;

    PutFaceChibi(FID_FACTION_CHIBI,
        gUiTmScratchC + TM_OFFSET(4, 0), 0x400 + BGCHR_B_STATUSSCREEN_280 + 1, 8, FALSE);
    PutFaceChibi(FID_FACTION_CHIBI + chibi,
        gUiTmScratchC + TM_OFFSET(4, 4), 0x400 + BGCHR_B_STATUSSCREEN_280 + 1 + 0x10, 9, FALSE);

    TmApplyTsa(gUiTmScratchB + TM_OFFSET(0, 0), gUnk_0833C6F4, TILEREF(0, 2));
    TmApplyTsa(gUiTmScratchB + TM_OFFSET(19, 8), gUnk_0833C8D8, TILEREF(0, 2));

    PutText(gStatusScreenSt.text + 4, gUiTmScratchA + TM_OFFSET(8, 1));
    PutText(gStatusScreenSt.text + 5, gUiTmScratchA + TM_OFFSET(8, 5));
    PutText(gStatusScreenSt.text + 6, gUiTmScratchA + TM_OFFSET(20, 1));
    PutText(gStatusScreenSt.text + 7, gUiTmScratchA + TM_OFFSET(20, 5));

    TmApplyTsa(gUiTmScratchC + TM_OFFSET(18, 1), Tsa_StatusScreen_FactionInfoFrame, TILEREF(BGCHR_B_STATUSSCREEN_380, 6));
    TmApplyTsa(gUiTmScratchC + TM_OFFSET(18, 5), Tsa_StatusScreen_FactionInfoFrame, TILEREF(BGCHR_B_STATUSSCREEN_380, 6));
    TmApplyTsa(gUiTmScratchC + TM_OFFSET(20, 8), Tsa_StatusScreen_PlaytimeFrame, TILEREF(BGCHR_B_STATUSSCREEN_380, 6));

    PutTime(gUiTmScratchA + TM_OFFSET(20, 9), 2, GetGameTime(), FALSE);
}

void DrawStatusScreenPageAOld()
{
    DrawStatusScreenPageANew();
}

void func_fe6_08073AC8New(struct StatusScreenProc * proc)
{
    struct HelpBoxPrintProc * print_proc;
    int i;

    SetTextFontGlyphs(TEXT_GLYPHS_TALK);

    print_proc = SpawnProc(ProcScr_Unk_08677FD0, PROC_TREE_3);

    print_proc->font = NULL;
    print_proc->line = 0;
    print_proc->str_it = func_fe6_08086910(GetChapterInPlaySt(&gPlayStNew));
    print_proc->chars_per_print = UINT8_MAX;
    print_proc->clock_interval = 0;
    print_proc->clock = 0;

    for (i = 0; i < 5; i++)
        print_proc->text[i] = gStatusScreenSt.text + 9 + i;

    GetStringTextBox(print_proc->str_it, (int *)&gStatusScreenSt.trial_something_width, (int *)&gStatusScreenSt.trial_something_height);

    func_fe6_08071274(print_proc);
    Proc_End(print_proc);

    SetTextFontGlyphs(TEXT_GLYPHS_SYSTEM);
}

void func_fe6_08073AC8Old(struct StatusScreenProc * proc)
{
    func_fe6_08073AC8New(proc);
}

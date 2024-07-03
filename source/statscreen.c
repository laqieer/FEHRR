#include "prelude.h"

#include <stdlib.h>

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "proc.h"
#include "icon.h"
#include "sprite.h"
#include "text.h"
#include "msg.h"
#include "msgNew.h"
#include "util.h"
#include "item.h"
#include "unit.h"
#include "bm.h"
#include "faction.h"
#include "unitsprite.h"
#include "battle.h"
#include "bmio.h"
#include "support.h"
#include "ui.h"
#include "mu.h"
#include "helpbox.h"
#include "systemlabels.h"
#include "face.h"
#include "gold.h"
#include "save_xmap.h"
#include "statusscreen.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"
#include "constants/faces.h"
#include "constants/pids.h"
#include "constants/msg.h"

#include "statscreen.h"

#include "chapterinfo.h"
#include "bmNew.h"
#include "chapterNew.h"
#include "faceNew.h"
#include "facesNew.h"
#include "heroes.h"
#include "voice.h"
#include "log.h"

#define MSG_ID_GOLD 3727
#define MSG_ID_周目 3344

enum
{
    PAGE_FRAME_SCREEN_X = 12,
    PAGE_FRAME_SCREEN_Y = 2,
};

extern struct TextInitInfo const gStatScreenTextList[];

extern struct StatScreenTextInfo const gStatScreenPersonalInfoLabelsInfo[];

extern struct StatScreenTextInfo const gStatScreenEquipmentLabelsInfo[];

extern struct StatScreenTextInfo const gStatScreenWeaponExpLabelsPhysicalInfo[];

extern struct StatScreenTextInfo const gStatScreenWeaponExpLabelsMagicalInfo[];

extern struct StatScreenSt gStatScreenSt;
extern struct StatusScreenSt gStatusScreenSt;

void PutStatScreenPageNew(int page_id);

void PutStatScreenTextNew(struct StatScreenTextInfo const * list)
{
    while (list->text != NULL)
    {
        if (list->str_list != NULL)
        {
            // PutDrawText(list->text, list->tm, list->color, list->x_offset, 0, list->str_list[GetLang()]);
            PutDrawText(list->text, list->tm, list->color, list->x_offset, 0, list->str_list[0]);
        }
        else
        {
            PutText(list->text, list->tm);
        }

        list++;
    }
}

void PutStatScreenTextOld(struct StatScreenTextInfo const * list)
{
    PutStatScreenTextNew(list);
}

ProcPtr StartMuralBackgroundNew(ProcPtr parent, void * vram, int pal)
{
    int i, tileref;
    u16 * tm = gBg3Tm;

    if (vram == NULL)
        vram = ((void*) VRAM) + GetBgChrOffset(3);

    if (pal < 0)
        pal = BGPAL_MURALBACKGROUND;

    if (gBmSt.flags & BM_FLAG_LINKARENA)
        ApplyPalettes(Pal_LinkArenaMuralBackground, pal, 2);
    else
        ApplyPalettes(Pal_MuralBackground, pal, 2);

    Decompress(Img_MuralBackground, vram);

    tileref = ((((uptr) (vram - GetBgChrOffset(3))) / CHR_SIZE) & 0xFFF) + TILE_PAL_SAFE(pal);

    if (IsNewFace(GetUnitFid(gStatScreenSt.unit)))
    {
        // tiles from 0 to 0x160 are overwritten by full face
        for (i = 0; i < 0x120; i++)
            *tm++ = tileref + 0x160 + i;
        for (i = 0x120; i < 0x160; i++)
            *tm++ = tileref + 0x40 + i;
        for (i = 0x160; i < 0x280; i++)
            *tm++ = i + tileref;
    }
    else
    {
        for (i = 0; i < 0x280; i++)
            *tm++ = i + tileref;
    }

    return SpawnProc(ProcScr_BackgroundSlide, parent);
}

void StatScreen_InitNew(ProcPtr proc)
{
    u16 bg_config[12] =
    {
        0x0000, 0x6000, 0,
        0x0000, 0x6800, 0,
        0x8000, 0x7000, 0,
        0x8000, 0x7800, 0,
    };

    InitBgs(bg_config);

    SetBlankChr(0x400);
    SetBlankChr(0x401);
    TmFill(gBg2Tm, 0);
    EnableBgSync(BG2_SYNC_BIT);

    ApplySystemGraphics();
    ApplyUnitSpritePalettes();

    // StartMuralBackground(NULL, ((void *) VRAM) + 0x8000 + BGCHR_STATSCREEN_BACKMURAL * CHR_SIZE, -1);
    StartMuralBackgroundNew(NULL, ((void *) VRAM) + 0x8000 + BGCHR_STATSCREEN_BACKMURAL * CHR_SIZE, -1);

    Decompress(gUnk_083080D0, ((void *) VRAM + 0x10000) + OBCHR_STATSCREEN_240 * CHR_SIZE);

    ApplyIconPalettes(BGPAL_ICONS);
    ApplyUiStatBarPal(BGPAL_STATSCREEN_6);
    ApplyIconPalette(1, 0x10 + OBPAL_STATSCREEN_PAGENAME);

    Decompress(gUnk_08307CEC, gBuf);
    TmApplyTsa(gBg1Tm, gBuf, TILEREF(BGCHR_WINDOWFRAME, BGPAL_WINDOWFRAME));

    Decompress(gUnk_08307ED4, ((void *) VRAM) + 0x8000 + BGCHR_STATSCREEN_EQUIPSTATFRAME * CHR_SIZE);
    ApplyPalette(gUnk_08308050, BGPAL_STATSCREEN_EQUIPSTATFRAME);

    CpuFastCopy(gPal + 0x10 * BGPAL_WINDOWFRAME, gPal + 0x100 + 0x10 * OBPAL_STATSCREEN_WINDOWFRAME, 0x20);

    ApplyIconPalette(1, 0x10 + OBPAL_STATSCREEN_SPRITES);

    Decompress(gUnk_08308920, ((void *) VRAM) + BGCHR_STATSCREEN_EQUIPMENTLABEL * CHR_SIZE);

    gStatScreenSt.mu = NULL;

    StatScreenUnitSlide_End(proc);
}

void StatScreen_InitOld(ProcPtr proc)
{
    StatScreen_InitNew(proc);
}

void StatScreen_InitUnitNew(ProcPtr proc)
{
    // if (UNIT_FACTION(gStatScreenSt.unit) == FACTION_BLUE || (gBmSt.flags & BM_FLAG_LINKARENA))
    // {
        gStatScreenSt.page_count = 3;
    // }
    // else
    // {
    //     gStatScreenSt.page_count = 2;

    //     if (gStatScreenSt.page == 2)
    //         gStatScreenSt.page = 1;
    // }

    ResetText();
    InitIcons();
    InitStatScreenText();

    PutFace80x72(gBg2Tm + TM_OFFSET(1, 1),
        GetUnitFid(gStatScreenSt.unit),
        0x400 + BGCHR_STATSCREEN_FACE, BGPAL_STATSCREEN_FACE);

    EndAllMus();
    gStatScreenSt.mu = StartUiMu(gStatScreenSt.unit, 80, 138);

    PutStatScreenLeftPanelInfo();
    // PutStatScreenPage(gStatScreenSt.page);
    PutStatScreenPageNew(gStatScreenSt.page);

    TmCopyRect(gUiTmScratchA,
        gBg0Tm + TM_OFFSET(PAGE_FRAME_SCREEN_X, PAGE_FRAME_SCREEN_Y),
        18, 18);

    TmCopyRect(gUiTmScratchB,
        gBg1Tm + TM_OFFSET(PAGE_FRAME_SCREEN_X, PAGE_FRAME_SCREEN_Y),
        18, 18);

    TmCopyRect(gUiTmScratchC,
        gBg2Tm + TM_OFFSET(PAGE_FRAME_SCREEN_X, PAGE_FRAME_SCREEN_Y),
        18, 18);

    EnableBgSync(BG0_SYNC_BIT + BG1_SYNC_BIT + BG2_SYNC_BIT);

    StartUnitVoice(gStatScreenSt.unit, VOICE_TYPE_STATUS);
}

void StatScreen_InitUnitOld(ProcPtr proc)
{
    StatScreen_InitUnitNew(proc);
}

// put stat without bar
void PutStatScreenStat(int num, int x, int y, int base, int total, int max)
{
    int bonus = total - base;

    PutNumberOrBlank(gUiTmScratchA + TM_OFFSET(x, y),
        (base == max) ? TEXT_COLOR_SYSTEM_GREEN : TEXT_COLOR_SYSTEM_BLUE, base);

    PutNumberBonus(bonus, gUiTmScratchA + TM_OFFSET(x + 1, y));

    if (total > 30)
    {
        total = 30;
        bonus = total - base;
    }

    // BG2 may be switched to 256-color mode for full face. UI gauge only works in 16-color mode so it cannot display normally.

    // PutDrawUiGauge(0x400 + 1 + num*6, 6,
    //     gUiTmScratchC + TM_OFFSET(x - 2, y + 1),
    //     TILEREF(0, BGPAL_STATSCREEN_6), max * 41 / 30, base * 41 / 30, bonus * 41 / 30);
}

// put weapon exp without bar
void PutStatScreenWeaponExp(int num, int x, int y, int item_kind)
{
    int color;
    int wexp = gStatScreenSt.unit->wexp[item_kind];

    PutIcon(gUiTmScratchA + TM_OFFSET(x, y),
        0x70 + item_kind, // TODO: icon id definitions
        TILEREF(0, BGPAL_ICONS + 1));

    color = (wexp >= WEXP_S)
        ? TEXT_COLOR_SYSTEM_GREEN : TEXT_COLOR_SYSTEM_BLUE;

    // display rank letter
    PutSpecialChar(gUiTmScratchA + TM_OFFSET(x + 5, y),
        color, GetWeaponLevelSpecialCharFromExp(wexp));

    // this code makes the following assumptions
    STATIC_ASSERT(WPN_EXP_C - WPN_EXP_D == (WPN_EXP_D - WPN_EXP_E));
    STATIC_ASSERT(WPN_EXP_B - WPN_EXP_C == (WPN_EXP_D - WPN_EXP_E));
    STATIC_ASSERT(WPN_EXP_A - WPN_EXP_B == (WPN_EXP_D - WPN_EXP_E));
    STATIC_ASSERT(WPN_EXP_S - WPN_EXP_A == (WPN_EXP_D - WPN_EXP_E));

    if (wexp != WEXP_0)
        wexp -= WEXP_E;

    // BG2 may be switched to 256-color mode for full face. UI gauge only works in 16-color mode so it cannot display normally.

    // PutDrawUiGauge(0x400 + 1 + num * 6, 5,
    //     gUiTmScratchC + TM_OFFSET(x + 3, y + 1), TILEREF(0, BGPAL_STATSCREEN_6),
    //     34, ((wexp % (WPN_EXP_D - WPN_EXP_E)) * 33) / 48, 0); // math look weird but gets something that ranges from 0 to 33. I would do "((wexp % 50) * 34) / 50"
}

void PutStatScreenWeaponExpAndSupportsPageNew(void)
{
    Decompress(gUnk_08307E50, gBuf);
    TmApplyTsa(gUiTmScratchB, gBuf, TILEREF(BGCHR_WINDOWFRAME, BGPAL_WINDOWFRAME));

    if (UnitKnowsMagic(gStatScreenSt.unit))
    {
        PutStatScreenTextNew(gStatScreenWeaponExpLabelsMagicalInfo);

        PutStatScreenWeaponExp(0, 1, 1, ITEM_KIND_ANIMA);
        PutStatScreenWeaponExp(1, 1, 3, ITEM_KIND_LIGHT);
        PutStatScreenWeaponExp(2, 9, 1, ITEM_KIND_ELDER);
        PutStatScreenWeaponExp(3, 9, 3, ITEM_KIND_STAFF);
    }
    else
    {
        PutStatScreenTextNew(gStatScreenWeaponExpLabelsPhysicalInfo);

        PutStatScreenWeaponExp(0, 1, 1, ITEM_KIND_SWORD);
        PutStatScreenWeaponExp(1, 1, 3, ITEM_KIND_LANCE);
        PutStatScreenWeaponExp(2, 9, 1, ITEM_KIND_AXE);
        PutStatScreenWeaponExp(3, 9, 3, ITEM_KIND_BOW);
    }

    PutStatScreenSupportList();
}

void PutStatScreenPersonalInfoPageNew(void)
{
    Decompress(gUnk_08307D58, gBuf);
    TmApplyTsa(gUiTmScratchB, gBuf, TILEREF(BGCHR_WINDOWFRAME, BGPAL_WINDOWFRAME));

    PutStatScreenTextNew(gStatScreenPersonalInfoLabelsInfo);

    // display strength/magic labels

    if (UnitKnowsMagic(gStatScreenSt.unit))
    {
        // magic
        PutDrawText(gStatScreenSt.text + STATSCREEN_TEXT_POW,
            gUiTmScratchA + TM_OFFSET(1, 1),
            TEXT_COLOR_SYSTEM_GOLD, 0, 0,
            // TEXT("魔力", "Mag"));
            GetMsg(3377));
    }
    else
    {
        // strength
        PutDrawText(gStatScreenSt.text + STATSCREEN_TEXT_POW,
            gUiTmScratchA + TM_OFFSET(1, 1),
            TEXT_COLOR_SYSTEM_GOLD, 4, 0,
            // TEXT("力", "Str"));
            GetMsg(3378));
    }

    // display strength/magic stat value
    PutStatScreenStat(0, 5, 1,
        gStatScreenSt.unit->pow,
        GetUnitPower(gStatScreenSt.unit),
        UNIT_POW_CAP(gStatScreenSt.unit));

    // display skill stat value
    PutStatScreenStat(1, 5, 3,
        gStatScreenSt.unit->flags & UNIT_FLAG_RESCUING
            ? gStatScreenSt.unit->skl / 2 : gStatScreenSt.unit->skl,
        GetUnitSkill(gStatScreenSt.unit),
        gStatScreenSt.unit->flags & UNIT_FLAG_RESCUING
            ? UNIT_SKL_CAP(gStatScreenSt.unit) / 2 : UNIT_SKL_CAP(gStatScreenSt.unit));

    // display speed stat value
    PutStatScreenStat(2, 5, 5,
        gStatScreenSt.unit->flags & UNIT_FLAG_RESCUING
            ? gStatScreenSt.unit->spd/2 : gStatScreenSt.unit->spd,
        GetUnitSpeed(gStatScreenSt.unit),
        gStatScreenSt.unit->flags & UNIT_FLAG_RESCUING
            ? UNIT_SPD_CAP(gStatScreenSt.unit) / 2 : UNIT_SPD_CAP(gStatScreenSt.unit));

    // display luck stat value
    PutStatScreenStat(3, 5, 7,
        gStatScreenSt.unit->lck,
        GetUnitLuck(gStatScreenSt.unit),
        UNIT_LCK_CAP(gStatScreenSt.unit));

    // display defense stat value
    PutStatScreenStat(4, 5, 9,
        gStatScreenSt.unit->def,
        GetUnitDefense(gStatScreenSt.unit),
        UNIT_DEF_CAP(gStatScreenSt.unit));

    // display resistance stat value
    PutStatScreenStat(5, 5, 11,
        gStatScreenSt.unit->res,
        GetUnitResistance(gStatScreenSt.unit),
        UNIT_RES_CAP(gStatScreenSt.unit));

    // display movement stat value
    PutStatScreenStat(6, 13, 1,
        UNIT_MOV_BASE(gStatScreenSt.unit),
        UNIT_MOV(gStatScreenSt.unit),
        UNIT_MOV_CAP(gStatScreenSt.unit));

    // display constitution stat value
    PutStatScreenStat(7, 13, 3,
        UNIT_CON_BASE(gStatScreenSt.unit),
        UNIT_CON(gStatScreenSt.unit),
        UNIT_CON_CAP(gStatScreenSt.unit));

    // display unit aid
    PutNumber(gUiTmScratchA + TM_OFFSET(13, 5), TEXT_COLOR_SYSTEM_BLUE,
        GetUnitAid(gStatScreenSt.unit));

    // display unit aid icon
    PutIcon(gUiTmScratchA + TM_OFFSET(14, 5),
        GetAidIconFromAttributes(UNIT_ATTRIBUTES(gStatScreenSt.unit)),
        TILEREF(0, BGPAL_ICONS + 1));

    // display unit rescue name
    Text_InsertDrawString(gStatScreenSt.text + STATSCREEN_TEXT_RESCUE,
        24, TEXT_COLOR_SYSTEM_BLUE,
        GetUnitRescueName(gStatScreenSt.unit));

    // display status name
    Text_InsertDrawString(gStatScreenSt.text + STATSCREEN_TEXT_STATUS,
        24, TEXT_COLOR_SYSTEM_BLUE,
        GetUnitStatusName(gStatScreenSt.unit));

    // display status turns

    if (gStatScreenSt.unit->status != UNIT_STATUS_NONE)
    {
        PutNumberSmall(gUiTmScratchA + TM_OFFSET(16, 11),
            TEXT_COLOR_SYSTEM_WHITE,
            gStatScreenSt.unit->status_duration);
    }

    // display affininity icon and name

    PutIcon(gUiTmScratchA + TM_OFFSET(12, 9),
        GetUnitAffinityIcon(gStatScreenSt.unit),
        TILEREF(0, BGPAL_ICONS + 1));

    Text_InsertDrawString(gStatScreenSt.text + STATSCREEN_TEXT_AFFINITY,
        40, TEXT_COLOR_SYSTEM_BLUE, GetAffinityName(gStatScreenSt.unit->pinfo->affinity));
}

void PutStatScreenItemsPageNew(void)
{
    int i, item;

    Decompress(gUnk_08307DD4, gBuf);
    TmApplyTsa(gUiTmScratchB, gBuf, TILEREF(BGCHR_WINDOWFRAME, BGPAL_WINDOWFRAME));

    Decompress(gUnk_08308070, gBuf);
    // BG2 may be switched to 256-color mode for full face. Equip stat frame only works in 16-color mode so it cannot display normally.
    // TmApplyTsa(gUiTmScratchC + TM_OFFSET(1, 11), gBuf, TILEREF(BGCHR_STATSCREEN_EQUIPSTATFRAME, BGPAL_STATSCREEN_EQUIPSTATFRAME));

    PutStatScreenTextNew(gStatScreenEquipmentLabelsInfo);

    for (i = 0; (i < ITEMSLOT_INV_COUNT) && (item = gStatScreenSt.unit->items[i]); i++)
    {
        func_fe6_08016860(gStatScreenSt.text + STATSCREEN_TEXT_ITEM_A + i,
            item, IsItemDisplayUseable(gStatScreenSt.unit, item),
            gUiTmScratchA + TM_OFFSET(1, 1 + i * 2));
    }

    i = GetUnitEquippedWeaponSlot(gStatScreenSt.unit);
    item = 0;

    if (i >= 0)
    {
        PutSpecialChar(
            gUiTmScratchA + TM_OFFSET(16, 1 + i * 2),
            0, TEXT_SPECIAL_EXP_E);

        // BG2 may be switched to 256-color mode for full face. Equip stat frame only works in 16-color mode so it cannot display normally.
        // TmApplyTsa(
        //     gUiTmScratchC + TM_OFFSET(1, 2 + i * 2),
        //     gUnk_083080AC, TILEREF(BGCHR_STATSCREEN_EQUIPSTATFRAME, BGPAL_STATSCREEN_EQUIPSTATFRAME));

        item = gStatScreenSt.unit->items[i];
    }

    PutNumberOrBlank(gUiTmScratchA + TM_OFFSET(8,  13),
        TEXT_COLOR_SYSTEM_BLUE, gBattleUnitA.battle_attack);

    PutNumberOrBlank(gUiTmScratchA + TM_OFFSET(8,  15),
        TEXT_COLOR_SYSTEM_BLUE, gBattleUnitA.battle_hit);

    PutNumberOrBlank(gUiTmScratchA + TM_OFFSET(15, 13),
        TEXT_COLOR_SYSTEM_BLUE, gBattleUnitA.battle_crit);

    PutNumberOrBlank(gUiTmScratchA + TM_OFFSET(15, 15),
        TEXT_COLOR_SYSTEM_BLUE, gBattleUnitA.battle_avoid);

    Text_InsertDrawString(gStatScreenSt.text + STATSCREEN_TEXT_EQUIPRANGE,
        16, TEXT_COLOR_SYSTEM_BLUE, GetItemRangeString(item));

    for (i = 0; i < 8; ++i)
    {
        gUiTmScratchA[TM_OFFSET(2 + i, 11)] = TILEREF(0x278 + i, BGPAL_ICONS + 1);
        gUiTmScratchA[TM_OFFSET(2 + i, 12)] = TILEREF(0x270 + i, BGPAL_ICONS + 1);
    }
}

void PutStatScreenPageNew(int page_id)
{
    typedef void (* PutPageFunc)(void);

    PutPageFunc func_table[4] =
    {
        PutStatScreenPersonalInfoPageNew,
        PutStatScreenItemsPageNew,
        PutStatScreenWeaponExpAndSupportsPageNew,
        PutStatScreenPersonalInfoPageNew,
    };

    CpuFastFill(0, gUiTmScratchA, sizeof(u16) * 0x20 * 20);
    CpuFastFill(0, gUiTmScratchC, sizeof(u16) * 0x20 * 18);

    func_table[page_id]();
}

void PutStatScreenPageOld(int page_id)
{
    PutStatScreenPageNew(page_id);
}

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

    Text_InsertDrawString(gStatusScreenSt.text + 7, 0, TEXT_COLOR_SYSTEM_WHITE, GetRedLeaderName());

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

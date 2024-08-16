#include "unitlistscreen.h"
#include "unitlistscreenNew.h"

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "icon.h"
#include "sprite.h"
#include "event.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "unit.h"
#include "battle.h"
#include "bmio.h"
#include "chapter.h"
#include "support.h"
#include "faction.h"
#include "unitsprite.h"
#include "unitrearrange.h"
#include "ui.h"
#include "mu.h"
#include "statscreen.h"
#include "helpbox.h"

#include "constants/icons.h"
#include "constants/msg.h"
#include "constants/songs.h"
#include "constants/pids.h"

#include "constants/videoalloc_global.h"

void ListUnitsInFaction(struct UnitListScreenProc * proc, int faction)
{
    // this function is identical to func_fe6_08074BA4
    // except it uses arg faction instead of gPlaySt.faction

    int support_count;
    fu8 i, support_now_count;

    FOR_UNITS_FACTION(faction, unit,
    {
        if ((unit->flags & UNIT_FLAG_DEAD) != 0)
            continue;

        if (proc->mode != UNITLIST_MODE_PREPMENU && (unit->flags & UNIT_FLAG_NOT_DEPLOYED) != 0)
            continue;

        if ((unit->flags & UNIT_FLAG_NOT_DEPLOYED) == 0)
            proc->unk_3B++;

        gSortedUnitsBuf[gUnk_0200CD38].unit = unit;

        BattleGenerateDisplayStats(unit, -1);

        gSortedUnitsBuf[gUnk_0200CD38].battle_attack = ((gBattleUnitA.battle_attack + 1) & 0xFF) - 1;
        gSortedUnitsBuf[gUnk_0200CD38].battle_hit = ((gBattleUnitA.battle_hit + 1) & 0xFF) - 1;
        gSortedUnitsBuf[gUnk_0200CD38].battle_avoid = ((gBattleUnitA.battle_avoid + 1) & 0xFF) - 1;

        support_count = GetUnitSupportCount(unit);
        support_now_count = 0;

        for (i = 0; i < support_count; i++)
        {
            if (CanUnitSupportNow(unit, i))
                support_now_count++;
        }

        if (support_now_count > 3)
            proc->unk_2E = 6 + (support_now_count - 1) / 3;

        gSortedUnitsBuf[gUnk_0200CD38].support_talk_count = support_now_count;
        gSortedUnits[gUnk_0200CD38] = &gSortedUnitsBuf[gUnk_0200CD38];

        gUnk_0200CD38++;

        UseUnitSprite(GetUnitMapSprite(unit));
    })
}

void ListEnemyUnits(struct UnitListScreenProc * proc)
{
    ListUnitsInFaction(proc, FACTION_RED);
}

void DrawEnemyUnitList(struct UnitListScreenProc * proc)
{
    fu8 i, thing;

    SetDispEnable(1, 1, 1, 1, 1);
    SetOnVMatch(NULL);
    InitBgs(NULL);
    ResetText();
    ResetTextFont();
    ClearIcons();
    ApplyUnitSpritePalettes();
    ApplySystemObjectsGraphics();

    StartGreenText(proc);

    gUnk_0200CD38 = 0;
    proc->unk_3B = 0;
    proc->unk_2E = 6;

    // func_fe6_08074D54(proc);
    ListEnemyUnits(proc);

    if (proc->mode != UNITLIST_MODE_PREPMENU || proc->unk_2A == 1)
    {
        thing = gPlaySt.last_sort_key;

        if (thing != 0)
        {
            proc->target_sort_order = (thing >> 7) & 1;
            proc->sort_order = proc->target_sort_order;
            proc->sort_key = thing & 0x7F;
        }

        if (proc->unk_29 != 4 && proc->page != 0)
        {
            thing = gPlaySt.last_unit_list_page;

            if (thing != 0)
            {
                if (thing > 6)
                    proc->page = 6;
                else
                    proc->page = thing;

                proc->page_target = proc->page;
            }
        }

        SortUnitList(proc->sort_key, proc->sort_order);
    }

    Decompress(gUnk_083198CC, OBJ_VRAM0 + OBCHR_UNITLIST_390 * CHR_SIZE);
    ApplyPalettes(gUnk_08319E88, 0x10 + OBPAL_UNITLIST_1, 3);

    TmFill(gBg0Tm, 0);
    TmFill(gBg1Tm, 0);
    TmFill(gBg2Tm, 0);

    InitIcons();
    ApplyIconPalettes(4);
    UnpackUiWindowFrameGraphics();
    Decompress(gUnk_083215B8, OBJ_VRAM0 + OBCHR_UNITLIST_240 * CHR_SIZE);
    ApplyPalette(gUnk_08321EE4, 0x10 + OBPAL_UNITLIST_9);

    func_fe6_08082CBC();
    TmApplyTsa(gBg1Tm, gUnk_083210A0, TILEREF(0, BGPAL_WINDOWFRAME));

    for (i = 0; i < 7 ; i++)
    {
        InitText(&gUnk_0200D5BC[i], 5);
        InitTextDb(&gUnk_0200D5F4[i][0], 7);
        InitText(&gUnk_0200D5F4[i][1], 7);
        InitText(&gUnk_0200D5F4[i][2], 5);
    }

    InitText(&gUnk_0200D69C, 4);
    InitText(&gUnk_0200D6A4, 20);
    InitText(&gUnk_0200D6AC, 4);

    func_fe6_080742D0(proc->sort_key);

    if (proc->unk_29 == 4)
    {
        func_fe6_08074558(proc, 0);
        proc->unk_29 = 0;
    }
    else
    {
        if (proc->mode == UNITLIST_MODE_PREPMENU)
            func_fe6_08074558(proc, 1);
    }

    proc->unk_3E = 0;
    proc->unk_2B = 0;

    ClearText(&gUnk_0200D69C);
    Text_SetCursor(&gUnk_0200D69C, 0);
    Text_SetColor(&gUnk_0200D69C, 0);
    Text_DrawString(&gUnk_0200D69C, (const char *)3386);
    PutText(&gUnk_0200D69C, gBg2Tm + TM_OFFSET(3, 5));

    for (i = 0; i < 20; i++)
    {
        gUnk_0200E6B4[i] = UINT8_MAX;
    }

    for (i = proc->unk_40 / 16; i < proc->unk_40 / 16 + 6 && i < gUnk_0200CD38; i++)
    {
        func_fe6_08076448(proc, i, gBg0Tm, proc->page, TRUE);
    }

    func_fe6_080763D8(proc->unk_2E, proc->page, TRUE);

    SetWinEnable(1, 0, 0);
    SetWin0Box(0x10, 0x38, 0xe0, 0x98);
    SetWin0Layers(1, 1, 1, 1, 1);
    SetWOutLayers(0, 1, 1, 1, 1);

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT | BG2_SYNC_BIT | BG3_SYNC_BIT);

    SetBgOffset(3, 0, 0);
    SetBgOffset(2, 0, 0);
    SetBgOffset(1, 0, 0);
    SetBgOffset(0, 0, (proc->unk_40 - 0x38) & 0xFF);

    gDispIo.bg0_ct.priority = 0;
    gDispIo.bg1_ct.priority = 2;
    gDispIo.bg2_ct.priority = 1;
    gDispIo.bg3_ct.priority = 3;

    Decompress(gUnk_08320EEC, gBg1Tm + TM_OFFSET(0, 20));
    ApplyPalette(gUnk_08319E88, BGPAL_UNITLIST_15);

    proc->sprites_proc = SpawnProc(ProcScr_UnitListScreenSprites, proc);

    if (proc->mode == UNITLIST_MODE_PREPMENU && proc->unk_3C == 0)
    {
        Decompress(gUnk_0831B0A8, (void *) VRAM + GetBgChrOffset(3));
        ApplyPalettes(gUnk_08320D98, BGPAL_UNITLIST_10, 4);
        proc->unk_48 = func_fe6_08082560(proc);
    }
    else
    {
        proc->unk_48 = StartMuralBackground(NULL, NULL, BGPAL_UNITLIST_10);
    }

    func_fe6_08070E70(NULL, -1);
}

void DrawEnemyUnitListWrapper(struct UnitListScreenProc * proc)
{
    proc->unk_29 = 0;
    proc->unk_31 = 1;
    proc->unk_2C = 0;
    proc->unk_2D = 0;
    proc->unk_30 = 0;

    if (proc->mode == UNITLIST_MODE_SOLOANIM)
        proc->page = UNITLIST_PAGE_SOLOANIM;
    else
        proc->page = UNITLIST_PAGE_1;

    proc->page_target = proc->page;
    proc->unk_40 = 0;
    proc->sort_key = 1;
    proc->unk_2A = 0;
    proc->target_sort_order = 1;
    proc->sort_order = 0;
    proc->unk_35 = 0;

    DrawEnemyUnitList(proc);
}

const struct ProcScr ProcScr_EnemyListScreen[] =
{
    PROC_19,
    PROC_CALL(LockGame),

    PROC_CALL(StartFastFadeToBlack),
    PROC_REPEAT(WhileFadeExists),

    PROC_CALL(LockBmDisplay),

    // PROC_CALL(func_fe6_08075338),
    PROC_CALL(DrawEnemyUnitListWrapper),

    PROC_CALL(StartFastFadeFromBlack),
    PROC_REPEAT(WhileFadeExists),

PROC_LABEL(1),
    PROC_REPEAT(func_fe6_08075570),

    PROC_CALL(StartFastFadeToBlack),
    PROC_REPEAT(WhileFadeExists),

    PROC_CALL(func_fe6_08075D34),

    PROC_CALL(UnlockBmDisplay),
    PROC_CALL(InitBmDisplay),
    PROC_CALL(EndAllMus),
    PROC_CALL(StartFastFadeFromBlack),
    PROC_REPEAT(WhileFadeExists),
    PROC_CALL(UnlockGame),
    PROC_GOTO(4),

PROC_LABEL(2),
    PROC_CALL(func_fe6_08075DF8),
    PROC_REPEAT(func_fe6_08075E94),
    PROC_REPEAT(func_fe6_08076060),
    PROC_GOTO(1),

PROC_LABEL(3),
    PROC_CALL(func_fe6_08074778),
    PROC_SLEEP(1),
    PROC_CALL(func_fe6_08074804),
    PROC_SLEEP(1),
    PROC_CALL(func_fe6_08074830),
    PROC_GOTO(1),

PROC_LABEL(4),
    PROC_END,
};

void StartEnemyListScreen(void)
{
    struct UnitListScreenProc * proc;

    proc = SpawnProc(ProcScr_EnemyListScreen, PROC_TREE_3);
    proc->mode = UNITLIST_MODE_FIELD;
}

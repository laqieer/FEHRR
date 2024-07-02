#include "trademenu.h"

#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "icon.h"
#include "sprite.h"
#include "face.h"
#include "faceNew.h"
#include "msg.h"
#include "item.h"
#include "unit.h"
#include "action.h"
#include "ui.h"
#include "helpbox.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"

enum
{
    // MAGIC CONSTANTS

    UNIT_PANEL_WIDTH = 6,

    ITEM_PANEL_WIDTH = 7,

    ITEM_PANEL_LEFT_X = 1,
    ITEM_PANEL_LEFT_Y = 8,

    ITEM_PANEL_RIGHT_X = 15,
    ITEM_PANEL_RIGHT_Y = 8,
};

enum
{
    TRADEMENU_UNIT_UNDEFINED = 0xFF,

    TRADEMENU_UNIT_LEFT  = 0,
    TRADEMENU_UNIT_RIGHT = 1,
};

enum
{
    L_TRADEMENU_UNSELECTED = 0,
    L_TRADEMENU_SELECTED   = 1,
    L_TRADEMENU_END        = 2,
};

struct TradeMenuProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Unit * units[2];

    /* 34 */ bool8 hasItem[2][ITEMSLOT_INV_COUNT + 1];

    /* 40 */ bool8 hasTraded;

    /* 41 */ u8 hoverColumn;
    /* 42 */ u8 hoverRow;

    /* 43 */ u8 selectedColumn;
    /* 44 */ u8 selectedRow;

    /* 45 */ bool8 extraCellEnabled;

    /* 46 */ u8 extraColumn;
    /* 47 */ u8 extraRow;

    /* 48 */ u8 tradeTutorialState;

    /* 49 */ u8 pad[0x4C - 0x49];
    /* 4C */ short timer;
};

void TradeMenu_InitItemText(struct TradeMenuProc * proc);
void TradeMenu_RefreshItemText(struct TradeMenuProc * proc);

void TradeMenu_InitItemDisplayNew(struct TradeMenuProc * proc)
{
    PutUiWindowFrame(1,  8, 14, 12, UI_WINDOW_REGULAR);
    PutUiWindowFrame(15, 8, 14, 12, UI_WINDOW_REGULAR);

    ResetTextFont();

    ClearIcons();
    ApplyIconPalettes(BGPAL_ICONS);

    TradeMenu_InitItemText(proc);
    TradeMenu_RefreshItemText(proc);

    // StartFace(0, GetUnitFid(proc->units[0]), 64,  -4, FACE_DISP_KIND(FACE_96x80_FLIPPED));
    StartFace(1, GetUnitFid(proc->units[1]), 176, -4, FACE_DISP_KIND(FACE_96x80));

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT);
}

extern const u16 Sprite_085C6234[];

#define OBCHR_TRADEMENU_380 0x380
#define OBPAL_TRADEMENU_A 0xA

void TradeMenu_InitUnitNameDisplayNew(struct TradeMenuProc * proc)
{
    char const * str;
    int x;

    // UnpackUiUnitNameFrameGraphics((u8 *) OBJ_VRAM0 + CHR_SIZE*OBCHR_TRADEMENU_240, 0x10 + OBPAL_TRADEMENU_8, 1);
    UnpackUiUnitNameFrameGraphics((u8 *) OBJ_VRAM0 + CHR_SIZE*OBCHR_TRADEMENU_380, 0x10 + OBPAL_TRADEMENU_A, 1);

    // StartSpriteRefresher(proc, 7, 0, -4, Sprite_085C6234, OAM2_PAL(OBPAL_TRADEMENU_8) + OAM2_CHR(OBCHR_TRADEMENU_240) + OAM2_LAYER(2));
    StartSpriteRefresher(proc, 7, 0, -4, Sprite_085C6234, OAM2_PAL(OBPAL_TRADEMENU_A) + OAM2_CHR(OBCHR_TRADEMENU_380) + OAM2_LAYER(2));

    str = DecodeMsg(proc->units[TRADEMENU_UNIT_LEFT]->pinfo->msg_name);
    x = (UNIT_PANEL_WIDTH*8 - GetStringTextLen(str))/2;
    PutDrawText(NULL, gBg0Tm + TM_OFFSET(0, 0), TEXT_COLOR_SYSTEM_WHITE, x, UNIT_PANEL_WIDTH, str);

    str = DecodeMsg(proc->units[TRADEMENU_UNIT_RIGHT]->pinfo->msg_name);
    x = (UNIT_PANEL_WIDTH*8 - GetStringTextLen(str))/2;
    PutDrawText(NULL, gBg0Tm + TM_OFFSET(24, 0), TEXT_COLOR_SYSTEM_WHITE, x, UNIT_PANEL_WIDTH, str);

    EnableBgSync(BG0_SYNC_BIT);
}

void TradeMenu_InitItemDisplay(struct TradeMenuProc * proc);
void TradeMenu_InitUnitNameDisplay(struct TradeMenuProc * proc);
bool TradeMenu_LoadForcedInitialHover(struct TradeMenuProc * proc);
void TradeMenu_OnInitUnselected(struct TradeMenuProc * proc);
void TradeMenu_OnLoopUnselected(struct TradeMenuProc * proc);
void TradeMenu_OnInitSelected(struct TradeMenuProc * proc);
void TradeMenu_OnLoopSelected(struct TradeMenuProc * proc);
void TradeMenu_OnEndSelected(struct TradeMenuProc * proc);
void TradeMenu_ClearDisplay(struct TradeMenuProc * proc);

extern const struct ProcScr ProcScr_TradeMenu_HighlightUpdater[];

extern const struct ProcScr ProcScr_TradeMenu[];

const struct ProcScr ProcScr_TradeMenuNew[] =
{
    PROC_CALL(LockGame),
    PROC_SLEEP(0),

    PROC_WHILE_EXISTS(ProcScr_CamMove),

    // PROC_CALL(TradeMenu_InitItemDisplay),
    PROC_CALL(TradeMenu_InitItemDisplayNew),
    // PROC_CALL(TradeMenu_InitUnitNameDisplay),
    PROC_CALL(TradeMenu_InitUnitNameDisplayNew),

    PROC_START_CHILD(ProcScr_TradeMenu_HighlightUpdater),

    PROC_CALL_2(TradeMenu_LoadForcedInitialHover),

PROC_LABEL(L_TRADEMENU_UNSELECTED),
    PROC_CALL(TradeMenu_OnInitUnselected),
    PROC_REPEAT(TradeMenu_OnLoopUnselected),

PROC_LABEL(L_TRADEMENU_SELECTED),
    PROC_CALL(TradeMenu_OnInitSelected),
    PROC_REPEAT(TradeMenu_OnLoopSelected),

    PROC_CALL(TradeMenu_OnEndSelected),

    PROC_GOTO(L_TRADEMENU_UNSELECTED),

PROC_LABEL(L_TRADEMENU_END),
    PROC_CALL(TradeMenu_ClearDisplay),
    PROC_CALL(ClearUi),

    PROC_CALL(UnlockGame),

    PROC_END
};

ProcPtr StartTradeMenuNew(struct Unit * unit_a, struct Unit * unit_b, int unused)
{
    // struct TradeMenuProc * proc = SpawnProc(ProcScr_TradeMenu, PROC_TREE_3);
    struct TradeMenuProc * proc = SpawnProc(ProcScr_TradeMenuNew, PROC_TREE_3);

    proc->units[0] = unit_a;
    proc->units[1] = unit_b;

    proc->hasTraded = FALSE;

    proc->hoverColumn = TRADEMENU_UNIT_LEFT;
    proc->hoverRow = 0;

    if (GetUnitItemCount(unit_a) == 0)
        proc->hoverColumn = TRADEMENU_UNIT_RIGHT;

    return proc;
}

ProcPtr StartTradeMenuOld(struct Unit * unit_a, struct Unit * unit_b, int unused)
{
    return StartTradeMenuNew(unit_a, unit_b, unused);
}

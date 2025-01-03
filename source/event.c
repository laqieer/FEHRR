
#include "prelude.h"
#include "event.h"
#include "eventscript.h"

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "armfunc.h"
#include "proc.h"
#include "icon.h"
#include "sprite.h"
#include "talk.h"
#include "gamecontroller.h"
#include "msg.h"
#include "msgNew.h"
#include "util.h"
#include "bm.h"
#include "bmNew.h"
#include "item.h"
#include "unit.h"
#include "unitNew.h"
#include "map.h"
#include "mapwork.h"
#include "bmfx.h"
#include "faction.h"
#include "gold.h"
#include "unitsprite.h"
#include "battle.h"
#include "trap.h"
#include "bmio.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "subtitlehelp.h"
#include "ai_decide.h"
#include "ai_perform.h"
#include "ai_utility.h"
#include "ui.h"
#include "mu.h"
#include "eventinfo.h"
#include "hero.h"

#include "constants/videoalloc_global.h"
#include "constants/videoalloc_wm.h"
#include "constants/videoalloc_banim.h"
#include "constants/terrains.h"
#include "constants/songs.h"
#include "constants/chapters.h"
#include "constants/iids.h"
#include "constants/jids.h"
#include "chapterNew.h"

#include "background.h"
#include "backgrounds.h"

#include "utilNew.h"

#include "log.h"

struct PopupProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct PopupInfo const * info;
    /* 30 */ int clock;

    /* 34 */ i8 xParam;
    /* 35 */ i8 yParam;

    /* 36 */ u8 window_kind;

    /* 37 */ u8 frameX;
    /* 38 */ u8 frameY;

    /* 39 */ u8 frameWidth;
    /* 3A */ u8 frameHeight;

    /* 3B */ u8 color;

    /* 3C */ u8 pad_3C[0x3E - 0x3C];

    /* 3E */ u16 icon;
    /* 40 */ u16 iconChr;
    /* 42 */ u8 iconPalid;
    /* 43 */ u8 pad_43;
    /* 44 */ u8 iconX;
    /* 45 */ u8 pad_45;

    /* 46 */ u16 widthPx;

    /* 48 */ u16 songPlayed;
};

struct EventCmdInfo
{
    int (* func)(struct EventProc * proc);
    int size;
};

enum
{
    EVENT_CMDRET_CONTINUE,
    EVENT_CMDRET_JUMPED,
    EVENT_CMDRET_YIELD,
    EVENT_CMDRET_REPEAT,
};

void LoadUnitWrapper(struct UnitInfo const * info, ProcPtr parent);
void FakeLoadUnit(struct UnitInfo const * info, struct Unit * unit);

int PreparePopup(struct PopupProc * proc);
void PutPopup(struct PopupInfo const * info, struct Text text);

void Popup_OnInit(struct PopupProc * proc);
void Popup_Prepare(struct PopupProc * proc);
void Popup_FadeBgmOut(struct PopupProc * proc);
void Popup_PlaySe(struct PopupProc * proc);
void Popup_FadeBgmIn(struct PopupProc * proc);
void Popup_Display(struct PopupProc * proc);
void Popup_WaitForEnd(struct PopupProc * proc);
void Popup_Clear(struct PopupProc * proc);

void PopupIconSprite_OnIdle(struct GenericProc * proc);

void Event_FadeOutOfBackgroundTalk(struct EventProc * proc);
void Event_FadeOutOfSkip(struct EventProc * proc);
void FadeFromBg_FadeToBlack(struct GenericProc * proc);
void FadeFromBg_FadeFromBlack(struct GenericProc * proc);
void FadeFromBg_ClearScreen(struct GenericProc * proc);
void FadeFromSkip_Start(struct GenericProc * proc);
ProcPtr StartEventInternal(u32 const * script, ProcPtr parent);
void Event_OnInit(struct EventProc * proc);
void Event_OnEnd(struct EventProc * proc);
void Event_ResetText(struct EventProc * proc);
void Event_RestartFromQueued(struct EventProc * proc);
void Event_MaybeEndMapMain(struct EventProc * proc);
void Event_ClearTextOnSkip(struct EventProc * proc);
bool Event_SkipAllowed(struct EventProc * proc);
void Event_DarkenThenFunc(void (* func)(struct EventProc * proc), struct EventProc * eproc);
void Event_MainLoop(struct EventProc * proc);
void Event_WaitForFaceEnd(struct EventProc * proc);
bool DisplayMovement(struct EventProc * proc, struct Unit * unit, u8 const * movescr);
void WaitForMu_0800F094(struct GenericProc * proc);
void WaitForMu_OnLoop(struct GenericProc * proc);
void FlashCursor_OnInit(struct GenericProc * proc);
void FlashCursor_OnLoop(struct GenericProc * proc);
void EventCursor_OnLoop(struct GenericProc * proc);
void DoChangeWeather(struct GenericProc * proc);
void EventClearTalkDisplayed(struct EventProc * proc);
void Event_SetExitMap(struct EventProc * proc);
void Event_SetEnterMap(struct EventProc * proc);

int EvtCmd_Sleep(struct EventProc * proc);
int EvtCmd_Background(struct EventProc * proc);
int EvtCmd_BackgroundMore(struct EventProc * proc);
int EvtCmd_ClearTalk(struct EventProc * proc);
int EvtCmd_ClearSkip(struct EventProc * proc);
int EvtCmd_Talk(struct EventProc * proc);
int EvtCmd_TalkMore(struct EventProc * proc);
int EvtCmd_TalkAuto(struct EventProc * proc);
int EvtCmd_TalkContinue(struct EventProc * proc);
int EvtCmd_CameraPosition(struct EventProc * proc);
int EvtCmd_CameraPid(struct EventProc * proc);
int EvtCmd_MovePosition(struct EventProc * proc);
int EvtCmd_MovePid(struct EventProc * proc);
int EvtCmd_MovePidScript(struct EventProc * proc);
int EvtCmd_MovePositionScript(struct EventProc * proc);
int EvtCmd_MovePidNextTo(struct EventProc * proc);
int EvtCmd_LoadUnits(struct EventProc * proc);
int EvtCmd_LoadUnitsParty(struct EventProc * proc);
int EvtCmd_WaitForMovement(struct EventProc * proc);
int EvtCmd_UnitCameraOn(struct EventProc * proc);
int EvtCmd_UnitCameraOff(struct EventProc * proc);
int EvtCmd_Func(struct EventProc * proc);
int EvtCmd_FuncUntil(struct EventProc * proc);
int EvtCmd_FuncWhile(struct EventProc * proc);
int EvtCmd_Stop(struct EventProc * proc);
int EvtCmd_Label(struct EventProc * proc);
int EvtCmd_Goto(struct EventProc * proc);
int EvtCmd_GotoIfnAlive(struct EventProc * proc);
int EvtCmd_GotoIfnInTeam(struct EventProc * proc);
int EvtCmd_GotoIfyFunc(struct EventProc * proc);
int EvtCmd_GotoIfnFunc(struct EventProc * proc);
int EvtCmd_GotoIfySkip(struct EventProc * proc);
int EvtCmd_GotoIfyFlag(struct EventProc * proc);
int EvtCmd_GotoIfnFlag(struct EventProc * proc);
int EvtCmd_GotoIfyActive(struct EventProc * proc);
int EvtCmd_Jump(struct EventProc * proc);
int EvtCmd_GiveItem(struct EventProc * proc);
int EvtCmd_GiveItemTo(struct EventProc * proc);
int EvtCmd_MapChange(struct EventProc * proc);
int EvtCmd_MapChangePosition(struct EventProc * proc);
int EvtCmd_SetFaction(struct EventProc * proc);
int EvtCmd_FlashCursorPosition(struct EventProc * proc);
int EvtCmd_FlashCursorPid(struct EventProc * proc);
int EvtCmd_PutCursor(struct EventProc * proc);
int EvtCmd_ClearCursors(struct EventProc * proc);
int EvtCmd_RemovePid(struct EventProc * proc);
int EvtCmd_RemovePidDisplayed(struct EventProc * proc);
int EvtCmd_SetAiPid(struct EventProc * proc);
int EvtCmd_SetAiPosition(struct EventProc * proc);
int EvtCmd_SetFlag(struct EventProc * proc);
int EvtCmd_ClearFlag(struct EventProc * proc);
int EvtCmd_PlayBgm(struct EventProc * proc);
int EvtCmd_OverrideBgm(struct EventProc * proc);
int EvtCmd_RestoreBgm(struct EventProc * proc);
int EvtCmd_FadeBgmOut(struct EventProc * proc);
int EvtCmd_LowerBgmVolume(struct EventProc * proc);
int EvtCmd_RestoreBgmVolume(struct EventProc * proc);
int EvtCmd_PlaySe(struct EventProc * proc);
int EvtCmd_NextChapter(struct EventProc * proc);
int EvtCmd_EndGame(struct EventProc * proc);
int EvtCmd_SetMap(struct EventProc * proc);
int EvtCmd_NoSkip(struct EventProc * proc);
int EvtCmd_NoSkipNoTextSkip(struct EventProc * proc);
int EvtCmd_YesSkip(struct EventProc * proc);
int EvtCmd_FadeToBlack(struct EventProc * proc);
int EvtCmd_FadeFromBlack(struct EventProc * proc);
int EvtCmd_FadeToWhite(struct EventProc * proc);
int EvtCmd_FadeFromWhite(struct EventProc * proc);
int EvtCmd_ExitMap(struct EventProc * proc);
int EvtCmd_EnterMap(struct EventProc * proc);
int EvtCmd_GiveMoney(struct EventProc * proc);
int EvtCmd_FightScript(struct EventProc * proc);
int EvtCmd_DisableAutoClear(struct EventProc * proc);
int EvtCmd_FuncOnSkip(struct EventProc * proc);
int EvtCmd_SetWeather(struct EventProc * proc);
int EvtCmd_WmStart(struct EventProc * proc);
int EvtCmd_WmEnd(struct EventProc * proc);
int EvtCmd_WmZoomTo(struct EventProc * proc);
int EvtCmd_WmZoomBack(struct EventProc * proc);
int EvtCmd_WmPutFace(struct EventProc * proc);
int EvtCmd_WmRemoveFace(struct EventProc * proc);
int EvtCmd_WmMoveFace(struct EventProc * proc);
int EvtCmd_WmNop54(struct EventProc * proc);
int EvtCmd_WmNop55(struct EventProc * proc);
int EvtCmd_WmTalk(struct EventProc * proc);
int EvtCmd_WmTalkBoxBottom(struct EventProc * proc);
int EvtCmd_WmTalkBoxTop(struct EventProc * proc);
int EvtCmd_WmTalkBoxRemove(struct EventProc * proc);
int EvtCmd_WmArrow(struct EventProc * proc);
int EvtCmd_WmPutHighlight(struct EventProc * proc);
int EvtCmd_WmRemoveHighlight(struct EventProc * proc);
int EvtCmd_WmRemoveBothHighlights(struct EventProc * proc);
int EvtCmd_WmPutDot(struct EventProc * proc);
int EvtCmd_WmRemoveDot(struct EventProc * proc);
int EvtCmd_WmPutFlag(struct EventProc * proc);
int EvtCmd_WmRemoveFlag(struct EventProc * proc);
int EvtCmd_WmPutMapText(struct EventProc * proc);
int EvtCmd_WmRemoveMapText(struct EventProc * proc);
int EvtCmd_End(struct EventProc * proc);
int EvtCmd_Kill(struct EventProc * proc);

void EventTalkWait(struct EventProc * proc);
void MoveUnitFromInfo(struct UnitInfo const * info, struct Unit * unit, ProcPtr parent);

extern int sUnk_085C3FD8;
extern int sUnk_030000F0;

extern struct Unit * sPopupUnit;
extern u16 sPopupItem;
extern int sPopupNumber;

extern u32 const * gEventScriptQueue[]; // COMMON
extern u8 gEventScriptQueueIt; // COMMON

extern struct ProcScr const ProcScr_Popup[];
extern struct ProcScr const ProcScr_PopupIconSprite[];
extern struct ProcScr const ProcScr_SceneReturnFromBackgroundTalk[];
extern struct ProcScr const ProcScr_SceneEndFade[];
extern struct ProcScr const ProcScr_Event[];
extern struct ProcScr const ProcScr_Event_Unused_085C4104[];
extern struct ProcScr const ProcScr_DarkenThenFunc[];

extern struct EventCmdInfo const sEventCmdInfoTable[];

extern struct ProcScr const ProcScr_EventWaitForMu[];
extern struct ProcScr const ProcScr_FlashCursor[];
extern struct ProcScr const ProcScr_EventCursor[];
extern struct ProcScr const ProcScr_Unused_085C45B8[];
extern struct ProcScr const ProcScr_WeatherChangeFade[];

extern struct FaceVramEnt const gWmEventFaceConfig[];

extern struct ProcScr const ProcScr_WmEventShowFace[];
extern struct ProcScr const ProcScr_WmEventHideFace[];
extern struct ProcScr const ProcScr_WmEventMoveFace[];

extern struct FaceVramEnt const gFightEventFaceConfig[];

extern EventScr const EventScr_AutoTalk[];
extern EventScr const EventScr_085C46DC[];

extern struct PopupInfo const Popup_085C46FC[];
extern struct PopupInfo const Popup_085C473C[];
extern struct PopupInfo const Popup_085C477C[];
extern struct PopupInfo const Popup_085C47A4[];
extern struct PopupInfo const Popup_085C47DC[];
extern struct PopupInfo const Popup_085C4814[];
extern struct PopupInfo const Popup_085C4854[];
extern struct PopupInfo const Popup_085C4894[];
extern struct PopupInfo const Popup_085C48D4[];
extern struct PopupInfo const Popup_085C4914[];

extern struct ProcScr const ProcScr_GiveItem[];

extern EventScr const EventScr_Item[];
extern EventScr const EventScr_ItemTo[];
extern EventScr const EventScr_Money[];
extern EventScr const EventScr_MapChange[];
extern EventScr const EventScr_ItemChest[];
extern EventScr const EventScr_MoneyChest[];

#define EVTCMD_GET_X_RAW(script) (((script) & 0x0000FFFF))
#define EVTCMD_GET_Y_RAW(script) (((script) & 0xFFFF0000) >> 16)

#define EVTCMD_GET_X(script) (EVTCMD_GET_X_RAW(script) & 0x8000 ? -1 : EVTCMD_GET_X_RAW(script))
#define EVTCMD_GET_Y(script) (EVTCMD_GET_Y_RAW(script) & 0x8000 ? -1 : EVTCMD_GET_Y_RAW(script))

void DisplayBackgroundNoClearNew(int background)
{
    Assert(background >= 0 && background <= BACKGROUND_LAST);

    SetBgOffset(0, 0, 0);
    SetBgOffset(1, 0, 0);
    SetBgOffset(2, 0, 0);
    SetBgOffset(3, 0, 0);

    REG_DISPCNT &= ~DISPCNT_BG2_ENABLE;
    REG_DISPCNT &= ~DISPCNT_BG3_ENABLE;

    if (background >= BACKGROUND_NEW)
    {
        background -= BACKGROUND_NEW;
        Decompress(newBackgrounds[background].img1, (u8 *) VRAM + GetBgChrOffset(3));
        Decompress(newBackgrounds[background].img2, (u8 *) VRAM + BgChrOffsetImg2);
        FixTiles256((vu16 *) (VRAM + GetBgChrOffset(3)), 8, BackgroundWidth * 8, BackgroundHeightImg1 * 8);
        FixTiles256((vu16 *) (VRAM + BgChrOffsetImg2), 8, BackgroundWidth * 8, BackgroundHeightImg2 * 8);
        ClearTilemap256(gBg3Tm, BackgroundWidth - 1);
        ClearTilemap256(gBg2Tm, BgChrOffsetImg2 / TILE_SIZE_8BPP + BackgroundWidth - 1);
        PutAppliedBitmap256(gBg3Tm, 0, BackgroundWidth, BackgroundHeightImg1);
        PutAppliedBitmap256(gBg2Tm, BgChrOffsetImg2 / TILE_SIZE_8BPP, BackgroundWidth, BackgroundHeightImg2);
        ApplyPalettes(newBackgrounds[background].pal, 8, 8);
        SetBgBpp(3, 8);
        SetBgBpp(2, 8);
        SetBgOffset(2, 0, BackgroundHeightImg1 * 8);
    }
    else
    {
        Decompress(gBackgroundTable[background].img, (u8 *) VRAM + GetBgChrOffset(3));
        TmApplyTsa(gBg3Tm, gBackgroundTable[background].tsa, TILEREF(0, 8));
        ApplyPalettes(gBackgroundTable[background].pal, 8, 4);
        ClearTilemap256(gBg2Tm, 0);
        SetBgBpp(3, 4);
        SetBgBpp(2, 4);
    }

    EnableBgSync(BG2_SYNC_BIT);
    EnableBgSync(BG3_SYNC_BIT);
    gPal[0] = 0;
}

void DisplayBackgroundNoClearOld(int background)
{
    DisplayBackgroundNoClearNew(background);
}

void DisplayBackgroundNew(int background)
{
    ClearTalk();

    DisplayBackgroundNoClearNew(background);
}

void DisplayBackgroundOld(int background)
{
    DisplayBackgroundNew(background);
}

void LoadUnitWrapperNew(struct UnitInfo const * info, ProcPtr parent)
{
    struct Unit * unit;

    Infof("Loading unit by info at 0x%x: %d %s, job: %d %s, LV: %d, position: (%d, %d) -> (%d, %d)", info, info->pid, GetHeroName(info->pid), info->jid, GetMsg(GetJInfo(info->jid)->msg_name), info->level, info->x_load, info->y_load, info->x_move, info->y_move);

    if (UnitInfoRequiresNoMovement(info))
    {
        unit = GetUnit(gMapUnit[info->y_load][info->x_load]);
        Infof("Unit already exists at 0x%x: %d %s, job: %d %s, LV: %d, position: (%d, %d)", unit, unit->pinfo->id, GetHeroName(unit->pinfo->id), unit->jinfo->id, GetMsg(GetJInfo(unit->jinfo->id)->msg_name), unit->level, unit->x, unit->y);
        return;
    }

    if (info->faction_id == FACTION_ID_BLUE)
        // unit = GetUnitByPid(info->pid);
        unit = GetBlueUnitByPid(info->pid);
    else
        unit = NULL;

    if(unit)
        Infof("Unit already exists at 0x%x: %d %s, job: %d %s, LV: %d, position: (%d, %d)", unit, unit->pinfo->id, GetHeroName(unit->pinfo->id), unit->jinfo->id, GetMsg(GetJInfo(unit->jinfo->id)->msg_name), unit->level, unit->x, unit->y);

    if (!unit)
        unit = CreateUnit(info);

    if ((gPlaySt.flags & PLAY_FLAG_HARD) && info->faction_id == FACTION_ID_RED)
        UnitApplyBonusLevels(unit, GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->hard_bonus_levels);

    MoveUnitFromInfo(info, unit, parent);
    RefreshEntityMaps();
}

void LoadUnitWrapperOld(struct UnitInfo const * info, ProcPtr parent)
{
    LoadUnitWrapperNew(info, parent);
}

void EventLoadUnitsAsPartyNew(struct EventProc * proc)
{
    struct UnitInfo const * info = proc->unit_info;

    int id;
    struct Unit * unit;

    int blueCount = 0;

    FOR_UNITS_FACTION(FACTION_BLUE, unit,
    {
        if (unit->flags & UNIT_FLAG_DEAD)
            continue;

        blueCount++;
    })

    if (blueCount > 0 && GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->has_prep)
        return;

    if (GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->has_prep)
    {
        FOR_UNITS_FACTION(FACTION_BLUE, unit,
        {
            if (unit->flags & UNIT_FLAG_DEAD)
                continue;

            unit->flags |= UNIT_FLAG_HIDDEN;
        })
    }
    else
    {
        FOR_UNITS_FACTION(FACTION_BLUE, unit,
        {
            if (unit->flags & UNIT_FLAG_DEAD)
                continue;

            unit->flags |= UNIT_FLAG_HIDDEN;
            unit->flags &= ~UNIT_FLAG_NOT_DEPLOYED;
        })
    }

    id = 0;

    while (info->pid != 0)
    {
        id = GetNextAvailableBlueUnitId(id);

        if (id == 0)
            break;

        unit = GetUnit(id);
        id++;

        FakeLoadUnit(info, unit);

        info++;
    }

    FOR_UNITS_FACTION(FACTION_BLUE, unit,
    {
        if (unit->flags & UNIT_FLAG_DEAD)
            continue;

        if (!(unit->flags & UNIT_FLAG_HIDDEN))
            continue;

        unit->flags |= UNIT_FLAG_NOT_DEPLOYED;
    })

    RefreshEntityMaps();
    RefreshUnitSprites();
}

void EventLoadUnitsAsPartyOld(struct EventProc * proc)
{
    EventLoadUnitsAsPartyNew(proc);
}

int EvtCmd_SetMapNew(struct EventProc * proc)
{
    // script[0]: chapter
    // script[1]: camera x
    // script[2]: camera y

    SetChapterInPlaySt(&gPlayStNew, proc->script[0]);

    func_fe6_08029084();
    CleanupUnitsBeforeChapter();

    gBmSt.camera.x = GetCameraCenteredX(proc->script[1] * 16);
    gBmSt.camera.y = GetCameraCenteredY(proc->script[2] * 16);

    RefreshEntityMaps();
    RenderMap();
    RefreshUnitSprites();

    return EVENT_CMDRET_CONTINUE;
}

int EvtCmd_SetMapOld(struct EventProc * proc)
{
    return EvtCmd_SetMapNew(proc);
}

int EvtCmd_TalkNew(struct EventProc * proc)
{
    // script[0]: msgid

    proc->flags &= ~EVENT_FLAG_TEXTSKIPPED;

    if (proc->flags & EVENT_FLAG_SKIPPED)
        return EVENT_CMDRET_CONTINUE;

    int msg = proc->script[0];
    InitTalk(0x80, GetMsgLines(msg), TRUE);
    StartTalkMsg(1, 1, msg);

    if (proc->flags & EVENT_FLAG_DISABLETEXTSKIP)
        SetTalkFlag(TALK_FLAG_NOSKIP);

    proc->on_idle = EventTalkWait;

    return EVENT_CMDRET_YIELD;
}

int EvtCmd_TalkOld(struct EventProc * proc)
{
    return EvtCmd_TalkNew(proc);
}

int EvtCmd_TalkAutoNew(struct EventProc * proc)
{
    if (proc->flags & EVENT_FLAG_SKIPPED)
        return EVENT_CMDRET_YIELD;

    int msg = proc->msg_param;
    InitTalk(0x80, GetMsgLines(msg), TRUE);
    StartTalkMsg(1, 1, msg);

    if (proc->flags & EVENT_FLAG_DISABLETEXTSKIP)
        SetTalkFlag(TALK_FLAG_NOSKIP);

    proc->on_idle = EventTalkWait;

    return EVENT_CMDRET_YIELD;
}

int EvtCmd_TalkAutoOld(struct EventProc * proc)
{
    return EvtCmd_TalkAutoNew(proc);
}

int EvtCmd_GiveMoneyNew(struct EventProc * proc)
{
    int money, given;

    given = proc->script[0];

    if (given == 0)
        given = proc->money_param;

    int chapter = GetChapterInPlaySt(&gPlayStNew);

    if (UNIT_FACTION(gActiveUnit) == FACTION_BLUE || IsChapterNew(chapter))
    {
        money = GetGold();
        money += given;
        SetGold(money);
    }

    if (IsChapterNew(chapter)) {
        SetPopupNumber(given);
        StartPopup(Popup_085C47A4, 0x60, UI_WINDOW_REGULAR, proc);
    } else {
        StartPopup_080120D0(given, proc);
    }

    return EVENT_CMDRET_YIELD;
}

int EvtCmd_GiveMoneyOld(struct EventProc * proc)
{
    return EvtCmd_GiveMoneyNew(proc);
}

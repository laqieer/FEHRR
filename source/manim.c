#include "prelude.h"
#include "jobs.h"

#include "manim.h"

#include "random.h"
#include "armfunc.h"
#include "hardware.h"
#include "move.h"
#include "oam.h"
#include "armfunc.h"
#include "sprite.h"
#include "sound.h"
#include "text.h"
#include "face.h"
#include "faceNew.h"
#include "event.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "unit.h"
#include "debugmenu.h"
#include "faction.h"
#include "unitsprite.h"
#include "battle.h"
#include "bmio.h"
#include "action.h"
#include "ui.h"
#include "mu.h"
#include "eventinfo.h"
#include "systemlabels.h"
#include "mapui.h"
#include "banim.h"

#include "constants/iids.h"
#include "constants/pids.h"
#include "constants/jids.h"
#include "constants/videoalloc_global.h"
#include "constants/songs.h"
#include "constants/terrains.h"

const u8 jobCountInManimDebugMenu = JID_COUNT;

enum {
    BGCHR_LVUP_NEW = 0,
};

struct ManimLevelUpProc
{
    /* 00 */ PROC_HEADER;
    /* 29 */ STRUCT_PAD(0x29, 0x2E);
    /* 2E */ i16 actor_id;
    /* 30 */ u8 next_stat_num;
    /* 31 */ u8 clock;
    /* 32 */ i16 y_scroll_offset;
};

struct ManimLevelUpLabelInfo
{
    /* 00 */ u8 x;
    /* 01 */ u8 y;
    /* 02 */ STRUCT_PAD(0x02, 0x04);
    /* 04 */ char const * const * labels[2];
};

extern const struct ManimLevelUpLabelInfo gManimLevelUpLabelInfoList[];

void StartManimLevelUpStatGainLabels(int chr, int pal, int sprite_layer, ProcPtr parent);
void EndManimLevelUpStatGainLabels(void);
void PutManimLevelUpStat(int actor_id, int x, int y, int stat_num, bool after_gain);

void ManimLevelUp_InitMainScreen(struct ManimLevelUpProc * proc);
void ManimLevelUp_ScrollIn(struct ManimLevelUpProc * proc);
void ManimLevelUp_ScrollOut(struct ManimLevelUpProc * proc);
void ManimLevelUp_PutStatGainLabels(struct ManimLevelUpProc * proc);
void ManimLevelUp_DimBgm(struct ManimLevelUpProc * proc);
void ManimLevelUp_StartLevelUpText(struct ManimLevelUpProc * proc);
void ManimLevelUp_EndLevelUpText(struct ManimLevelUpProc * proc);
void ManimLevelUp_RestoreBgm(struct ManimLevelUpProc * proc);
void ManimLevelUp_Clear(struct ManimLevelUpProc * proc);

void PutManimLevelUpFrameNew(int actor_id, int x, int y)
{
    int i;

    TmFill(gBg1Tm, 0);

    // Decompress(Img_LevelUpFrame, ((void *) VRAM) + GetBgChrOffset(1) + BGCHR_MANIM_200 * CHR_SIZE);
    Decompress(Img_LevelUpFrame, ((void *) VRAM) + GetBgChrOffset(1) + BGCHR_LVUP_NEW * CHR_SIZE);
    Decompress(Tm_LevelUpFrame, gBuf);
    // PutTmLinear((u16 const *) gBuf, gBg1Tm, 0x20 * 0x1C, TILEREF(BGCHR_MANIM_200, BGPAL_MANIM_INFO));
    PutTmLinear((u16 const *) gBuf, gBg1Tm, 0x20 * 0x1C, TILEREF(BGCHR_LVUP_NEW, BGPAL_MANIM_INFO));
    ApplyPalette(Pal_LevelUpFrame, BGPAL_MANIM_INFO);

    PutString(
        gBg0Tm + TM_OFFSET(x + 1, y),
        TEXT_COLOR_SYSTEM_WHITE,
        DecodeMsg(gManimSt.actor[actor_id].unit->jinfo->msg_name));

    for (i = 0; gManimLevelUpLabelInfoList[i].x != UINT8_MAX; i++)
    {
        PutStringCentered(
            gBg0Tm + TM_OFFSET(x + gManimLevelUpLabelInfoList[i].x, y + gManimLevelUpLabelInfoList[i].y),
            TEXT_COLOR_SYSTEM_GOLD, 3,
            gManimLevelUpLabelInfoList[i].labels[UnitKnowsMagic(gManimSt.actor[actor_id].unit) == TRUE][GetLang()]);
    }

    EnableBgSync(BG0_SYNC_BIT + BG1_SYNC_BIT);
}

void ManimLevelUp_InitMainScreenNew(struct ManimLevelUpProc * proc)
{
    int i;

    ResetTextFont();
    TmFill(gBg0Tm, 0);
    PutManimLevelUpFrameNew(proc->actor_id, 1, 1);

    for (i = 0; i < 9; i++)
    {
        PutManimLevelUpStat(proc->actor_id, 1, 1, i, FALSE);
    }

    EnableBgSync(BG0_SYNC_BIT);

    proc->next_stat_num = 0;
    proc->clock = 0;
    proc->y_scroll_offset = -144;

    gDispIo.bg0_ct.priority = 0;
    gDispIo.bg1_ct.priority = 1;
    gDispIo.bg2_ct.priority = 1;
    gDispIo.bg3_ct.priority = 2;

    SetBlendNone();
    SetWinEnable(0, 0, 0);

    SetBgOffset(0, 0, proc->y_scroll_offset);
    SetBgOffset(1, 0, proc->y_scroll_offset);

    int fid = gManimSt.actor[proc->actor_id].unit->pinfo->fid;
    StartFace(0, fid, 184, DISPLAY_HEIGHT - (IsNewFace(fid) ? NEW_FULL_FACE_HEIGHT : OLD_FULL_FACE_HEIGHT), FACE_DISP_KIND(FACE_96x80) | FACE_DISP_HLAYER(1));
    gFaces[0]->y_disp = -proc->y_scroll_offset;

    // TODO: constants
    // StartManimLevelUpStatGainLabels(BGCHR_MANIM_200, 3, 1, proc);
    StartManimLevelUpStatGainLabels(BGCHR_LVUP_NEW, 3, 1, proc);
}

void ManimLevelUp_ScrollInNew(struct ManimLevelUpProc * proc)
{
    proc->y_scroll_offset += 8;

    SetBgOffset(0, 0, proc->y_scroll_offset);
    SetBgOffset(1, 0, proc->y_scroll_offset);

    // NOTE: this is inconsistent with math in ManimLevelUp_InitMainScreen
    gFaces[0]->y_disp = 32 - proc->y_scroll_offset;

    if (IsNewFace(((struct FaceProcNew *)gFaces[0])->fid))
        gFaces[0]->y_disp -= NEW_FULL_FACE_HEIGHT - OLD_FULL_FACE_HEIGHT;

    if (proc->y_scroll_offset >= -48)
        Proc_Break(proc);
}

void ManimLevelUp_ScrollOutNew(struct ManimLevelUpProc * proc)
{
    proc->y_scroll_offset -= 8;

    SetBgOffset(0, 0, proc->y_scroll_offset);
    SetBgOffset(1, 0, proc->y_scroll_offset);

    // NOTE: this is inconsistent with math in ManimLevelUp_InitMainScreen
    gFaces[0]->y_disp = 32 - proc->y_scroll_offset;

    if (IsNewFace(((struct FaceProcNew *)gFaces[0])->fid))
        gFaces[0]->y_disp -= NEW_FULL_FACE_HEIGHT - OLD_FULL_FACE_HEIGHT;

    if (proc->y_scroll_offset <= -144)
        Proc_Break(proc);
}

struct ProcScr CONST_DATA ProcScr_ManimLevelUpNew[] =
{
    PROC_ONEND(ManimLevelUp_Clear),
    PROC_SLEEP(1),
    PROC_CALL(InitManimLevelUpWindow),
    PROC_CALL(ManimLevelUp_DimBgm),
    PROC_SLEEP(0),
    PROC_CALL(ManimLevelUp_StartLevelUpText),
    PROC_SLEEP(70),
    PROC_CALL(ManimLevelUp_EndLevelUpText),
    PROC_SLEEP(1),
    PROC_CALL(ManimLevelUp_RestoreBgm),
    PROC_SLEEP(0),
    PROC_CALL(ManimLevelUp_InitMainScreenNew),
    PROC_SLEEP(0),
    PROC_REPEAT(ManimLevelUp_ScrollInNew),
    PROC_SLEEP(30),
    PROC_REPEAT(ManimLevelUp_PutStatGainLabels),
    PROC_SLEEP(60),
    PROC_CALL(EndManimLevelUpStatGainLabels),
    PROC_SLEEP(1),
    PROC_REPEAT(ManimLevelUp_ScrollOutNew),
    PROC_CALL(ClearManimLevelUpWindow),
    PROC_CALL(ClearTalk),
    PROC_SLEEP(4),
    PROC_END,
};

void StartManimLevelUpNew(int actor_id, ProcPtr parent)
{
    struct ManimLevelUpProc * proc;

    proc = SpawnProcLocking(ProcScr_ManimLevelUpNew, parent);
    proc->actor_id = actor_id;
}

void StartManimLevelUpOld(int actor_id, ProcPtr parent)
{
    StartManimLevelUpNew(actor_id, parent);
}

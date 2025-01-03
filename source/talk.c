#include "talk.h"

#include <string.h>

#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "proc.h"
#include "debugtext.h"
#include "msg.h"
#include "msgNew.h"
#include "text.h"
#include "textTest.h"
#include "textNew.h"
#include "sprite.h"
#include "face.h"
#include "faceNew.h"
#include "event.h"
#include "eventinfo.h"
#include "util.h"
#include "bm.h"
#include "unit.h"
#include "chapter.h"
#include "ui.h"
#include "banim_ekrbattle.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"

#include "constants/faces.h"

#include "log.h"

#include "background.h"
#include "backgrounds.h"

struct TalkChoiceEnt
{
    u16 msg;
    Func onSwitch;
};

struct TalkChoiceProc
{
    /* 00 */ PROC_HEADER;

    /* 2A */ short selectedChoice;
    /* 2C */ short x_disp;
    /* 2E */ short y_disp;
    /* 30 */ int unused30;
    /* 34 */ struct TalkChoiceEnt const * choices;
};

void TalkSkipListener_OnIdle(ProcPtr proc);
void Talk_OnInit(ProcPtr proc);
void Talk_OnIdle(ProcPtr proc);
i8 TalkPrepNextChar(ProcPtr proc);
i8 TalkSpritePrepNextChar(ProcPtr proc);
void LockTalk(ProcPtr proc);
void TalkInterpretNewFace(ProcPtr proc);
int GetFaceIdByX(int x);
void SetTalkFaceLayer(int talk_face, int toBack);
void MoveTalkFace(int talkFaceFrom, int talkFaceTo);
bool IsTalkFaceMoving(void);
void StartTalkFaceMove(int talkFaceFrom, int talkFaceTo, i8 isSwap);
void TalkFaceMove_OnInit(struct GenericProc * proc);
void TalkFaceMove_OnIdle(struct GenericProc * proc);
void Talk_OnEnd(ProcPtr proc);
void TalkPause_OnIdle(struct GenericProc * proc);
void TalkWaitForInput_OnIdle(struct GenericProc * proc);
void TalkShiftClearAll_OnInit(struct GenericProc * proc);
void TalkShiftClearAll_OnIdle(struct GenericProc * proc);
void StartTalkChoice(struct TalkChoiceEnt const * choices, struct Text * text, u16 * tm, int defaultChoice, int color, ProcPtr parent);
void TalkChoice_OnIdle(struct TalkChoiceProc * proc);
void TalkShiftClear_OnInit(struct GenericProc * proc);
void TalkShiftClear_OnIdle(struct GenericProc * proc);
int GetTalkPauseCmdDuration(int cmd);
void PutTalkBubble(int xAnchor, int yAnchor, int width, int height);
void StartOpenTalkBubble(void);
void func_fe6_0800B3D4(ProcPtr proc);
void func_fe6_0800B3F8(ProcPtr proc);
void TalkOpenBubble_OnIdle(struct GenericProc * proc);
void InitTalkTextWin(int x, int y, int width, int height);
void TalkOpen_OnEnd(struct GenericProc * proc);
void TalkOpen_InitBlend(struct GenericProc * proc);
void TalkOpen_PutTalkBubble(struct GenericProc * proc);
void TalkOpen_OnIdle(struct GenericProc * proc);
void StartTalkOpen(int talk_face, ProcPtr parent);
i8 TalkHasCorrectBubble(void);
int GetTalkFaceHPos(int talk_face);
void SetTalkFaceDisp(int talk_face, int faceDisp);
void SetTalkFaceMouthMove(int talk_face);
void SetTalkFaceNoMouthMove(int talk_face);
void TalkPutSpriteText_OnIdle(struct GenericProc * proc);
void TalkPutSpriteText_OnEnd(struct GenericProc * proc);
int GetStrTalkLen(char const * str, i8 isBubbleOpen);
void TalkDebug_Unk_0800CA88(struct GenericProc * proc);
void TalkDebug_Unk_0800CAA0(struct GenericProc * proc);
void TalkDebug_OnInit(struct GenericProc * proc);
void TalkDebug_OnIdle(struct GenericProc * proc);
void TalkBgSync(int bgflags);

#define TALK_TEXT_BY_LINE(line) (sTalkText + ((line) + sTalkSt->top_text_num) % sTalkSt->lines)

extern struct TalkSt sTalkStObj;
extern struct TalkSt * const sTalkSt;

extern struct Text sTalkText[3];
extern int sTalkChoiceResult;
extern struct Font sTalkFont;

extern struct ProcScr const ProcScr_TalkSkipListener[];

extern struct ProcScr const ProcScr_Talk[];

extern struct ProcScr const ProcScr_TalkLock[];

extern struct ProcScr const ProcScr_TalkMoveFace[];

extern struct ProcScr const ProcScr_TalkPause[];

extern struct ProcScr const ProcScr_TalkWaitForInput[];

extern u16 const Sprite_PressKeyArrowA[];

extern u16 const Sprite_PressKeyArrowB[];

extern u16 const Sprite_PressKeyArrowC[];

extern u16 const * const gPressKeyArrowSpriteLut[];

extern struct ProcScr const ProcScr_TalkShiftClearAll[];

extern struct TalkChoiceEnt const gYesNoTalkChoice[];

extern struct TalkChoiceEnt const gBuySellTalkChoice[];

extern struct ProcScr const ProcScr_TalkChoice[];

extern struct ProcScr const ProcScr_TalkShiftClear[];

extern struct ProcScr const ProcScr_Unk_085C3E7C[];

extern int const gTalkPauseDurations[];

extern struct ProcScr const ProcScr_TalkOpenBubble[];

extern int const gTalkFaceHPosLut[];

extern u16 const Sprite_TalkTextFront[];

extern u16 const Sprite_TalkTextBack[];

extern struct ProcScr const ProcScr_TalkPutSpriteText[];

extern struct ProcScr const ProcScr_TalkDebug[];

void StartTalkOpenNew(int talk_face, ProcPtr parent)
{
    struct GenericProc * proc = SpawnProcLocking(ProcScr_TalkOpen, parent);

    proc->unk64 = GetTalkFaceHPos(talk_face);
    proc->unk68 = sTalkSt->active_width;
    proc->unk6A = 2 * (sTalkSt->lines + 1);
    proc->unk66 = proc->unk6A - 1;

    if (proc->unk64 < 0)
        proc->unk64 = 0;

    if (proc->unk64 > 29)
        proc->unk64 = 30;

    sTalkSt->speak_talk_face = talk_face;
    sTalkSt->speak_width = sTalkSt->active_width;
}

void StartTalkOpenOld(int talk_face, ProcPtr parent)
{
    StartTalkOpenNew(talk_face, parent);
}

int TalkInterpretNew(ProcPtr proc)
{
    struct GenericProc * gproc;
    int i;

    for (;TRUE;)
    {
        switch (*sTalkSt->str)
        {

        case 0x12:
        case 0x13:
        case 0x14:
            sTalkSt->str++;

            sTalkSt->active_width = 2 + Div(7 + GetStrTalkLen(sTalkSt->str, TalkHasCorrectBubble()), 8);

            continue;

        }

        break;
    }

    switch (*sTalkSt->str)
    {

    case 0x81:
        if (sTalkSt->str[1] == 0x40)
        {
            sTalkSt->str += 2;

            Text_Skip(TALK_TEXT_BY_LINE(sTalkSt->line_active), 6);

            if (sTalkSt->instant_print || sTalkSt->print_delay <= 0)
            {
                return 2;
            }

            gproc = SpawnProcLocking(ProcScr_TalkPause, proc);
            gproc->unk64 = GetTalkPauseCmdDuration(4);

            return 3;
        }

        return 1;

    case 0x00: // end
        if (sTalkSt->str_back == NULL)
            return 0;

        sTalkSt->str = sTalkSt->str_back;
        sTalkSt->str_back = NULL;

        return TalkInterpretNew(proc);

    case 0x01: // newline
        int fid = ((struct FaceProcNew *)sTalkSt->faces[sTalkSt->active_talk_face])->fid;
        if (fid >= FID_B9 && fid <= FID_BC) // if in shop or arena (B9~BC are shopowners' faces)
        {
            if (sTalkSt->put_lines == TRUE || sTalkSt->line_active == 1)
            {
                sTalkSt->line_active++;
            }
        }
        else
        {
            if (sTalkSt->put_lines == TRUE || sTalkSt->line_active < sTalkSt->lines)
            {
                sTalkSt->line_active++;
            }
        }

        sTalkSt->put_lines = FALSE;

        sTalkSt->str++;
        return 2;

    case 0x02:
        if (!CheckTalkFlag(TALK_FLAG_INSTANTSHIFT))
            SpawnProcLocking(ProcScr_TalkShiftClearAll, proc);
        else
            ClearTalkText();

        sTalkSt->str++;
        return 3;

    case 0x03: // wait for input to continue
        StartTalkWaitForInput(proc,
            sTalkSt->x_text*8 + Text_GetCursor(TALK_TEXT_BY_LINE(sTalkSt->line_active)) + 4,
            sTalkSt->y_text*8 + sTalkSt->line_active*16 + 8);

        sTalkSt->str++;
        return 3;

    case 0x04 ... 0x07:
        if (sTalkSt->instant_print)
        {
            sTalkSt->str++;
            return 2;
        }

        gproc = SpawnProcLocking(ProcScr_TalkPause, proc);
        gproc->unk64 = GetTalkPauseCmdDuration (* sTalkSt->str);

        sTalkSt->str++;
        return 3;

    case 0x15:
        ClearTalkBubble();

        sTalkSt->str++;
        return 3;

    case 0x16:
        sTalkSt->unk_16 = 1 - sTalkSt->unk_16;

        sTalkSt->str++;
        return 3;

    case 0x17:
        sTalkSt->unk_17 = 1 - sTalkSt->unk_17;

        sTalkSt->str++;
        return 3;

    case 0x10:
        for (;TRUE;)
        {
            switch (*sTalkSt->str)
            {

            case 0x08 ... 0x0F:
                SetActiveTalkFace (* sTalkSt->str - 0x08);

                sTalkSt->str++;
                continue;

            case 0x10:
                sTalkSt->str++;

                TalkInterpretNewFace(proc);

                sTalkSt->str++;
                sTalkSt->str++;

                continue;

            }

            break;
        }

        return 3;

    case 0x11:
        if (TalkHasCorrectBubble())
            ClearTalkBubble();

        // StartFaceFadeOut(sTalkSt->faces[sTalkSt->active_talk_face]);
        if (sTalkSt->active_talk_face != TALK_FACE_NONE)
        {
            Assertf(sTalkSt->active_talk_face < TALK_FACE_COUNT, "Invalid talk face: %d", sTalkSt->active_talk_face);

            if (sTalkSt->faces[sTalkSt->active_talk_face] != NULL)
            {
                StartFaceFadeOutNew((struct FaceProcNew *)sTalkSt->faces[sTalkSt->active_talk_face]);
                sTalkSt->faces[sTalkSt->active_talk_face] = NULL;
            }
            else
            {
                Warnf("Redundant face clear command at 0x%x: %s", sTalkSt->str, *sTalkSt->str);
            }
        }

        sTalkSt->str++;

        StartTemporaryLock(proc, 16);

        return 3;

    case 0x1C:
        if (CheckTalkFlag(TALK_FLAG_4))
            ClearTalkFlag(TALK_FLAG_4);
        else
            SetTalkFlag(TALK_FLAG_4);

        sTalkSt->str++;
        return 3;

    case 0x08 ... 0x0F:
        SetTalkFaceNoMouthMove(sTalkSt->active_talk_face);
        SetActiveTalkFace (* sTalkSt->str - 8);

        sTalkSt->str++;
        return 3;

    case 0x18: // Yes/No choice (default: Yes)
        StartTalkChoice(gYesNoTalkChoice,
            TALK_TEXT_BY_LINE(sTalkSt->line_active),
            gBg0Tm + TM_OFFSET(sTalkSt->x_text, sTalkSt->y_text + 2*sTalkSt->line_active),
            1, sTalkSt->print_color, proc);

        sTalkSt->str++;
        return 3;

    case 0x19: // Yes/No choice (default: No)
        StartTalkChoice(gYesNoTalkChoice,
            TALK_TEXT_BY_LINE(sTalkSt->line_active),
            gBg0Tm + TM_OFFSET(sTalkSt->x_text, sTalkSt->y_text + 2*sTalkSt->line_active),
            2, sTalkSt->print_color, proc);

        sTalkSt->str++;
        return 3;

    case 0x1A:
        StartTalkChoice(gBuySellTalkChoice,
            TALK_TEXT_BY_LINE(sTalkSt->line_active),
            gBg0Tm + TM_OFFSET(sTalkSt->x_text, sTalkSt->y_text + 2*sTalkSt->line_active),
            1, sTalkSt->print_color, proc);

        sTalkSt->str++;
        return 3;

    case 0x1B:
        StartTalkChoice(gBuySellTalkChoice,
            TALK_TEXT_BY_LINE(sTalkSt->line_active),
            gBg0Tm + TM_OFFSET(sTalkSt->x_text, sTalkSt->y_text + 2*sTalkSt->line_active),
            2, sTalkSt->print_color, proc);

        sTalkSt->str++;
        return 3;

    case 0x80:
        switch (*++sTalkSt->str)
        {

        case 0 ... 3:
            sTalkSt->print_color = *++sTalkSt->str;

            for (i = 0; i < sTalkSt->lines; ++i)
                Text_SetColor(sTalkText + i, sTalkSt->print_color);

            sTalkSt->str++;
            return 3;

        case 4:
            LockTalk(proc);

            sTalkSt->str++;
            return 3;

        case 5:
            NumberToString(sTalkSt->number, sTalkSt->buf_number_str);

            sTalkSt->str++;

            sTalkSt->str_back = sTalkSt->str;
            sTalkSt->str = sTalkSt->buf_number_str;

            return TalkInterpretNew(proc);

        case 6:
            sTalkSt->str++;

            sTalkSt->str_back = sTalkSt->str;
            sTalkSt->str = sTalkSt->buf_unk_str;

            return TalkInterpretNew(proc);

        case 8:
            sTalkSt->str++;
            return 3;

        case 7:
            sTalkSt->str++;
            return 3;

        case 10 ... 17:
            MoveTalkFace(sTalkSt->active_talk_face, *sTalkSt->str - 10);
            SetActiveTalkFace (* sTalkSt->str - 10);

            sTalkSt->str++;

            return 3;

        default:
            return 0;

        }

    default:
        return 1;

    }

    return 3;
}

int TalkInterpretOld(ProcPtr proc)
{
    return TalkInterpretNew(proc);
}

void TalkInterpretNewFaceNew(ProcPtr proc)
{
    int faceDisp = 0;
    int fid;

    if (sTalkSt->active_talk_face == TALK_FACE_NONE)
        SetActiveTalkFace(TALK_FACE_1);

    if (IsBattleDeamonActive())
        SetFightEventFaceConfig();
    else
        faceDisp |= FACE_DISP_KIND(FACE_96x80);

    if (GetTalkFaceHPos(sTalkSt->active_talk_face) <= 14)
        faceDisp |= FACE_DISP_FLIPPED;
    else
        faceDisp |= 0;

    fid = (sTalkSt->str[0]);
    fid = (sTalkSt->str[1] * 0x100) + fid;

    if (fid == UINT16_MAX)
        if (IsTalkDebugActive())
            fid = FID_ROY;
        else
            fid = GetUnitFid(gActiveUnit);
    else
        fid = fid - 0x100;

    if (IsNewFace(fid))
    {
        sTalkSt->faces[sTalkSt->active_talk_face] = StartFaceAuto(fid,
            GetTalkFaceHPos(sTalkSt->active_talk_face)*8 > DISPLAY_WIDTH / 2 ? NEW_FULL_FACE_WIDTH / 2 : DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2,
            DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, faceDisp);
        StartFaceFadeInNew((struct FaceProcNew *)sTalkSt->faces[sTalkSt->active_talk_face]);
    }
    else
    {
        sTalkSt->faces[sTalkSt->active_talk_face] = StartFaceAuto(fid,
            GetTalkFaceHPos(sTalkSt->active_talk_face)*8, 80, faceDisp);
        StartFaceFadeIn(sTalkSt->faces[sTalkSt->active_talk_face]);
    }

    SetTalkFaceLayer(sTalkSt->active_talk_face, CheckTalkFlag(TALK_FLAG_4));
    StartTemporaryLock(proc, 8);
}

void TalkInterpretNewFaceOld(ProcPtr proc)
{
    TalkInterpretNewFaceNew(proc);
}

void PutTalkBubbleNew(int xAnchor, int yAnchor, int width, int height)
{
    int xTail;
    int kind;
    int tmp;
    int x, y;

    xTail = 0;

    x = 0;
    y = 0;

    TmFill(gBg1Tm, 0);

    if (xAnchor < 16)
        kind = 0;
    else
        kind = 1;

    if (IsBattleDeamonActive())
        kind += 2;

    y = yAnchor - height + 1;

    switch (kind)
    {

    case 0:
        xTail = xAnchor + 3;

        tmp = xTail - width / 2;

        if (tmp <= 0)
            x = 0;
        else
            x = tmp;

        break;

    case 1:
        xTail = xAnchor - 5;

        tmp = xTail + (width + 1) / 2;

        if (tmp > 29)
            x = 29 - width;
        else
            x = xTail - width / 2;

        break;

    case 2:
        x = 9;
        y = 14;

        width = 20;
        xTail = x - 1;
        yAnchor = y + 2;

        break;

    case 3:
        x = 1;
        y = 14;

        width = 20;
        xTail = x + width - 1;
        yAnchor = y + 2;

        break;
    }

    sTalkSt->x_text = x + 1;
    sTalkSt->y_text = y + 1;

    PutTalkBubbleTm(x, y, width, height);
    if (!IsNewFace(((struct FaceProcNew *)sTalkSt->faces[sTalkSt->active_talk_face])->fid))
        PutTalkBubbleTail(xTail, yAnchor, kind);
    InitTalkTextWin(x, y, width, height);

    StartOpenTalkBubble();

    TalkBgSync(BG1_SYNC_BIT);
}

void PutTalkBubbleOld(int xAnchor, int yAnchor, int width, int height)
{
    PutTalkBubbleNew(xAnchor, yAnchor, width, height);
}

void PrintBackgroundDebugInfo(int background_id)
{
    DebugPutObjNumber(0, DISPLAY_HEIGHT - 16, background_id, 3);
    DebugPutObjStr(0, DISPLAY_HEIGHT - 8, GetBackgroundName(background_id));
}

void TalkDebug_BgInit(struct GenericProc * proc)
{
    proc->y = BACKGROUND_NEW;
    PrintBackgroundDebugInfo(proc->y);
    DisplayBackground(proc->y);
}

void TalkDebug_MsgInit(struct GenericProc * proc)
{
    proc->x = TEXT_ID_TEST;
    DecodeMsg(proc->x);
    TalkDebug_Unk_0800CA88(proc);
}

void TalkDebug_OnIdleNew(struct GenericProc * proc)
{
    int msg = proc->x;
    int bg = proc->y;

    if (IsTalkLocked())
        ResumeTalk();

    if (IsEventRunning())
        return;

    if (proc->unk34 == 0)
    {
        DebugInitObj(-1, 9);
        TalkDebug_Unk_0800CA88(proc);
    }

    DebugPutObjNumber(112, 100, msg, 5);
    PrintBackgroundDebugInfo(bg);

    if (gKeySt->pressed & KEY_BUTTON_SELECT)
    {
        Proc_Break(proc);
        return;
    }

    if (gKeySt->repeated & KEY_DPAD_UP)
        msg++;

    if (gKeySt->repeated & KEY_DPAD_DOWN)
        msg--;

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        msg += 10;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        msg -= 10;

    if (gKeySt->repeated & KEY_BUTTON_R)
        msg += 100;

    if (gKeySt->repeated & KEY_BUTTON_L)
        msg -= 100;

    if (msg < 0)
        msg = 0;

    if (msg > textId_max)
        msg = textId_max;

    if (msg != proc->x)
    {
        ClearTalk();
        EndTalk();

        DebugInitObj(-1, 9);

        proc->x = msg;

        InitTalk(0x80, GetMsgLines(msg), TRUE);
        StartTalkMsg(1, 1, proc->x);

        SetTalkFlag(TALK_FLAG_INSTANTSHIFT);
        SetTalkFlag(TALK_FLAG_NOBUBBLE);
        SetTalkFlag(TALK_FLAG_NOSKIP);

        SetTalkPrintDelay(-1);

        TalkBgSync(BG0_SYNC_BIT);

        return;
    }

    if (gKeySt->pressed & KEY_BUTTON_A)
    {
        ClearTalk();
        EndTalk();

        proc->unk34 = 0;

        StartTalkEvent(proc->x);
    }

    if (gKeySt->pressed & KEY_BUTTON_B)
    {
        if (bg >= BACKGROUND_LAST)
            bg = 0;
        else
            bg++;
        DisplayBackground(bg);
        proc->y = bg;
    }
}

struct ProcScr const ProcScr_TalkDebugNew[] =
{
    PROC_CALL(LockGame),
    PROC_SLEEP(1),

    PROC_CALL(TalkDebug_BgInit),
    PROC_SLEEP(1),

    PROC_CALL(TalkDebug_MsgInit),
    PROC_REPEAT(TalkDebug_OnIdleNew),

    PROC_CALL(UnlockGame),
    PROC_END,
};

// Remove unit death talk
const struct BattleTalkEnt gBattleDefeatTalkListNew[] = {
    { 0, 0, 0, 0, 0 },
};

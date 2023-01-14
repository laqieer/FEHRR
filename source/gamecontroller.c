#include "gamecontroller.h"

#include "hardware.h"
#include "util.h"
#include "bm.h"
#include "unit.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "ui.h"
#include "eventinfo.h"
#include "statscreen.h"

#include "constants/chapters.h"

struct GameController
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 nextAction;
    /* 2A */ u8 nextChapter;
    /* 2B */ u8 demoCnt;
    /* 2C */ u8 previousDemoClassSet;
    /* 2E */ short clock;
};

bool GC_StartClassDemo(struct GameController * proc);
void GC_CheckSramResetKeyCombo(struct GameController * proc);
void GC_InitSramResetScreen(struct GameController * proc);
void GC_InitFastStartCheck(struct GameController * proc);
void GC_FastStartCheck(struct GameController * proc);
void GC_PostIntro(struct GameController * proc);
void GC_PostDemo(struct GameController * proc);
void GC_PostMainMenu(struct GameController * proc);
void GC_InitTutorial(struct GameController * proc);
void GC_InitTrialMap(struct GameController * proc);
void GC_ClearSuspend(struct GameController * proc);
void GC_PostChapter(struct GameController * proc);
void GC_CheckForGameEnded(struct GameController * proc);
void GC_PostLoadSuspend(struct GameController * proc);
void GC_InitNextChapter(struct GameController * proc);
void GC_InitDemo(struct GameController * proc);
void GC_DarkenScreen(struct GameController * proc);

struct ProcScr const ProcScr_GameControllerNew[] =
{
    PROC_19,
    PROC_MARK(PROC_MARK_GAMECTRL),

    PROC_19,

    PROC_CALL(GC_CheckSramResetKeyCombo),

    PROC_CALL(GC_InitFastStartCheck),
    PROC_REPEAT(GC_FastStartCheck),

PROC_LABEL(L_GAMECTRL_OPENINGSEQ),
    PROC_CALL(ForceEnableSounds),

    // PROC_START_CHILD_LOCKING(ProcScr_OpeningSequence),

    PROC_CALL(GC_PostIntro),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_TITLE),

PROC_LABEL(L_GAMECTRL_CLASSDEMO),
    PROC_CALL(GC_InitDemo),

    PROC_CALL_2(GC_StartClassDemo),

    PROC_CALL(GC_PostDemo),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_OPENINGSEQ),

PROC_LABEL(L_GAMECTRL_SCENEDEMO),
    PROC_CALL(GC_InitDemo),

    PROC_CALL_ARG(func_fe6_0806DB00, 0),
    PROC_SLEEP(0),

    PROC_CALL(CleanupGame),

    PROC_CALL(GC_PostDemo),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_OPENINGSEQ),

PROC_LABEL(L_GAMECTRL_TITLE),
    PROC_CALL(ForceEnableSounds),

    PROC_START_CHILD_LOCKING(ProcScr_Unk_08691480),

    PROC_CALL(GC_PostIntro),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_OPENINGSEQ),

PROC_LABEL(L_GAMECTRL_MAINMENU),
    PROC_CALL(ForceEnableSounds),

    PROC_CALL(func_fe6_08089200),
    PROC_SLEEP(0),

    PROC_CALL(GC_PostMainMenu),
    PROC_SLEEP(0),

    // fallthrough?

PROC_LABEL(L_GAMECTRL_CHAPTER),
    PROC_CALL(GC_CheckForGameEnded),

    PROC_START_CHILD_LOCKING(ProcScr_Unk_0868C304),

    PROC_CALL(GC_DarkenScreen),
    PROC_SLEEP(0),

    PROC_CALL(StartChapter),

    // fallthrough

PROC_LABEL(L_GAMECTRL_POSTCHAPTER),
    PROC_SLEEP(0),

    PROC_CALL(GC_PostChapter),
    PROC_SLEEP(0),

    PROC_CALL(GC_InitNextChapter),

    PROC_CALL(func_fe6_08089234),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_CHAPTER),

PROC_LABEL(L_GAMECTRL_LOADSUSPEND),
    PROC_CALL(GC_DarkenScreen),
    PROC_SLEEP(0),

    PROC_CALL(ResumeChapterFromSuspend),

    PROC_CALL(GC_PostLoadSuspend),

    PROC_GOTO(L_GAMECTRL_POSTCHAPTER),

PROC_LABEL(L_GAMECTRL_TRIAL),
    PROC_CALL(GC_InitTrialMap),

    PROC_CALL(StartChapter),

    // fallthrough

PROC_LABEL(L_GAMECTRL_POSTTRIAL),
    PROC_SLEEP(0),

    PROC_CALL(GC_PostChapter),
    PROC_SLEEP(0),

    PROC_CALL(GC_ClearSuspend),

    PROC_CALL(func_fe6_0808FD6C),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_TITLE),

PROC_LABEL(L_GAMECTRL_TUTORIAL),
    PROC_CALL(GC_InitTutorial),

    PROC_START_CHILD_LOCKING(ProcScr_Unk_0868C304),

    PROC_CALL(StartChapter),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_MAINMENU),

PROC_LABEL(L_GAMECTRL_LINK),
    PROC_CALL(func_fe6_0803BA64),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_MAINMENU),

PROC_LABEL(L_GAMECTRL_PREENDING),
    PROC_CALL(func_fe6_08029654),

    PROC_CALL(func_fe6_08089234),
    PROC_SLEEP(0),

    // fallthrough

PROC_LABEL(L_GAMECTRL_ENDING),
    PROC_CALL(StartGameEndingScene),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_TITLE),

PROC_LABEL(L_GAMECTRL_SRAMRESET),
    PROC_CALL(GC_InitSramResetScreen),

    PROC_CALL(StartMidFadeFromBlack),
    PROC_REPEAT(WhileFadeExists),

    PROC_CALL(func_fe6_0803C080),
    PROC_SLEEP(0),

    PROC_CALL(StartMidFadeToBlack),
    PROC_REPEAT(WhileFadeExists),

    PROC_CALL(EndMuralBackground),

    PROC_GOTO(L_GAMECTRL_OPENINGSEQ),

    PROC_END,
};

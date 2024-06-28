#include "gamecontroller.h"

#include "hardware.h"
#include "util.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "chapterNew.h"
#include "ui.h"
#include "eventfunctions.h"
#include "eventinfo.h"
#include "statscreen.h"
#include "save_stats.h"
#include "save_game.h"
#include "savemenu.h"

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

struct GameControllerNew
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 nextAction;
    /* 2A */ u8 nextChapter;
    /* 2B */ u8 demoCnt;
    /* 2C */ u8 previousDemoClassSet;
    /* 2E */ short clock;
    /* 30 */ u16 nextChapterNew;
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
void GC_InitTrialChapter(struct GameController * proc);
void GC_ClearSuspend(struct GameController * proc);
void GC_PostChapter(struct GameController * proc);
void GC_CheckForGameEnded(struct GameController * proc);
void GC_PostLoadSuspend(struct GameController * proc);
void GC_InitNextChapter(struct GameController * proc);
void GC_InitDemo(struct GameController * proc);
void GC_DarkenScreen(struct GameController * proc);

struct GameController * GetGameController(void);

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

    PROC_START_CHILD_LOCKING(ProcScr_TitleScreenHandler),

    PROC_CALL(GC_PostIntro),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_OPENINGSEQ),

PROC_LABEL(L_GAMECTRL_MAINMENU),
    PROC_CALL(ForceEnableSounds),

    PROC_CALL(StartMainMenu),
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

    PROC_CALL(StartSaveMenu),
    PROC_SLEEP(0),

    PROC_GOTO(L_GAMECTRL_CHAPTER),

PROC_LABEL(L_GAMECTRL_LOADSUSPEND),
    PROC_CALL(GC_DarkenScreen),
    PROC_SLEEP(0),

    PROC_CALL(ResumeChapterFromSuspend),

    PROC_CALL(GC_PostLoadSuspend),

    PROC_GOTO(L_GAMECTRL_POSTCHAPTER),

PROC_LABEL(L_GAMECTRL_TRIAL),
    PROC_CALL(GC_InitTrialChapter),

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

    PROC_CALL(StartSaveMenu),
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

void GC_InitTutorialNew(struct GameController * proc)
{
    InitPlayConfig(FALSE);

    gPlaySt.flags |= PLAY_FLAG_TUTORIAL;

    ResetPermanentFlags();
    ResetChapterFlags();

    InitUnits();

    SetChapterInPlaySt(&gPlayStNew, CHAPTER_TUTORIAL);
}

void GC_InitTutorialOld(struct GameController * proc)
{
    GC_InitTutorialNew(proc);
}

void GC_InitNextChapterNew(struct GameControllerNew * proc)
{
    RegisterChapterStats(&gPlaySt);
    SetChapterInPlaySt(&gPlayStNew, proc->nextChapterNew);

    CleanupUnitsBeforeChapter();
}

void GC_InitNextChapterOld(struct GameControllerNew * proc)
{
    GC_InitNextChapterNew(proc);
}

void StartGameNew(void)
{
    struct GameControllerNew * proc;

    SetMainFunc(OnMain);
    SetOnVBlank(OnVBlank);

    proc = SpawnProc(ProcScr_GameController, PROC_TREE_3);

    proc->nextAction = GAME_ACTION_0;
    proc->nextChapterNew = 0;

    proc->demoCnt = 0;
}

void StartGameOld(void)
{
    StartGameNew();
}

void SetNextChapterNew(int chapter)
{
    struct GameControllerNew * proc = (struct GameControllerNew *)GetGameController();
    proc->nextChapterNew = chapter;
}

void SetNextChapterOld(int chapter)
{
    SetNextChapterNew(chapter);
}

bool HasNextChapterNew(void)
{
    struct GameControllerNew * proc = (struct GameControllerNew *)GetGameController();
    return proc->nextChapterNew == 0 ? FALSE : TRUE;
}

bool HasNextChapterOld(void)
{
    return HasNextChapterNew();
}

int GetFurthestSaveChapterNew(void)
{
    struct PlaySt playSt;
    int i, chapter, number;

    chapter = 0;
    number = 0;

    for (i = SAVE_GAME0; i < SAVE_GAME2 + 1; ++i)
    {
        if (!IsSaveValid(i))
            continue;

        ReadGameSavePlaySt(i, &playSt);

        int chapter_id = GetChapterInPlaySt((struct PlayStNew *)&playSt);

        if (number < GetChapterNumber(chapter_id))
        {
            number = GetChapterNumber(chapter_id);
            chapter = chapter_id;
        }
    }

    return chapter;
}

int GetFurthestSaveChapterOld(void)
{
    return GetFurthestSaveChapterNew();
}

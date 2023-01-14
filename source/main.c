#include "common.h"

#include "irq.h"
#include "random.h"
#include "hardware.h"
#include "ramfunc.h"
#include "proc.h"
#include "spriteanim.h"
#include "gamecontroller.h"
#include "bm.h"
#include "mu.h"
#include "save.h"

#include "m4a.h"

#include "debugtext.h"
#include "debugmenu.h"

#include "log.h"

#include "textNew.h"
#include "menuNew.h"

#ifndef GIT_VERSION
    #define GIT_VERSION "unknown"
#endif

void PutBuildInfoNew()
{
    Infof("Build info: %s %s", GIT_VERSION, __DATE__ " " __TIME__);

    DebugScreenInit();
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 0), "FEHRR by laqieer");
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 1), GIT_VERSION);
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 2), __DATE__ " " __TIME__);
}

void ShowStartupMenu()
{
    // func_fe6_0801AAE0();
    StartMenu_Debug_StartUp();

    PutBuildInfoNew();
}

void SramInit(void);
void InitGlobalSaveInfo(void);

void AgbMain();

void AgbMainNew()
{
    // AgbMain();

    LogInit();

    // clear RAM
    DmaFill32(3, 0, (void *) IWRAM_START, 0x7F80);
    CpuFastFill(0, (void *) EWRAM_START, 0x40000);

    REG_WAITCNT = 0x45B4;

    IrqInit();
    SetOnVBlank(NULL);

    REG_DISPSTAT = 8;
    REG_IME = 1;

    InitKeySt(gKeySt);
    RefreshKeySt(gKeySt);

    InitRamFuncs();
    SramInit();
    InitProcs();
    InitSpriteAnims();
    InitMus();

    RandInitB(0x42D690E9);
    RandInit(RandNextB());

    if (!LoadGlobalSaveInfo(NULL))
        InitGlobalSaveInfo();

    m4aSoundInit();
    SetOnVBlank(OnVBlank);

    // SetLang(LANGUAGE_CHINESE);
    // PrintSystemGlyphs();
    // PrintTalkGlyphs();

    // StartGame();
    ShowStartupMenu();

    while (TRUE)
    {
        RunMainFunc();
        SoftResetIfKeyCombo();
    }
}

void (*const AgbMainOld)() = AgbMainNew;

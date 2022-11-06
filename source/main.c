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

#include "m4a.h"

#include "debugtext.h"
#include "debugmenu.h"

#include "log.h"

#include "textNew.h"

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
    func_fe6_0801AAE0();

    PutBuildInfoNew();
}

void func_fe6_080841FC(void);
void func_fe6_0808439C(void);

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
    func_fe6_080841FC();
    InitProcs();
    InitSpriteAnims();
    InitMus();

    RandInitB(0x42D690E9);
    RandInit(RandNextB());

    if (!LoadGlobalSaveInfo(NULL))
        func_fe6_0808439C();

    m4aSoundInit();
    SetOnVBlank(OnVBlank);

    SetLang(LANGUAGE_ENGLISH);
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

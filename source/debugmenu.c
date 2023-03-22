#include "debugmenu.h"

#include "random.h"
#include "hardware.h"
#include "debugtext.h"
#include "text.h"
#include "face.h"
#include "gamecontroller.h"
#include "bm.h"
#include "bmNew.h"
#include "unit.h"
#include "map.h"
#include "bmfx.h"
#include "bmio.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"
#include "statscreen.h" // StartMuralBackground
#include "save.h"

#include "constants/videoalloc_global.h"
#include "constants/chapters.h"
#include "constants/faces.h"

enum
{
    DEBUG_WEATHER_NONE,
    DEBUG_WEATHER_SANDSTORM,
    DEBUG_WEATHER_SNOW,
    DEBUG_WEATHER_SNOWSTORM,
    DEBUG_WEATHER_RAIN,
    DEBUG_WEATHER_NIGHT,
    DEBUG_WEATHER_FLAMES,

    DEBUG_WEATHER_COUNT,
};

fu8 func_fe6_0801A724New(struct MenuProc * menu, struct MenuEntProc * ent)
{
    EndMapMain();

    //FIXME: expand ent->id
    SetChapterInPlaySt(&gPlayStNew, ent->id);
    CleanupUnitsBeforeChapter();
    RestartGameAndChapter();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 func_fe6_0801A724Old(struct MenuProc * menu, struct MenuEntProc * ent)
{
    return func_fe6_0801A724New(menu, ent);
}

fu8 func_fe6_0801ACD8New(struct MenuProc * menu, struct MenuEntProc * ent)
{
    RandInit(GetGameTime());

    InitUnits();

    SaveNewGame(SAVE_ID_GAME0, FALSE);
    SetChapterInPlaySt(&gPlayStNew, ent->id);

    SaveGame(0);
    CleanupUnitsBeforeChapter();

    RestartGameAndChapter();

    return MENU_ACTION_END;
}

fu8 func_fe6_0801ACD8Old(struct MenuProc * menu, struct MenuEntProc * ent)
{
    return func_fe6_0801ACD8New(menu, ent);
}

fu8 func_fe6_0801AE60New(struct MenuProc * menu, struct MenuEntProc * ent)
{
    if (IsMapFadeActive())
        return 0;

    if (gKeySt->pressed & (KEY_BUTTON_A | KEY_DPAD_RIGHT | KEY_DPAD_LEFT))
    {
        if (gPlaySt.vision == 0)
            SetFogVision(GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->fog);
        else
            SetFogVision(0);

        func_fe6_0801ADEC(menu, ent);
    }

    return 0;
}

fu8 func_fe6_0801AE60Old(struct MenuProc * menu, struct MenuEntProc * ent)
{
    return func_fe6_0801AE60New(menu, ent);
}

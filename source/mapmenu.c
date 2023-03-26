#include "mapmenu.h"

#include "armfunc.h"
#include "hardware.h"
#include "sound.h"
#include "icon.h"
#include "talk.h"
#include "event.h"
#include "msg.h"
#include "bm.h"
#include "item.h"
#include "map.h"
#include "mapwork.h"
#include "playerphase.h"
#include "bmfx.h"
#include "targetlist.h"
#include "itemuse.h"
#include "battle.h"
#include "trademenu.h"
#include "trap.h"
#include "supply.h"
#include "arena.h"
#include "action.h"
#include "unitpanel.h"
#include "subtitlehelp.h"
#include "battlepreview.h"
#include "menuinfo.h"
#include "ui.h"
#include "menu.h"
#include "eventinfo.h"
#include "helpbox.h"

#include "constants/videoalloc_global.h"
#include "constants/terrains.h"
#include "constants/pids.h"
#include "constants/iids.h"
#include "constants/songs.h"
#include "constants/msg.h"

#include "eventscript.h"

#include "playerphaseNew.h"

fu8 MapMenu_End_SelectNew(struct MenuProc * menu, struct MenuEntProc * ent)
{
    Proc_EndEach(ProcScr_PlayerPhaseNew);
    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 MapMenu_Unit_SelectNew(struct MenuProc * menu, struct MenuEntProc * ent)
{
    Proc_Goto(FindProc(ProcScr_PlayerPhaseNew), L_PLAYERPHASE_10);
    func_fe6_08076238();

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

fu8 MapMenu_DangerZone_Select(struct MenuProc * menu, struct MenuEntProc * ent)
{
    gActiveUnit = NULL;
    gBmSt.unk_3E = 0;
    Proc_Goto(FindProc(ProcScr_PlayerPhaseNew), L_PLAYERPHASE_DANGER_ZONE);

    return MENU_ACTION_NOCURSOR | MENU_ACTION_END | MENU_ACTION_SE_6A | MENU_ACTION_CLEAR;
}

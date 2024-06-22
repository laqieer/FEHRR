#include "prelude.h"

#include "event.h"
#include "unit.h"
#include "item.h"
#include "bm.h"
#include "bmNew.h"
#include "faction.h"
#include "chapterinfo.h"

struct HardModeBonusLevelsOverrideEnt
{
    /* 00 */ u8 pid;
    /* 04 */ int bonus_levels;
};

extern struct HardModeBonusLevelsOverrideEnt const gHardModeBonusLevelsOverrideList[];

int GetHardModeBonusLevelsByPidNew(u8 pid)
{
    struct HardModeBonusLevelsOverrideEnt const * it = gHardModeBonusLevelsOverrideList;

    while (it->pid != 0)
    {
        if (it->pid == pid)
            return it->bonus_levels;

        ++it;
    }

    return GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->hard_bonus_levels;
}

int GetHardModeBonusLevelsByPidOld(u8 pid)
{
    return GetHardModeBonusLevelsByPidNew(pid);
}

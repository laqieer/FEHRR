
#include "mapwork.h"
#include "common.h"

#include "ramfunc.h"
#include "random.h"
#include "item.h"
#include "unit.h"
#include "faction.h"
#include "map.h"
#include "trap.h"
#include "action.h"
#include "mu.h"

#include "constants/terrains.h"

void RevertAndCvtToMoveScr(u8 * begin, u8 * end);

extern u8 gWorkingMoveScr[MOVE_SCRIPT_MAX_LENGTH];

void SetWorkingMap(u8 ** map);

int GetNonActiveFaction(void) {
    return (gPlaySt.faction & FACTION_RED) ^ FACTION_RED;
}

void GenerateDangerZoneRange(bool8 boolDisplayStaffRange)
{
    int i, enemyFaction;
    int hasMagicRank, prevHasMagicRank;
    u8 savedUnitId;

    prevHasMagicRank = -1;

    MapFill(gMapRange, 0);

    enemyFaction = GetNonActiveFaction();

    for (i = enemyFaction + 1; i < enemyFaction + 0x80; ++i)
    {
        struct Unit* unit = GetUnit(i);

        if (unit == NULL || unit->pinfo == NULL)
            continue; // not a unit

        if (boolDisplayStaffRange && !UnitKnowsMagic(unit))
            continue; // no magic in magic range mode

        if (gPlaySt.vision && (gMapFog[unit->y][unit->x] == 0))
            continue; // in the fog

        if (unit->flags & UNIT_FLAG_UNDER_ROOF)
            continue; // under a roof

        // Fill movement map for unit
        MapFlood_08019384(unit, UNIT_MOV(unit));

        savedUnitId = gMapUnit[unit->y][unit->x];
        gMapUnit[unit->y][unit->x] = 0;

        hasMagicRank = UnitKnowsMagic(unit);

        if (prevHasMagicRank != hasMagicRank)
        {
            MapFill(gMapOther, 0);

            // if (hasMagicRank)
            //     GenerateMagicSealMap(1);

            prevHasMagicRank = hasMagicRank;
        }

        SetWorkingMap(gMapRange);

        // Apply unit's range to range map

        if (boolDisplayStaffRange)
            BuildUnitCompleteStaffRange(unit);
        else
            BuildUnitCompleteAttackRange(unit);

        gMapUnit[unit->y][unit->x] = savedUnitId;
    }
}

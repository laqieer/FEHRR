
#include "mapwork.h"
#include "prelude.h"

#include "armfunc.h"
#include "random.h"
#include "item.h"
#include "itemNew.h"
#include "unit.h"
#include "faction.h"
#include "map.h"
#include "trap.h"
#include "action.h"
#include "mu.h"

#include "log.h"

#include "constants/terrains.h"

void RevertAndCvtToMoveScr(u8 * begin, u8 * end);

extern u8 gWorkingMoveScr[MOVE_SCRIPT_MAX_LENGTH];

void SetWorkingMap(u8 ** map);

int GetNonActiveFaction(void) {
    return (gPlaySt.faction & FACTION_RED) ^ FACTION_RED;
}

void BuildUnitCompleteAttackRangeNew(struct Unit * unit)
{
    int ix, iy;
    int item;

    MapFill(gMapRange, 0);

    #define FOR_EACH_IN_MOVEMENT_RANGE(block) \
        for (iy = gMapSize.y - 1; iy >= 0; --iy) \
        { \
            for (ix = gMapSize.x - 1; ix >= 0; --ix) \
            { \
                if (gMapMovement[iy][ix] > MAP_MOVEMENT_MAX) \
                    continue; \
                if (gMapUnit[iy][ix]) \
                    continue; \
                block \
            } \
        }

    switch (GetUnitWeaponReach(unit, -1))
    {

    case REACH_RANGE1:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 2);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 3);
        })

        break;

    case REACH_RANGE2:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 2, 2);
        })

        break;

    case REACH_RANGE2 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 2, 3);
        })

        break;

    case REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 3);
        })

        break;

    case REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 5);
        })

        break;

    case REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 10);
        })

        break;

    case REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 15);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 3);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 5);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 10);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 15);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 5);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 10);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 15);
        })

        break;

    }

    // BUG: this should be unit not gActiveUnit
    if (UNIT_ATTRIBUTES(gActiveUnit) & UNIT_ATTR_BALLISTA)
    {
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            item = GetBallistaItemAt(ix, iy);

            if (item)
                MapIncInBoundedRange(ix, iy, GetItemMinRange(item), GetItemMaxRange(item));
        })
    }

    #undef FOR_EACH_IN_MOVEMENT_RANGE

    SetWorkingMap(gMapMovement);
}

void BuildUnitCompleteAttackRangeOld(struct Unit * unit)
{
    BuildUnitCompleteAttackRangeNew(unit);
}

void BuildUnitStandingRangeForReachNew(struct Unit * unit, int reach)
{
    int x = unit->x;
    int y = unit->y;

    switch (reach)
    {

    case REACH_RANGE1:
        MapIncInBoundedRange(x, y, 1, 1);
        break;

    case REACH_RANGE1 | REACH_RANGE2:
        MapIncInBoundedRange(x, y, 1, 2);
        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3:
        MapIncInBoundedRange(x, y, 1, 3);
        break;

    case REACH_RANGE2:
        MapIncInBoundedRange(x, y, 2, 2);
        break;

    case REACH_RANGE2 | REACH_RANGE3:
        MapIncInBoundedRange(x, y, 2, 3);
        break;

    case REACH_RANGE3:
        MapIncInBoundedRange(x, y, 3, 3);
        break;

    case REACH_RANGE3 | REACH_TO5:
        MapIncInBoundedRange(x, y, 3, 5);
        break;

    case REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        MapIncInBoundedRange(x, y, 3, 10);
        break;

    case REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        MapIncInBoundedRange(x, y, 3, 15);
        break;

    case REACH_RANGE1 | REACH_RANGE3:
        MapIncInBoundedRange(x, y, 1, 1);
        MapIncInBoundedRange(x, y, 3, 3);
        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5:
        MapIncInBoundedRange(x, y, 1, 1);
        MapIncInBoundedRange(x, y, 3, 5);
        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        MapIncInBoundedRange(x, y, 1, 1);
        MapIncInBoundedRange(x, y, 3, 10);
        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        MapIncInBoundedRange(x, y, 1, 1);
        MapIncInBoundedRange(x, y, 3, 15);
        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5:
        MapIncInBoundedRange(x, y, 1, 5);
        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        MapIncInBoundedRange(x, y, 1, 10);
        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        MapIncInBoundedRange(x, y, 1, 15);
        break;

    case REACH_TOMAG:
        MapIncInBoundedRange(x, y, 1, GetUnitMagRange(unit));
        break;

    }
}

void BuildUnitStandingRangeForReachOld(struct Unit * unit, int reach)
{
    BuildUnitStandingRangeForReachNew(unit, reach);
}

void AddUnitCompleteStaffRange(struct Unit * unit)
{
    int ix, iy;

    int magRange, reach = GetUnitStaffReach(unit);

    // MapFill(gMapRange, 0);

    magRange = GetUnitMagRange(unit);

    #define FOR_EACH_IN_MOVEMENT_RANGE(block) \
        for (iy = gMapSize.y - 1; iy >= 0; --iy) \
        { \
            for (ix = gMapSize.x - 1; ix >= 0; --ix) \
            { \
                if (gMapMovement[iy][ix] > MAP_MOVEMENT_MAX) \
                    continue; \
                block \
            } \
        }

    switch (reach)
    {

    case REACH_RANGE1:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 2);
        })

        break;

    case REACH_TOMAG:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, magRange);
        })

        break;

    }

    #undef FOR_EACH_IN_MOVEMENT_RANGE
}

void AddUnitCompleteAttackRange(struct Unit * unit)
{
    int ix, iy;
    int item;

    // MapFill(gMapRange, 0);

    #define FOR_EACH_IN_MOVEMENT_RANGE(block) \
        for (iy = gMapSize.y - 1; iy >= 0; --iy) \
        { \
            for (ix = gMapSize.x - 1; ix >= 0; --ix) \
            { \
                if (gMapMovement[iy][ix] > MAP_MOVEMENT_MAX) \
                    continue; \
                if (gMapUnit[iy][ix]) \
                    continue; \
                block \
            } \
        }

    switch (GetUnitWeaponReach(unit, -1))
    {

    case REACH_RANGE1:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 2);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 3);
        })

        break;

    case REACH_RANGE2:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 2, 2);
        })

        break;

    case REACH_RANGE2 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 2, 3);
        })

        break;

    case REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 3);
        })

        break;

    case REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 5);
        })

        break;

    case REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 10);
        })

        break;

    case REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 3, 15);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 3);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 5);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 10);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 1);
            MapIncInBoundedRange(ix, iy, 3, 15);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 5);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 10);
        })

        break;

    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO10 | REACH_TO15:
    case REACH_RANGE1 | REACH_RANGE2 | REACH_RANGE3 | REACH_TO5 | REACH_TO10 | REACH_TO15:
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            MapIncInBoundedRange(ix, iy, 1, 15);
        })

        break;

    }

    if (UNIT_ATTRIBUTES(unit) & UNIT_ATTR_BALLISTA)
    {
        FOR_EACH_IN_MOVEMENT_RANGE(
        {
            item = GetBallistaItemAt(ix, iy);

            if (item)
                MapIncInBoundedRange(ix, iy, GetItemMinRange(item), GetItemMaxRange(item));
        })
    }

    #undef FOR_EACH_IN_MOVEMENT_RANGE

    SetWorkingMap(gMapMovement);
}

void GenerateDangerZoneRange(bool8 boolDisplayStaffRange)
{
    int i, enemyFaction;
    int hasMagicRank, prevHasMagicRank;
    u8 savedUnitId;

    Info(boolDisplayStaffRange ? "staff range" : "attack range");

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
        MapFlood_UpTo(unit, UNIT_MOV(unit));

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
            // BuildUnitCompleteStaffRange(unit);
            AddUnitCompleteStaffRange(unit);
        else
            // BuildUnitCompleteAttackRange(unit);
            AddUnitCompleteAttackRange(unit);

        gMapUnit[unit->y][unit->x] = savedUnitId;
    }
}

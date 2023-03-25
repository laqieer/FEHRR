#include "unit.h"

#include "msg.h"
#include "item.h"
#include "map.h"
#include "mapwork.h"
#include "bmfx.h"
#include "faction.h"
#include "unitsprite.h"
#include "support.h"
#include "battle.h"
#include "trap.h"
#include "action.h"
#include "ai_utility.h"
#include "save_stats.h"

#include "constants/terrains.h"
#include "constants/iids.h"
#include "constants/map-sprites.h"
#include "constants/icons.h"
#include "constants/faces.h"

#include "voice.h"

extern struct PInfo CONST_DATA PersonInfoTable[];
extern struct JInfo CONST_DATA JobInfoTable[];

extern u8 gActiveUnitId;
extern struct Vec2i gActiveUnitMoveOrigin;

extern struct Unit gUnitArrayBlue[UNIT_AMOUNT_BLUE];
extern struct Unit gUnitArrayRed[UNIT_AMOUNT_RED];
extern struct Unit gUnitArrayGreen[UNIT_AMOUNT_GREEN];
extern struct Unit gUnitArrayPurple[UNIT_AMOUNT_PURPLE];

void UnitBeginActionNew(struct Unit * unit)
{
    gActiveUnit = unit;
    gActiveUnitId = unit->id;

    gActiveUnitMoveOrigin.x = unit->x;
    gActiveUnitMoveOrigin.y = unit->y;

    gAction.instigator = unit->id;
    gAction.id = ACTION_NONE;
    gAction.move_count = 0;

    gBmSt.partial_actions_taken = 0;
    gBmSt.unk_3F = 0xFF;

    func_fe6_08025780();

    gActiveUnit->flags |= UNIT_FLAG_HIDDEN;
    gMapUnit[unit->y][unit->x] = 0;

    StartUnitVoice(unit, GetUnitCurrentHp(unit) <= GetUnitMaxHp(unit) / VOICE_DAMAGE_THRESHOLD ? VOICE_TYPE_DAMAGE : VOICE_TYPE_MAP);
}

void UnitBeginActionOld(struct Unit * unit)
{
    UnitBeginActionNew(unit);
}

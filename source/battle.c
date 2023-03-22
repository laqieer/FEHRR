
#include "battle.h"
#include "common.h"

#include "random.h"
#include "hardware.h"
#include "proc.h"
#include "item.h"
#include "unit.h"
#include "map.h"
#include "bmfx.h"
#include "faction.h"
#include "support.h"
#include "trap.h"
#include "arena.h"
#include "action.h"
#include "chapterinfo.h"
#include "mu.h"
#include "save.h"

#include "constants/pids.h"
#include "constants/jids.h"

#include "bmNew.h"

enum { BATTLE_HIT_MAX = 7 };
enum { BATTLE_MAX_DAMAGE = 99 };

struct WeaponTriangleRule
{
    i8 attackerKind;
    i8 defenderKind;
    i8 hitBonus;
    i8 damageBonus;
};

extern struct WeaponTriangleRule const sWeaponTriangleRules[];

void DummyBattleAnimLock_UpdateInstigator(ProcPtr proc);

extern struct ProcScr const ProcScr_DummyBattleAnimLock[];

extern struct BattleSt gBattleSt;

extern struct BattleUnit gBattleUnitA;
extern struct BattleUnit gBattleUnitB;

extern struct BattleHit gBattleHits[BATTLE_HIT_MAX];
extern struct BattleHit * gBattleHitIt;

void InitObstacleBattleUnitNew(void)
{
    ClearUnit(&gBattleUnitB.unit);

    gBattleUnitB.unit.id = 0;

    gBattleUnitB.unit.pinfo = GetPInfo(PID_WALL);
    gBattleUnitB.unit.jinfo = GetJInfo(JID_OBSTACLE);

    gBattleUnitB.unit.max_hp = GetChapterInfo(GetChapterInPlaySt(&gPlayStNew))->wall_hp;
    gBattleUnitB.unit.hp = gAction.extra;

    gBattleUnitB.unit.x = gAction.x_target;
    gBattleUnitB.unit.y = gAction.y_target;
}

void InitObstacleBattleUnitOld(void)
{
    InitObstacleBattleUnitNew();
}

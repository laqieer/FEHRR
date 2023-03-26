
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
#include "unitNew.h"

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

void CheckBattleUnitLevelUpNew(struct BattleUnit * bu)
{
    if (!CanBattleUnitGainExp(bu))
        return;

    if (bu->unit.exp >= 100)
    {
        int statGainTotal;

        bu->unit.exp -= 100;
        bu->unit.level++;

        if (bu->unit.level == UNIT_LEVEL_MAX)
        {
            bu->exp_gain -= bu->unit.exp;
            bu->unit.exp = 0xFF;
        }

        statGainTotal = 0;

        bu->change_hp  = GetStatIncrease(bu->unit.pinfo->growth_hp);
        statGainTotal += bu->change_hp;

        bu->change_pow = GetStatIncrease(bu->unit.pinfo->growth_pow);
        statGainTotal += bu->change_pow;

        bu->change_skl = GetStatIncrease(bu->unit.pinfo->growth_skl ? bu->unit.pinfo->growth_skl : PLAYER_UNIT_GRWOTH_FACTOR_SKL * bu->unit.jinfo->growth_skl);
        statGainTotal += bu->change_skl;

        bu->change_spd = GetStatIncrease(bu->unit.pinfo->growth_spd);
        statGainTotal += bu->change_spd;

        bu->change_def = GetStatIncrease(bu->unit.pinfo->growth_def);
        statGainTotal += bu->change_def;

        bu->change_res = GetStatIncrease(bu->unit.pinfo->growth_res);
        statGainTotal += bu->change_res;

        bu->change_lck = GetStatIncrease(bu->unit.pinfo->growth_lck ? bu->unit.pinfo->growth_lck : PLAYER_UNIT_GRWOTH_FACTOR_LCK * bu->unit.jinfo->growth_lck);
        statGainTotal += bu->change_lck;

        if (statGainTotal == 0)
        {
            for (statGainTotal = 0; statGainTotal < 2; ++statGainTotal)
            {
                bu->change_hp = GetStatIncrease(bu->unit.pinfo->growth_hp);

                if (bu->change_hp)
                    break;

                bu->change_pow = GetStatIncrease(bu->unit.pinfo->growth_pow);

                if (bu->change_pow)
                    break;

                bu->change_skl = GetStatIncrease(bu->unit.pinfo->growth_skl ? bu->unit.pinfo->growth_skl : PLAYER_UNIT_GRWOTH_FACTOR_SKL * bu->unit.jinfo->growth_skl);

                if (bu->change_skl)
                    break;

                bu->change_spd = GetStatIncrease(bu->unit.pinfo->growth_spd);

                if (bu->change_spd)
                    break;

                bu->change_def = GetStatIncrease(bu->unit.pinfo->growth_def);

                if (bu->change_def)
                    break;

                bu->change_res = GetStatIncrease(bu->unit.pinfo->growth_res);

                if (bu->change_res)
                    break;

                bu->change_lck = GetStatIncrease(bu->unit.pinfo->growth_lck ? bu->unit.pinfo->growth_lck : PLAYER_UNIT_GRWOTH_FACTOR_LCK * bu->unit.jinfo->growth_lck);

                if (bu->change_lck)
                    break;
            }
        }

        CheckBattleUnitStatCaps(GetUnit(bu->unit.id), bu);
    }
}

void CheckBattleUnitLevelUpOld(struct BattleUnit * bu)
{
    CheckBattleUnitLevelUpNew(bu);
}

void UnitPromoteNew(struct Unit * unit)
{
    int i;

    // substract to stats the bases of the previous jinfo

    // unit->max_hp -= unit->jinfo->base_hp;
    // unit->pow -= unit->jinfo->base_pow;
    unit->skl -= unit->jinfo->base_skl;
    // unit->spd -= unit->jinfo->base_spd;
    // unit->def -= unit->jinfo->base_def;
    // unit->res -= unit->jinfo->base_res;

    for (i = 0; i < UNIT_WEAPON_EXP_COUNT; ++i)
        unit->wexp[i] -= unit->jinfo->wexp[i];

    // promote!

    unit->jinfo = GetJInfo(unit->jinfo->jid_promote);

    // add to stats the base of the new jinfo

    // unit->max_hp += unit->jinfo->base_hp;
    // unit->pow += unit->jinfo->base_pow;
    unit->skl += unit->jinfo->base_skl;
    // unit->spd += unit->jinfo->base_spd;
    // unit->def += unit->jinfo->base_def;
    // unit->res += unit->jinfo->base_res;

    for (i = 0; i < UNIT_WEAPON_EXP_COUNT; ++i)
    {
        int wexp = unit->wexp[i];

        wexp += unit->jinfo->wexp[i];

        if (wexp > WPN_EXP_S)
            wexp = WPN_EXP_S;

        unit->wexp[i] = wexp;
    }

    UnitCheckStatOverflow(unit);

    unit->level = 1;
    unit->exp = 0;
}

void UnitPromoteOld(struct Unit * unit)
{
    UnitPromoteNew(unit);
}

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
#include "event.h"
#include "gamedata.h"
#include "jobs.h"
#include "log.h"

#include "constants/terrains.h"
#include "constants/iids.h"
#include "constants/pids.h"
#include "constants/unitsprites.h"
#include "constants/icons.h"
#include "constants/faces.h"

#include "hero.h"
#include "heroes.h"
#include "enemies.h"
#include "chapterNew.h"
#include "bmNew.h"
#include "msgNew.h"

#include "voice.h"
#include "unitNew.h"

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

// Enemy only characters don't have unique stats, so use job stats instead
bool isEnemyOnly(u8 pid)
{
    return pid > HERO_NUM;
}

void UnitInitStatsNew(struct Unit * unit, struct PInfo const * pinfo)
{
    int i;

    unit->max_hp = pinfo->base_hp + (isEnemyOnly(unit->pinfo->id) ? unit->jinfo->base_hp : 0);
    unit->pow = pinfo->base_pow + (isEnemyOnly(unit->pinfo->id) ? unit->jinfo->base_pow : 0);
    unit->skl = pinfo->base_skl + unit->jinfo->base_skl;
    unit->spd = pinfo->base_spd + (isEnemyOnly(unit->pinfo->id) ? unit->jinfo->base_spd : 0);
    unit->def = pinfo->base_def + (isEnemyOnly(unit->pinfo->id) ? unit->jinfo->base_def : 0);
    unit->res = pinfo->base_res + (isEnemyOnly(unit->pinfo->id) ? unit->jinfo->base_res : 0);
    unit->lck = pinfo->base_lck;

    unit->bonus_con = 0;

    for (i = 0; i < UNIT_WEAPON_EXP_COUNT; ++i)
    {
        unit->wexp[i] = unit->jinfo->wexp[i];

        if (unit->pinfo->wexp[i] != 0)
            unit->wexp[i] = unit->pinfo->wexp[i];
    }

    if (UNIT_FACTION(unit) == FACTION_BLUE && (unit->level != UNIT_LEVEL_MAX))
        unit->exp = 0;
    else
        unit->exp = 0xFF;
}

void UnitInitStatsOld(struct Unit * unit, struct PInfo const * pinfo)
{
    UnitInitStatsNew(unit, pinfo);
}

void UnitAutolevelPlayerNew(struct Unit * unit)
{
    int i, levelCount = unit->level - unit->pinfo->base_level + ((UNIT_ATTRIBUTES(unit) & UNIT_ATTR_PROMOTED) ? UNIT_LEVEL_MAX : 0);

    for (i = 0; i < levelCount; ++i)
    {
        unit->max_hp += GetStatIncrease(unit->pinfo->growth_hp);
        unit->pow += GetStatIncrease(unit->pinfo->growth_pow);
        unit->skl += GetStatIncrease(unit->pinfo->growth_skl ? unit->pinfo->growth_skl : PLAYER_UNIT_GRWOTH_FACTOR_SKL * unit->jinfo->growth_skl);
        unit->spd += GetStatIncrease(unit->pinfo->growth_spd);
        unit->def += GetStatIncrease(unit->pinfo->growth_def);
        unit->res += GetStatIncrease(unit->pinfo->growth_res);
        unit->lck += GetStatIncrease(unit->pinfo->growth_lck ? unit->pinfo->growth_lck : PLAYER_UNIT_GRWOTH_FACTOR_LCK * unit->jinfo->growth_lck);
    }
}

void UnitAutolevelPlayerOld(struct Unit * unit)
{
    UnitAutolevelPlayerNew(unit);
}

void UnitAutolevelNew(struct Unit * unit)
{
    if (UNIT_ATTRIBUTES(unit) & UNIT_ATTR_PROMOTED)
        UnitAutolevelCore(unit, unit->jinfo->jid_promote, unit->level + UNIT_LEVEL_MAX - 1);

    UnitAutolevelCore(unit, unit->jinfo->id, unit->level - 1);
}

void UnitAutolevelOld(struct Unit * unit)
{
    UnitAutolevelNew(unit);
}

struct Unit * GetUnitToSelectAuto()
{
    struct Unit * unit = GetUnitByPid(PID_ROY);

    if (unit && unit->pinfo && !(unit->flags & UNIT_FLAG_UNAVAILABLE))
        return unit;

    return GetUnit(GetNextAvailableBlueUnitId(0));
}

extern const struct PInfo heroes[];

#define HERO_ID_LAST EID_ENEMY_HERO_7

struct PInfo const * GetHeroPInfo(int pid)
{
    if (pid < 1)
        return NULL;

    if (pid <= HERO_ID_LAST)
        return heroes + (pid - 1);

    return PInfoTable + (pid - 1);;
}

struct PInfo const * GetPInfoNew(int pid)
{
    if (pid < 1)
        return NULL;

    if (pid <= HERO_ID_LAST && IsChapterNew(GetChapterInPlaySt(&gPlayStNew)))
        return heroes + (pid - 1);

    return PInfoTable + (pid - 1);
}

struct PInfo const * GetPInfoOld(int pid)
{
    return GetPInfoNew(pid);
}

void func_fe6_08017764New(struct Unit * unit)
{
    if (UNIT_ATTRIBUTES(unit) & UNIT_ATTR_ALT_PINFO)
        unit->pinfo = GetPInfoNew(unit->pinfo->id - 1);
}

void func_fe6_08017764Old(struct Unit * unit)
{
    func_fe6_08017764New(unit);
}

extern const struct JInfo JInfoTableNew[];

struct JInfo const * GetJInfoNew(int jid)
{
    // Assert(jid < JID_COUNT);

    if (jid < 1)
        return NULL;

    return JInfoTableNew + (jid - 1);
}

struct JInfo const * GetJInfoOld(int jid)
{
    return GetJInfoNew(jid);
}

void UnitInitFromInfoNew(struct Unit * unit, struct UnitInfo const * info)
{
    int i;

    unit->pinfo = GetPInfoNew(info->pid);

    if (info->jid != 0)
        unit->jinfo = GetJInfoNew(info->jid);
    else
        unit->jinfo = GetJInfoNew(unit->pinfo->jid_default);

    unit->level = info->level;

    unit->x = info->x_move;
    unit->y = info->y_move;

    for (i = 0; (i < (int) ARRAY_COUNT(info->items)) && info->items[i]; ++i)
        UnitAddItem(unit, CreateItem(info->items[i]));

    UnitInitAiFromInfo(unit, info);
}

void UnitInitFromInfoOld(struct Unit * unit, struct UnitInfo const * info)
{
    UnitInitFromInfoNew(unit, info);
}

struct Unit * GetBlueUnitByPid(int pid)
{
    int i;

    for (i = 1; i < UNIT_AMOUNT_BLUE; ++i)
    {
        struct Unit * unit = GetUnit(i);

        if (!unit)
            continue;

        if (!unit->pinfo)
            continue;

        if (unit->pinfo->id == pid)
            return unit;
    }

    return NULL;
}

const u8 DefaultWeapons[] = {
    [ITEM_KIND_SWORD] = IID_IRONSWORD,
    [ITEM_KIND_LANCE] = IID_IRONLANCE,
    [ITEM_KIND_AXE] = IID_IRONAXE,
    [ITEM_KIND_BOW] = IID_IRONBOW,
    [ITEM_KIND_STAFF] = IID_HEALSTAFF,
    [ITEM_KIND_ANIMA] = IID_FIRE,
    [ITEM_KIND_LIGHT] = IID_LIGHTNING,
    [ITEM_KIND_ELDER] = IID_FLUX,
};

void GiveUnitDefaultWeapons(struct Unit * unit)
{
    Assert(unit && unit->pinfo && unit->jinfo && (unit->flags & UNIT_FLAG_DEAD) == 0);

    switch (unit->jinfo->id)
    {
        case JID_MANAKETE:
            UnitAddItem(unit, CreateItem(IID_FIRESTONE));
            break;

        case JID_MANAKETE_F:
            UnitAddItem(unit, CreateItem(IID_DIVINESTONE));
            break;

        case JID_DEMONDRAGON:
            UnitAddItem(unit, CreateItem(IID_DARKBREATH));
            break;

        default:
            for (int i = 0; i < UNIT_WEAPON_EXP_COUNT; ++i)
            {
                if(unit->wexp[i])
                    UnitAddItem(unit, CreateItem(DefaultWeapons[i]));
            }
            break;
    }
}

struct Unit * CreateUnitNew(struct UnitInfo const * info)
{
    struct Unit * unit;

    switch (info->faction_id)
    {

    case FACTION_ID_BLUE:
        unit = GetFreeUnit(FACTION_BLUE);
        break;

    case FACTION_ID_RED:
        unit = GetFreeUnit(FACTION_RED);
        break;

    case FACTION_ID_GREEN:
        unit = GetFreeUnit(FACTION_GREEN);
        break;

    default:
        unit = NULL;
        break;

    }

    if (unit == NULL)
        return NULL;

    ClearUnit(unit);

    UnitInitFromInfoNew(unit, info);
    UnitInitStatsNew(unit, unit->pinfo);

    UnitHideIfUnderRoof(unit);

    if (info->autolevel)
    {
        if (isEnemyOnly(unit->pinfo->id))
        {
            UnitAutolevel(unit);
        }
        else
        {
            UnitAutolevelPlayer(unit);
        }

        UnitAutolevelWeaponExp(unit, info);

        if (UNIT_FACTION(unit) != FACTION_BLUE)
        {
            SetUnitLeaderPid(unit, info->pid_lead);
        }
    }

    func_fe6_08017764(unit);
    UnitInitSupports(unit);

    UnitCheckStatOverflow(unit);

    unit->hp = GetUnitMaxHp(unit);

    // Give default weapons if unit has no items in new chapters
    if(GetUnitItemCount(unit) == 0 && IsChapterNew(GetChapterInPlaySt(&gPlayStNew)))
    {
        GiveUnitDefaultWeapons(unit);
    }

    Infof("Created unit at 0x%x: %d %s, job: %d %s, LV: %d, position: (%d, %d)", unit, unit->pinfo->id, GetHeroName(unit->pinfo->id), unit->jinfo->id, GetMsg(GetJInfo(unit->jinfo->id)->msg_name), unit->level, unit->x, unit->y);

    return unit;
}

struct Unit * CreateUnitOld(struct UnitInfo const * info)
{
    return CreateUnitNew(info);
}

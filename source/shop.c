#include "prelude.h"

#include "shop.h"
#include "unit.h"
#include "proc.h"

#include "constants/chapters.h"
#include "constants/iids.h"

#include "bmNew.h"
#include "chapterNew.h"
#include "chapters.h"

// 1st chapter has prep screen
#define CHAPTER_CH_1st_Prep CHAPTER_CH_S0101

const u16 PoisonWeapons[] = {
    IID_POISONSWORD,
    IID_POISONLANCE,
    IID_POISONAXE,
    IID_POISONBOW,
    0,
};

const u16 RankEWeapons[] = {
    IID_IRONSWORD,
    IID_SLIMSWORD,
    IID_RAPIER,
    IID_IRONLANCE,
    IID_SLIMLANCE,
    IID_JAVELIN,
    IID_IRONAXE,
    IID_STEELAXE,
    IID_HANDAXE,
    IID_DEVILAXE,
    IID_IRONBOW,
    IID_FIRE,
    IID_LIGHTNING,
    IID_HEALSTAFF,
    IID_TINASSTAFF,
    0,
};

const u16 RankDWeapons[] = {
    IID_IRONBLADE,
    IID_STEELSWORD,
    IID_ARMORSLAYER,
    IID_WODAO,
    IID_STEELLANCE,
    IID_HORSESLAYER,
    IID_HAMMER,
    IID_HALBERD,
    IID_STEELBOW,
    IID_SHORTBOW,
    IID_LONGBOW,
    IID_THUNDER,
    IID_FLUX,
    IID_MENDSTAFF,
    IID_TORCHSTAFF,
    IID_UNLOCKSTAFF,
    IID_ALSSWORD,
    IID_GANTSLANCE,
    0,
};

const u16 RankCWeapons[] = {
    IID_LIGHTBRAND,
    IID_KILLINGEDGE,
    IID_LANCEREAVER,
    IID_KILLERLANCE,
    IID_AXEREAVER,
    IID_KILLERAXE,
    IID_SWORDREAVER,
    IID_KILLERBOW,
    IID_ELFIRE,
    IID_DIVINE,
    IID_NOSFERATU,
    IID_RECOVERSTAFF,
    IID_RESTORESTAFF,
    IID_HAMMERNESTAFF,
    IID_WATCHSTAFF,
    IID_BARRIERSTAFF,
    IID_STEELBLADE,
    IID_WYRMSLAYER,
    0,
};

const u16 RankBWeapons[] = {
    IID_BRAVESWORD,
    IID_BRAVELANCE,
    IID_BRAVEAXE,
    IID_BRAVEBOW,
    IID_AIRCALIBUR,
    IID_ECLIPSE,
    IID_PHYSICSTAFF,
    IID_RESCUESTAFF,
    IID_SILENCESTAFF,
    IID_SLEEPSTAFF,
    IID_BERSERKSTAFF,
    IID_SPEAR,
    0,
};

const u16 RankAWeapons[] = {
    IID_SILVERSWORD,
    IID_SILVERLANCE,
    IID_SILVERAXE,
    IID_SILVERBOW,
    IID_FIMBULVETR,
    IID_FENRIR,
    IID_BOLTING,
    IID_PURGE,
    IID_FORTIFYSTAFF,
    IID_WARPSTAFF,
    IID_SILVERBLADE,
    IID_RUNESWORD,
    IID_TOMAHAWK,
    0,
};

const u16 RankSWeapons[] = {
    IID_DURANDAL,
    IID_MALTET,
    IID_ARMADS,
    IID_MULAGIR,
    IID_FORBLAZE,
    IID_AUREOLA,
    IID_APOCALYPSE,
    IID_SAINTSSTAFF,
    IID_BINDINGBLADE,
    IID_ECKESACHS,
    0,
};

const u16 DragonStones[] = {
    IID_FIRESTONE,
    IID_DIVINESTONE,
    0,
};

const u16 DopingItems[] = {
    IID_SECRETBOOK,
    IID_GODDESSICON,
    IID_SERAPHROBE,
    IID_DRACOSHIELD,
    IID_ENERGYRING,
    IID_SPEEDWING,
    IID_TALISMAN,
    IID_BOOTS,
    IID_BODYRING,
    0,
};

const u16 CCItems[] = {
    IID_HEROCREST,
    IID_KNIGHTCREST,
    IID_ORIONSBOLT,
    IID_ELYSIANWHIP,
    IID_GUIDINGRING,
    0,
};

const u16 ConsumableItems[] = {
    IID_CHESTKEY,
    IID_DOORKEY,
    // IID_BRIDGEKEY,
    IID_LOCKPICK,
    IID_VULNERARY,
    IID_ELIXIR,
    IID_PUREWATER,
    IID_TORCH,
    IID_ANTITOXIN,
    0,
};

const u16 ShieldItems[] = {
    IID_DELPHISHIELD,
    0,
};

// shop rotates as chapters progress
const struct Shop ChapterPrepShops[] = {
    {SHOP_TYPE_ARMORY, NULL},
    {SHOP_TYPE_ARMORY, RankEWeapons},
    {SHOP_TYPE_VENDOR, ConsumableItems},
    {SHOP_TYPE_ARMORY, RankDWeapons},
    {SHOP_TYPE_ARMORY, RankCWeapons},
    {SHOP_TYPE_ARMORY, DragonStones},
    {SHOP_TYPE_ARMORY, RankBWeapons},
    {SHOP_TYPE_ARMORY, RankAWeapons},
    {SHOP_TYPE_SECRET_SHOP, DopingItems},
    {SHOP_TYPE_ARMORY, RankSWeapons},
    {SHOP_TYPE_VENDOR, CCItems},
    {SHOP_TYPE_ARMORY, PoisonWeapons},
    {SHOP_TYPE_SECRET_SHOP, ShieldItems},
};

void StartShopScreen(struct Unit * unit, const u16 * inventory, u8 shopType, ProcPtr parent);

void StartDefaultArmoryScreenNew(struct Unit * unit, ProcPtr proc)
{
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    int shop = IsChapterNew(chapter) ? (chapter - CHAPTER_CH_1st_Prep) % ARRAY_COUNT(ChapterPrepShops) : 0;

    StartShopScreen(unit, ChapterPrepShops[shop].shopItems, ChapterPrepShops[shop].shopType, proc);
}

void StartDefaultArmoryScreenOld(struct Unit * unit, ProcPtr proc)
{
    StartDefaultArmoryScreenNew(unit, proc);
}

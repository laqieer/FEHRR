#pragma once

#include "prelude.h"
#include "proc.h"
#include "unit.h"

struct UnitListScreenSpritesProc;

struct UnitListScreenProc
{
    /* 00 */ PROC_HEADER;
    /* 29 */ u8 unk_29;
    /* 2A */ u8 unk_2A;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 unk_2C;
    /* 2D */ u8 unk_2D;
    /* 2E */ u8 unk_2E;
    /* 2F */ u8 page;
    /* 30 */ u8 unk_30;
    /* 31 */ u8 unk_31;
    /* 32 */ u8 sort_key;
    /* 33 */ u8 target_sort_order; // idk which is which actually
    /* 34 */ u8 sort_order;
    /* 35 */ u8 unk_35;
    /* 36 */ u8 page_target;
    /* 37 */ u8 unk_37;
    /* 38 */ u8 unk_38;
    /* 39 */ u8 mode;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 unk_3B;
    /* 3C */ u8 unk_3C;
    /* 3D */ STRUCT_PAD(0x3D, 0x3E);
    /* 3E */ u16 unk_3E;
    /* 40 */ u16 unk_40;
    /* 42 */ STRUCT_PAD(0x42, 0x44);
    /* 44 */ struct UnitListScreenSpritesProc * sprites_proc;
    /* 48 */ ProcPtr unk_48;
};

void func_fe6_08076448(struct UnitListScreenProc * proc, fu8 unit_num, u16 * tm, fu8 page, bool put_name);

struct UnitListScreenSpritesProc
{
    /* 00 */ PROC_HEADER;
    /* 2C */ struct UnitListScreenProc * main_proc;
    /* 30 */ u8 unk_30;
    /* 34 */ ProcPtr unk_34;
    /* 38 */ u16 unk_38;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 unk_3B;
    /* 3C */ u8 unk_3C;
};

struct SortedUnitEnt
{
    /* 00 */ struct Unit * unit;
    /* 04 */ i16 battle_attack;
    /* 06 */ i16 battle_hit;
    /* 08 */ i16 battle_avoid;
    /* 0A */ u8 support_talk_count;
};

extern struct SortedUnitEnt gSortedUnitsBuf[];
extern struct SortedUnitEnt * gSortedUnits[];

extern struct Text gUnk_0200D6AC;
extern struct Unit gUnk_0200D6B4[];
extern u8 gUnk_0200CD38;
extern u32 gUnk_0200E6B4[]; // equipped item icons

extern u8 CONST_DATA gUnk_08678722[];

extern u16 const * CONST_DATA gUnk_08678744[3];

struct UnitListScreenField
{
    /* 00 */ u8 sort_key;
    /* 01 */ STRUCT_PAD(0x01, 0x04);
    /* 04 */ char const * label_string;
    /* 08 */ u8 x_column;
    /* 09 */ STRUCT_PAD(0x09, 0x0C);
    /* 0C */ u32 msg_help;
};

extern struct UnitListScreenField UnitListPageFields[][9];

extern u16 CONST_DATA Sprite_08678750[]; // sprite
extern u16 const * CONST_DATA gUnk_08678818[]; // sprites
extern u16 CONST_DATA Sprite_08678758[]; // sprite
extern u16 CONST_DATA Sprite_08678760[]; // sprite

struct Unk_02016874
{
    /* 00 */ u16 unk_00[8]; // 0x10
    /* 10 */ u16 unk_10; // this is part of unk_00
};

extern struct Unk_02016874 gUnk_02016874;

extern u8 const gUnk_083198CC[]; // img
extern u16 const Pal_SpinningArrow[]; // pal
extern u8 const gUnk_083215B8[]; // img
extern u16 const gUnk_08321EE4[]; // pal
extern u8 const gUnk_083210A0[]; // tsa
extern u16 const gUnk_08320EEC[]; // tm
extern u8 const gUnk_0831B0A8[]; // img
extern u16 const gUnk_08320D98[]; // pal

extern struct Text gUnk_0200D5BC[];
extern struct Text gUnk_0200D5F4[][3];
extern struct Text gUnk_0200D69C;
extern struct Text gUnk_0200D6A4;
extern struct Text gUnk_0200D6AC;

extern const struct ProcScr ProcScr_UnitListScreenSprites[];

enum
{
    BGPAL_UNITLIST_10 = 10, // ..13
    BGPAL_UNITLIST_15 = 15,
};

enum
{
    OBCHR_UNITLIST_240 = 0x240,
    OBCHR_UNITLIST_390 = 0x390,
};

enum
{
    OBPAL_UNITLIST_1 = 1, // ..4
    OBPAL_UNITLIST_9 = 9,
};

extern u16 gUnk_0200CD3A[]; // tm
extern u16 gUnk_0200D53A[]; // tm

extern const u8 gUnk_0867871C[];

void func_fe6_080742D0(fu8 sort_key);
void func_fe6_08074558(struct UnitListScreenProc * proc, fi8 arg_1);

void func_fe6_08075338(struct UnitListScreenProc * proc);
void func_fe6_08075570(struct UnitListScreenProc * proc);
void func_fe6_08075D34(struct UnitListScreenProc * proc);
void func_fe6_08075DF8(struct UnitListScreenProc * proc);
void func_fe6_08075E94(struct UnitListScreenProc * proc);
void func_fe6_08076060(struct UnitListScreenProc * proc);
void func_fe6_08074778(struct UnitListScreenProc * proc);
void func_fe6_08074804(struct UnitListScreenProc * proc);
void func_fe6_08074830(struct UnitListScreenProc * proc);

void StartEnemyListScreen(void);

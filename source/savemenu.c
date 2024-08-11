#include "savemenu.h"


#include "gbaio.h"
#include "armfunc.h"
#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "sprite.h"
#include "spriteanim.h"
#include "gamecontroller.h"
#include "util.h"
#include "helpbox.h"
#include "save_core.h"
#include "save_game.h"

#include "constants/songs.h"
#include "constants/msg.h"

#include "constants/videoalloc_global.h"

#include "textNew.h"

#include "gfx_misc.h"

extern u16 const gUnk_083278AC[]; // pal x2
extern u8 const gUnk_083278EC[]; // tsa
extern u16 const gUnk_0832BDE8[]; // pal x8

extern const unsigned int MainSaveMenu_Tiles[]; // lz img
extern const unsigned int ExtraSaveMenu_Tiles[]; // lz img

const unsigned int * const MainSaveMenuTiles[] = {
    [LANGUAGE_JAPANESE] = MainSaveMenu_Tiles,
    [LANGUAGE_ENGLISH] = MainSaveMenu_EN_SoSTiles,
    [LANGUAGE_CHINESE] = MainSaveMenu_CNTiles,
};

const unsigned int * const ExtraSaveMenuTiles[] = {
    [LANGUAGE_JAPANESE] = ExtraSaveMenu_Tiles,
    [LANGUAGE_ENGLISH] = ExtraSaveMenu_EN_SoSTiles,
    [LANGUAGE_CHINESE] = ExtraSaveMenu_CNTiles,
};

struct UnkProc_0868A28C * func_fe6_0808A14C(struct SaveMenuProc * parent);
struct UnkProc_0868A2AC * func_fe6_0808A210(struct SaveMenuProc * parent);
fu8 func_fe6_0808A658(fu8 save_id, bool valid, fi8 direction);
bool func_fe6_0808A6C8(struct SaveMenuProc * proc, int arg_1);
void func_fe6_0808A4B8(struct SaveMenuProc * proc, int arg_1);
void func_fe6_0808A454(char const * string, bool display);
bool func_fe6_0808A79C(struct SaveMenuProc * proc);
bool func_fe6_08088EB8(struct SaveMenuProc * proc, int direction);
void func_fe6_0808A8B4(ProcPtr parent, int arg_1, int arg_2);
void func_fe6_0808B578(fu8 arg_0, ProcPtr parent);
void func_fe6_0808BD58(ProcPtr parent);
void func_fe6_08089550(ProcPtr parent);
void func_fe6_08089564(ProcPtr parent);
void func_fe6_08089578(ProcPtr parent);

extern u16 const gUnk_0832C35C[]; // colors

void SaveMenuOnHBlank(void);
void func_fe6_08088404(struct SaveMenuProc * proc);
void func_fe6_08087CD4(struct SaveMenuProc * proc);

void SaveMenu_PutScreenNew(struct SaveMenuProc * proc)
{
    int i;

    ResetTextFont();
    ApplySystemObjectsGraphics();
    ApplyPalettes(gUnk_083278AC, 2, 2);
    Decompress(Img_MuralBackground, ((void *) VRAM) + GetBgChrOffset(0) + CHR_SIZE * BGCHR_SAVEMENU_0);
    TmApplyTsa(gBg0Tm, gUnk_083278EC, 0);
    ApplyPalettes(gUnk_0832BDE8, 0x11, 8);
    func_fe6_08070E70(OBJ_VRAM0 + CHR_SIZE * OBCHR_SAVEMENU_1C0, OBPAL_SAVEMENU_9);
    func_fe6_080895A0(gUnk_0832C35C, gUnk_Savemenu_02000404, 2);
    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT | BG2_SYNC_BIT | BG3_SYNC_BIT);

    proc->anim_clock = 0;

    gDispIo.win_ct.win0_enable_blend = 1;
    gDispIo.win_ct.win1_enable_blend = 1;

    Decompress(MainSaveMenuTiles[GetLangNew()], OBJ_VRAM0 + 0x1000);

    if (proc->unk_2E == UNK_SAVEMENU_6)
    {
        func_fe6_08070E70(OBJ_VRAM0 + CHR_SIZE * OBCHR_SAVEMENU_1C0, OBPAL_SAVEMENU_9);
    }
    else
    {
        Decompress(ExtraSaveMenuTiles[GetLangNew()], OBJ_VRAM0 + CHR_SIZE * OBCHR_SAVEMENU_1C0);
    }

    if (proc->unk_2E == UNK_SAVEMENU_5)
    {
        if (proc->unk_35 == 1)
        {
            func_fe6_08070E70(OBJ_VRAM0 + CHR_SIZE * OBCHR_SAVEMENU_200, 9);
        }
    }
    else
    {
        if (proc->unk_2E == UNK_SAVEMENU_6)
        {
            proc->unk_2D = L_SAVEMENU_4;
            proc->selected_id = ReadLastGameSaveId();
        }
        else
        {
            proc->unk_2D = L_SAVEMENU_1;
            proc->selected_id = 0;
        }

        proc->unk_2A = 0;
        proc->unk_34 = 0;
        proc->unk_42 = 0;
    }

    proc->unk_36 = 0;
    proc->copy_from_id = UINT8_MAX;
    proc->unk_3D = 1;

    func_fe6_0808A4F0();

    for (i = 0; i < 4; i++)
    {
        SetObjAffineAuto(i, 0, 0x100, 0x100);
    }

    proc->unk_40 = 0x100;
    proc->unk_3F = 0xFF;
    proc->unk_3E = 0;

    gUnk_Savemenu_02000000 = 0;

    SetOnHBlankA(SaveMenuOnHBlank);
}

void SaveMenu_PutScreenOld(struct SaveMenuProc * proc)
{
    SaveMenu_PutScreenNew(proc);
}

void func_fe6_08088B9CNew(struct SaveMenuProc * proc)
{
    proc->unk_2D = L_SAVEMENU_3;
    proc->anim_clock++;

    // TODO: what
    proc->unk_2F = -36 - (((7 * proc->anim_clock * 8 - proc->anim_clock) * 8) - (220 * proc->anim_clock * proc->anim_clock / 14)) / 14;

    if (proc->anim_clock == 14)
    {
        Decompress(ExtraSaveMenuTiles[GetLangNew()], OBJ_VRAM0 + OBCHR_SAVEMENU_1C0 * CHR_SIZE);
        Proc_Break(proc);
    }
}

void func_fe6_08088B9COld(struct SaveMenuProc * proc)
{
    func_fe6_08088B9CNew(proc);
}

void func_fe6_08088F60New(struct SaveMenuProc * proc)
{
    proc->unk_2D = L_SAVEMENU_4;

    if (proc->unk_36 == 0)
    {
        if ((gKeySt->pressed & KEY_DPAD_UP) != 0)
        {
            func_fe6_08088EB8(proc, -1);
        }
        else if ((gKeySt->pressed & KEY_DPAD_DOWN) != 0)
        {
            func_fe6_08088EB8(proc, +1);
        }
    }
    else
    {
        if ((gKeySt->pressed & KEY_DPAD_LEFT) != 0)
        {
            if (proc->unk_36 != 1)
            {
                proc->unk_36 = 1;
                PlaySe(SONG_67);
            }
        }
        else if ((gKeySt->pressed & KEY_DPAD_RIGHT) != 0)
        {
            if (proc->unk_36 != 2)
            {
                proc->unk_36 = 2;
                PlaySe(SONG_67);
            }
        }
    }

    if ((gKeySt->pressed & KEY_BUTTON_A) != 0)
    {
        if (proc->unk_3F == 0xFF)
        {
            ReadGameSave(SAVE_GAME0 + proc->selected_id);
            Proc_Goto(proc, L_SAVEMENU_13);
            PlaySe(SONG_6A);
        }
        else
        {
            if (proc->unk_3E == 0)
            {
                func_fe6_08070E70(OBJ_VRAM0 + CHR_SIZE * 0x200, OBPAL_SAVEMENU_9);
            }

            func_fe6_08088404(proc);
        }
    }
    else if ((gKeySt->pressed & KEY_BUTTON_B) != 0)
    {
        PlaySe(SONG_6B);

        if (proc->unk_36 != 0)
        {
            func_fe6_0808A4B8(proc, 0);
            func_fe6_08087CD4(proc);
        }
        else
        {
            Decompress(ExtraSaveMenuTiles[GetLangNew()], OBJ_VRAM0 + OBCHR_SAVEMENU_1C0 * CHR_SIZE);
            proc->anim_clock = 0;
            Proc_Goto(proc, L_SAVEMENU_12);
        }
    }
}

void func_fe6_08088F60Old(struct SaveMenuProc * proc)
{
    func_fe6_08088F60New(proc);
}

extern u8 gUnk_Sio_0200152C[];
void func_fe6_0803FB84(u8 const * src, u32 dst, int width, int height);

void func_fe6_080410BCNew()
{
    Decompress(MainSaveMenuTiles[GetLangNew()], gUnk_Sio_0200152C);
    func_fe6_0803FB84(gUnk_Sio_0200152C, 0x06016800, 6, 4);
    ApplyPaletteExt(gUnk_0832BDE8, 576, 32);
}

void func_fe6_080410BCOld()
{
    func_fe6_080410BCNew();
}

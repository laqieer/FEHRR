#include "prelude.h"
#include "proc.h"
#include "oam.h"
#include "move.h"
#include "hardware.h"
#include "constants/jids.h"
#include "constants/videoalloc_banim.h"

#include "banim_sprite.h"
#include "banim.h"
#include "banim_ekrbattle.h"
#include "banim_ekrdragon.h"

#include "util.h"
#include "log.h"

void PutManaketeBodyIntro2New(struct ProcEkrDragon * proc)
{
    LZ77UnCompWram(Img_ManaketeBodyIntro2, gSpellAnimBgfx);
    LZ77UnCompWram(Tsa_ManaketeBodyIntro2, gEkrTsaBuffer);
    EfxTmFill(0);

    int x = gEkrDistanceType == EKR_DISTANCE_CLOSE ? 0x23 : 0x1D;

    if (GetAnimPosition(proc->anim) == POS_L)
    {
        EfxTmCpyExtHFlip(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x6, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            gBg3Tm, 0x20,
            0x20, 0x16, -1, -1
        );
    }
    else
    {
        EfxTmCpyExtHFlip(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, EFX_BG_WIDTH - x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x7, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            GetTmOffsetById(3, 15, 0), 0x20,
            30 - 15, 0x16, -1, -1
        );
    }

    RegisterVramMove(gSpellAnimBgfx, CHR_SIZE * BGCHR_EKRDRAGON_400, CHR_SIZE * 0x100);

    EnableBgSync(BG3_SYNC_BIT);
}

void PutManaketeBodyIntro2Old(struct ProcEkrDragon * proc)
{
    PutManaketeBodyIntro2New(proc);
}

void PutManaketeBodyIntro1New(struct ProcEkrDragon * proc)
{
    LZ77UnCompWram(Img_ManaketeBodyIntro1, gSpellAnimBgfx);
    LZ77UnCompWram(Tsa_ManaketeBodyIntro1, gEkrTsaBuffer);
    EfxTmFill(0);

    int x = gEkrDistanceType == EKR_DISTANCE_CLOSE ? 0x21 : 0x1B;

    if (GetAnimPosition(proc->anim) == POS_L)
    {
        EfxTmCpyExtHFlip(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x6, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            gBg3Tm, 0x20,
            0x20, 0x16, -1, -1
        );
    }
    else
    {
        EfxTmCpyExt(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, EFX_BG_WIDTH - x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x7, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            GetTmOffsetById(3, 15, 0), 0x20,
            30 - 15, 0x16, -1, -1
        );
    }

    RegisterVramMove(gSpellAnimBgfx, CHR_SIZE * BGCHR_EKRDRAGON_400, CHR_SIZE * 0x100);

    EnableBgSync(BG3_SYNC_BIT);
}

void PutManaketeBodyIntro1Old(struct ProcEkrDragon * proc)
{
    PutManaketeBodyIntro1New(proc);
}

void PutManaketeBodyStdNew(struct ProcEkrDragon * proc)
{
    LZ77UnCompWram(Img_ManaketeBodyStd, gSpellAnimBgfx);
    LZ77UnCompWram(Tsa_ManaketeBodyStd, gEkrTsaBuffer);
    EfxTmFill(0);

    int x;

    switch (gEkrDistanceType) {
        case EKR_DISTANCE_CLOSE:
            x = 0x21;
            break;

        case EKR_DISTANCE_FAR:
            x = 0x1B;
            break;

        default:
            x = 1;
            break;
    }

    if (GetAnimPosition(proc->anim) == POS_L)
    {
        EfxTmCpyExtHFlip(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x6, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            gBg3Tm, 0x20,
            0x20, 0x16, -1, -1
        );
    }
    else
    {
        EfxTmCpyExt(
            gEkrTsaBuffer, -1,
            EFX_TILEMAP_LOC(gTmB_Banim, EFX_BG_WIDTH - x, 0), EFX_BG_WIDTH,
            0xF, 0x16, 0x7, 0
        );

        EfxTmCpyExt(
            EFX_TILEMAP_LOC(gTmB_Banim, 0x21, 0), EFX_BG_WIDTH,
            GetTmOffsetById(3, 15, 0), 0x20,
            30 - 15, 0x16, -1, -1
        );
    }

    RegisterVramMove(gSpellAnimBgfx, CHR_SIZE * BGCHR_EKRDRAGON_400, CHR_SIZE * 0x100);

    EnableBgSync(BG3_SYNC_BIT);
}

void PutManaketeBodyStdOld(struct ProcEkrDragon * proc)
{
    PutManaketeBodyStdNew(proc);
}

void PutManaketeTotalImgNew(struct ProcEkrDragon * proc)
{
    int pos;

    LZ77UnCompWram(Img_081BE490, gSpellAnimBgfx);
    RegisterVramMove(gSpellAnimBgfx, CHR_SIZE * BGCHR_EKRDRAGON_400, CHR_SIZE * 0x100);
    EfxTmFill(0);

    LZ77UnCompWram(Tsa_081BFA34, gEkrTsaBuffer);

    pos = GetAnimPosition(proc->anim);
    if (pos == POS_L)
    {
        EfxTmCpyBgHFlip(gEkrTsaBuffer, gBg3Tm, 30, 22, 6, pos);

        switch (gEkrDistanceType) {
        case EKR_DISTANCE_CLOSE:
            SetBgOffset(3, 0, 16);
            break;

        case EKR_DISTANCE_FAR:
            EkrDragonMoveBg3(gEkrBgPosition + 48);
            SetBgOffset(3, gEkrBgPosition + 48, 16);

            if (gEkrBgPosition == 0)
            {
                FillBGRect(gBg3Tm, 2, 22, 240, 0);
                FillBGRect(gBg3Tm + 2, 2, 22, 240, 0);
            }
            break;

        case EKR_DISTANCE_FARFAR:
            EkrDragonMoveBg3(16);
            SetBgOffset(3, 16, 16);
            break;
        }
    }
    EnableBgSync(BG3_SYNC_BIT);
}

void PutManaketeTotalImgOld(struct ProcEkrDragon * proc)
{
    PutManaketeTotalImgNew(proc);
}

void EkrDragonTmCpyExtNew(int x)
{
    int _x, tmp1;
    u16 * buf;

    _x = x >> 3;
    tmp1 = 7;

    Debugf("x: %d, _x: %d", x, _x);

    SetBgOffset(3, x & tmp1, 16);

    if (GetEkrDragonStateType() == EDRAGON_TYPE_MANAKETE_R)
    {

        buf = gTmB_Banim + 0x21;

        _x = - 4 - _x;

        EfxTmCpyExt(
            buf,
            EFX_BG_WIDTH,
            GetTmOffsetById(3, 15 + _x, 0),
            0x20, 30 - 15 - _x, 22, -1, -1);
    }
    else
    {
        buf = gTmB_Banim + 0x21 + _x;

        EfxTmCpyExt(
            buf,
            EFX_BG_WIDTH,
            gBg3Tm,
            0x20, 0x20, 22, -1, -1);
    }

    EnableBgSync(BG3_SYNC_BIT);
}

void EkrDragonTmCpyExtOld(int x)
{
    EkrDragonTmCpyExtNew(x);
}

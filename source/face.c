
#include "common.h"
#include "face.h"
#include "faceNew.h"

#include "armfunc.h"
#include "random.h"
#include "hardware.h"
#include "move.h"
#include "oam.h"
#include "proc.h"
#include "sprite.h"
#include "util.h"
#include "bm.h"

#include "constants/videoalloc_global.h"
#include "constants/faces.h"
#include "facesNew.h"
#include "background.h"
#include "backgrounds.h"
#include "event.h"
#include "debugtext.h"
#include "debugtextNew.h"
#include "utilNew.h"

#include "log.h"

#include <stddef.h>

struct TalkSpriteEnt
{
    short chr;
    u16 const * sprite;
};

void UpdateFaceTalk(struct FaceProc * proc);
void Face_OnIdleNew(struct FaceProcNew * proc);
void PutFaceTm(u16 * tm, u8 const * data, int tileref, bool is_flipped);
void FaceChibiSpr_OnIdle(struct FaceProc * proc);
void EndFacePtr(struct GenericProc * proc);
void EndFaceIn8Frames(struct FaceProc * proc);
u8 const * GetFactionFaceImg(int fid);
void ApplyFactionFacePal(int fid, int pal);

extern struct FaceVramEnt const sDefaultFaceConfig[FACE_SLOT_COUNT];

extern struct TalkSpriteEnt const sTalkFrameSpriteTable[];

struct ProcScr const ProcScr_FaceNew[] =
{
    PROC_19, // TODO: PROC_NAME("E_FACE")

    PROC_WHILE_EXISTS(ProcScr_CamMove),
    PROC_SLEEP(1),

    // PROC_REPEAT(Face_OnIdle),
    PROC_REPEAT(Face_OnIdleNew),

    PROC_END,
};

extern u8 const FaceTm_Unk_085C3C18[]; // hackbox

extern u8 const FaceTm_Unk_085C3C92[]; // chibi

extern u16 const Sprite_FaceChibi[];

extern u16 const Sprite_FaceChibi_Flipped[];

extern struct FaceVramEnt sFaceConfig[4];

bool IsNewFace(int fid)
{
    return fid >= FID_NEW && fid < FID_FACTION_CHIBI;
}

struct FaceInfo const * GetFaceInfo(int fid);

struct FaceInfoNew const * GetFaceInfoNew(int fid)
{
    Assert(IsNewFace(fid));
    return &newFaces[fid - FID_NEW];
}

void FixTilesPal(vu16 *tiles, int size, int pal)
{
    for(int i = 0; i < size / 2; i++)
    {
        if(tiles[i] & 0xff)
        {
            tiles[i] += 16 * pal;
        }
        if(tiles[i] >> 8)
        {
            tiles[i] += (16 * pal) << 8;
        }
    }
}

int GetFace_Unk(int fid);

void InitFaces(void);

void SetFaceConfig(struct FaceVramEnt const * config);

int GetFreeFaceSlot(void);

void UpdateFaceTalk(struct FaceProc * proc);

void Face_OnIdle(struct FaceProc * proc);

void Face_OnIdleNew(struct FaceProcNew * proc)
{
    int oam0;

    oam0 = proc->disp & FACE_DISP_BLEND ? OAM0_BLEND : 0;
    oam0 += OAM0_Y(proc->y_disp);

    if (IsNewFace(proc->fid))
        oam0 += OAM0_256COLORS;

    PutSpriteExt(proc->sprite_layer, OAM1_X(proc->x_disp), oam0, proc->sprite, proc->oam2);

    if (!IsNewFace(proc->fid))
        UpdateFaceTalk((struct FaceProc *)proc);
}

struct FaceProc * StartFaceAuto(int fid, int x, int y, int disp);

struct FaceProc * StartFace(int slot, int fid, int x, int y, int disp);

u16 const Sprite_Face128x128[] =
{
    4,
    OAM0_SHAPE_64x64,              OAM1_SIZE_64x64 + OAM1_X(-64), OAM2_CHR(0x00),   // upper left
    OAM0_SHAPE_64x64,              OAM1_SIZE_64x64,               OAM2_CHR(0x10),   // upper right
    OAM0_SHAPE_64x64 + OAM0_Y(64), OAM1_SIZE_64x64 + OAM1_X(-64), OAM2_CHR(0x100),  // lower left
    OAM0_SHAPE_64x64 + OAM0_Y(64), OAM1_SIZE_64x64,               OAM2_CHR(0x110),  // lower right
};

u16 const Sprite_Face128x128_Flipped[] =
{
    4,
    OAM0_SHAPE_64x64,              OAM1_SIZE_64x64 + OAM1_HFLIP + OAM1_X(-64), OAM2_CHR(0x10),   // upper left
    OAM0_SHAPE_64x64,              OAM1_SIZE_64x64 + OAM1_HFLIP,               OAM2_CHR(0x00),   // upper right
    OAM0_SHAPE_64x64 + OAM0_Y(64), OAM1_SIZE_64x64 + OAM1_HFLIP + OAM1_X(-64), OAM2_CHR(0x110),  // lower left
    OAM0_SHAPE_64x64 + OAM0_Y(64), OAM1_SIZE_64x64 + OAM1_HFLIP,               OAM2_CHR(0x100),  // lower right
};

void FaceRefreshSpriteNew(struct FaceProcNew * proc)
{
    proc->sprite = proc->x_disp > DISPLAY_WIDTH / 2 ? Sprite_Face128x128 : Sprite_Face128x128_Flipped;
}

struct FaceProcNew * StartFaceNew(int slot, int fid, int x, int y, int disp)
{
    int oam2Layer;

    struct FaceProcNew * proc;

    if (gFaces[slot] != NULL)
        return NULL;

    if (IsNewFace(fid))
    {
        struct FaceInfoNew const * info = GetFaceInfoNew(fid);

        if (info == NULL || info->img == NULL || info->pal == NULL)
            return NULL;

        sFaceConfig[slot].chr_off = 0x3000;
        sFaceConfig[slot].palid = OBJPAL_FACE_NEW;

        Decompress(info->img, (u8 *) VRAM + 0x10000 + sFaceConfig[slot].chr_off);
        FixTilesPal((vu16 *) (VRAM + 0x10000 + sFaceConfig[slot].chr_off), NEW_FULL_FACE_WIDTH * NEW_FULL_FACE_HEIGHT, sFaceConfig[slot].palid);
        ApplyPalettes(info->pal, 0x10 + sFaceConfig[slot].palid, NEW_FACE_PAL_CNT);
    }
    else
    {
        struct FaceInfo const * info = GetFaceInfo(fid);

        if (info == NULL || info->img == NULL || info->pal == NULL || info->x_mouth == 0 || info->y_mouth == 0)
            return NULL;

        Decompress(info->img, (u8 *) VRAM + 0x10000 + sFaceConfig[slot].chr_off);
        ApplyPalette(info->pal, 0x10 + sFaceConfig[slot].palid);
    }

    proc = SpawnProc(ProcScr_Face, PROC_TREE_5);

    if (proc == NULL)
        return NULL;

    gFaces[slot] = (struct FaceProc *)proc;

    SetFaceDisp((struct FaceProc *)proc, disp);

    if (IsNewFace(fid))
        FaceRefreshSpriteNew(proc);
    else
        FaceRefreshSprite((struct FaceProc *)proc);

    switch (disp & FACE_DISP_HLAYER_MASK)
    {

    case FACE_DISP_HLAYER(FACE_HLAYER_0): oam2Layer = OAM2_LAYER(0); break;
    case FACE_DISP_HLAYER(FACE_HLAYER_1): oam2Layer = OAM2_LAYER(1); break;
    case FACE_DISP_HLAYER(FACE_HLAYER_3): oam2Layer = OAM2_LAYER(3); break;
    default:                              oam2Layer = OAM2_LAYER(2);

    }

    proc->slot = slot;
    proc->sprite_layer = 5;

    proc->x_disp = x;
    proc->y_disp = y;

    proc->oam2 = (sFaceConfig[slot].chr_off / CHR_SIZE) + OAM2_PAL(sFaceConfig[slot].palid) + oam2Layer;

    proc->fid = fid;

    if (IsNewFace(fid))
        return proc;

    struct FaceInfo const * info = GetFaceInfo(fid);

    int xMouthRel = 4 - info->x_mouth;

    proc->x_offset_mouth = proc->disp & FACE_DISP_FLIPPED ? xMouthRel : -xMouthRel;
    proc->x_offset_mouth = proc->x_offset_mouth * 8;

    proc->y_offset_mouth = info->y_mouth * 8;

    proc->talk_frame_clock = 0;
    proc->talk_frame = 0;

    return proc;
}

struct FaceProcNew * StartFaceOld(int slot, int fid, int x, int y, int disp)
{
    return StartFaceNew(slot, fid, x, y, disp);
}

void EndFace(struct FaceProc * proc);

void EndFaceById(int slot);

u32 SetFaceDisp(struct FaceProc * proc, u32 disp);

u32 SetFaceDispById(int slot, u32 disp);

u32 GetFaceDisp(struct FaceProc * proc);

u32 GetFaceDispById(int slot);

void FaceRefreshSprite(struct FaceProc * proc);

// not used?
void UnpackFaceGraphicsNew(int fid, int chr, int pal)
{
    Assert(IsNewFace(fid));

    struct FaceInfoNew const * info = GetFaceInfoNew(fid);

    if (info == NULL || info->img == NULL || info->pal == NULL)
        return;

    Decompress(info->img, (u8 *) VRAM + chr * CHR_SIZE);
    FixTilesPal((vu16 *) (VRAM + chr * CHR_SIZE), NEW_FULL_FACE_WIDTH * NEW_FULL_FACE_HEIGHT, pal);
    // ApplyPalette(info->pal, pal);
    ApplyPalettes(info->pal, pal, NEW_FACE_PAL_CNT);
}

void PutFaceTmNew(u16 * tm, int width, int height, int tileref)
{
    int ix, iy;

    Assert(tm != NULL && width > 0 && height > 0);

    for (iy = 0; iy < height; ++iy)
    {
        for (ix = 0; ix < width; ++ix)
        {
            tm[TM_OFFSET(ix, iy)] = ix + iy * 16 + tileref;
        }
    }
}

// not used?
void PutFullFaceTmNew(u16 * tm, int unused_1, int unused_2, int tileref, bool is_flipped)
{
    PutFaceTmNew(tm, NEW_FULL_FACE_WIDTH / 8, NEW_FULL_FACE_HEIGHT / 8, tileref);
}

void func_fe6_08008874(u16 * tm, int tileref);

void UnpackFaceChibiGraphics(int fid, int chr, int pal);

void UnpackFaceChibiGraphicsNew(int fid, int chr, int pal)
{
    Assert(IsNewFace(fid));

    struct FaceInfoNew const * info = GetFaceInfoNew(fid);

    if (info == NULL || info->img_chibi == NULL || info->pal_chibi == NULL)
        return;

    RegisterVramMove(info->img_chibi, VRAM + chr * CHR_SIZE, 0x10 * CHR_SIZE);
    // Decompress(info->img_chibi, (u8 *) VRAM + chr * CHR_SIZE); // if compressed
    ApplyPalette(info->pal_chibi, pal);
}

void PutFaceChibiNew(int fid, u16 * tm, int chr, int pal, bool is_flipped)
{
    if (IsNewFace(fid))
        UnpackFaceChibiGraphicsNew(fid, chr, pal);
    else
        UnpackFaceChibiGraphics(fid, chr, pal);

    chr &= 0x3FF;
    PutFaceTm(tm, FaceTm_Unk_085C3C92, TILEREF(chr, pal), is_flipped);
}

void PutFaceChibiOld(int fid, u16 * tm, int chr, int pal, bool is_flipped)
{
    PutFaceChibiNew(fid, tm, chr, pal, is_flipped);
}

void UnpackFaceChibiSprGraphicsNew(int fid, int chr, int pal)
{
    chr += 0x800; // chr relative to obj chr base

    if (IsNewFace(fid))
    {
        struct FaceInfoNew const * info = GetFaceInfoNew(fid);

        if (info == NULL || info->img_chibi == NULL || info->pal_chibi == NULL)
            return;

        // it doesn't work if compressed
        RegisterVramMove(info->img_chibi + CHR_SIZE * 0,  (chr + 0x00) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 4,  (chr + 0x20) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 8,  (chr + 0x04) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 12, (chr + 0x24) * CHR_SIZE, 4 * CHR_SIZE);

        ApplyPalette(info->pal_chibi, 0x10 + pal);

        return;
    }

    if (fid >= FID_FACTION_CHIBI)
    {
        RegisterVramMove(GetFactionFaceImg(fid) + CHR_SIZE * 0,  (chr + 0x00) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(GetFactionFaceImg(fid) + CHR_SIZE * 4,  (chr + 0x20) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(GetFactionFaceImg(fid) + CHR_SIZE * 8,  (chr + 0x04) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(GetFactionFaceImg(fid) + CHR_SIZE * 12, (chr + 0x24) * CHR_SIZE, 4 * CHR_SIZE);

        ApplyFactionFacePal(fid, 0x10 + pal);
    }
    else
    {
        struct FaceInfo const * info = GetFaceInfo(fid);

        if (info == NULL || info->img_chibi == NULL || info->pal == NULL)
            return;

        RegisterVramMove(info->img_chibi + CHR_SIZE * 0,  (chr + 0x00) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 4,  (chr + 0x20) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 8,  (chr + 0x04) * CHR_SIZE, 4 * CHR_SIZE);
        RegisterVramMove(info->img_chibi + CHR_SIZE * 12, (chr + 0x24) * CHR_SIZE, 4 * CHR_SIZE);

        ApplyPalette(info->pal, 0x10 + pal);
    }
}

void UnpackFaceChibiSprGraphicsOld(int fid, int chr, int pal)
{
    UnpackFaceChibiSprGraphicsNew(fid, chr, pal);
}

extern vu16 BG2CNTBuffer;

void PutFace80x72New(u16 * tm, int fid, int chr, int pal) // hackbox
{
    if (fid == 0)
        return;

    if (IsNewFace(fid))
    {
        pal = BGPAL_FACE_NEW;

        struct FaceInfoNew const * info = GetFaceInfoNew(fid);

        if (info == NULL || info->img == NULL || info->pal == NULL)
            return;

        Decompress(info->img, (u8 *) VRAM + chr * CHR_SIZE);

        if (fid <= FID_LAST || (info->img_chibi != NULL && info->pal_chibi != NULL))
        {
            FixTilesPal((vu16 *) (VRAM + chr * CHR_SIZE), NEW_FULL_FACE_WIDTH * NEW_FULL_FACE_HEIGHT, pal);
            ApplyPalettes(info->pal, pal, NEW_FACE_PAL_CNT);
            PutFaceTmNew(tm, 10, 9, chr / 2 + 16 * info->y_box + info->x_box + (NEW_FULL_FACE_WIDTH - 80) / 2 / 8 - 512);
        }
        else
        {
            ApplyPalette(info->pal, pal);
            PutAppliedBitmap(tm, (pal << 12) + (chr & 0x3FF), 10, 9);
        }

        SetBgBpp(2, 8);
        EnableBgSyncById(2);

        return;
    }

    struct FaceInfo const * info = GetFaceInfo(fid);

    if (info == NULL || info->img == NULL || info->pal == NULL)
        return;

    Decompress(info->img, (u8 *) VRAM + chr * CHR_SIZE);
    ApplyPalette(info->pal, pal);

    if (info->x_mouth != 0 && info->y_mouth != 0)
    {
        int i;

        TmApplyTsa_t(tm,
            (fid == FID_FAE) ? Tsa_Unk_08101A2C : Tsa_Unk_08101974,
            (pal << 12) + (chr & 0x3FF));

        for (i = 0; i < 6; ++i)
        {
            tm[i * 0x20 + 0] = 0;
            tm[i * 0x20 + 9] = 0;
        }
    }
    else
    {
        PutAppliedBitmap(tm, (pal << 12) + (chr & 0x3FF), 10, 9);
    }

    SetBgBpp(2, 4);
    EnableBgSyncById(2);
}

void PutFace80x72Old(u16 * tm, int fid, int chr, int pal)
{
    PutFace80x72New(tm, fid, chr, pal);
}

void StartFaceFadeInNew(struct FaceProcNew * proc)
{
    if (IsNewFace(proc->fid))
    {
        struct FaceInfoNew const * info = GetFaceInfoNew(proc->fid);

        SetBlackPal(0x10 + sFaceConfig[proc->slot].palid);
        StartPalFade(info->pal, 0x10 + sFaceConfig[proc->slot].palid, 12, proc);

        SetBlackPal(0x10 + sFaceConfig[proc->slot].palid + 1);
        StartPalFade(info->pal + 16, 0x10 + sFaceConfig[proc->slot].palid + 1, 12, proc);

        SetBlackPal(0x10 + sFaceConfig[proc->slot].palid + 2);
        StartPalFade(info->pal + 16 * 2, 0x10 + sFaceConfig[proc->slot].palid + 2, 12, proc);

        SetBlackPal(0x10 + sFaceConfig[proc->slot].palid + 3);
        StartPalFade(info->pal + 16 * 3, 0x10 + sFaceConfig[proc->slot].palid + 3, 12, proc);

        return;
    }

    struct FaceInfo const * info = GetFaceInfo(proc->fid);

    SetBlackPal(0x10 + sFaceConfig[proc->slot].palid);
    StartPalFade(info->pal, 0x10 + sFaceConfig[proc->slot].palid, 12, proc);
}

void StartFaceFadeOutNew(struct FaceProcNew * proc)
{
    if (IsNewFace(proc->fid))
    {
        // struct FaceInfoNew const * info = GetFaceInfoNew(proc->fid);

        StartPalFadeToBlack(0x10 + sFaceConfig[proc->slot].palid, 12, proc);
        StartPalFadeToBlack(0x10 + sFaceConfig[proc->slot].palid + 1, 12, proc);
        StartPalFadeToBlack(0x10 + sFaceConfig[proc->slot].palid + 2, 12, proc);
        StartPalFadeToBlack(0x10 + sFaceConfig[proc->slot].palid + 3, 12, proc);

        EndFaceIn8Frames((struct FaceProc *)proc);

        return;
    }

    // struct FaceInfo const * info = GetFaceInfo(proc->fid);

    StartPalFadeToBlack(0x10 + sFaceConfig[proc->slot].palid, 12, proc);
    EndFaceIn8Frames((struct FaceProc *)proc);
}

const char * GetFaceName(int fid)
{
    return IsNewFace(fid) ? face_names[fid - FID_NEW] : "";
}

bool hasChibiFace(int fid)
{
    return IsNewFace(fid) ? GetFaceInfoNew(fid)->img_chibi : GetFaceInfo(fid)->img_chibi;
}

void PrintFaceDebugInfo(int face_id, int background_id)
{
    DebugInitObj(0, 0);

    DebugPutObjFmt(0, 0, "BG:%d", background_id);
    DebugPutObjStr(0, 8, GetBackgroundName(background_id));
    DebugPutObjFmt(0, 16, "Face:%xh", face_id);
    DebugPutObjStr(0, 24, GetFaceName(face_id));
}

void FaceDebug_OnInit(struct GenericProc * proc)
{
    int face_id = FID_NEW + 1;
    int background_id = BACKGROUND_NEW;

    proc->x = face_id;
    proc->y = background_id;

    PrintFaceDebugInfo(face_id, background_id);

    DisplayBackground(background_id);
    proc->ptr = StartFace(0, face_id, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);
    if (hasChibiFace(face_id))
        StartFaceChibiStr(DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH - 32, 32, face_id, 64, 1, FALSE, proc->ptr);
}

void FaceDebug_OnIdle(struct GenericProc * proc)
{
    int face_id = proc->x;
    int background_id = proc->y;

    if (gKeySt->pressed & KEY_BUTTON_SELECT)
    {
        Proc_Break(proc);
        return;
    }

    if (gKeySt->repeated & KEY_DPAD_UP)
        face_id++;

    if (gKeySt->repeated & KEY_DPAD_DOWN)
        face_id--;

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        face_id += 0x10;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        face_id -= 0x10;

    if (gKeySt->repeated & KEY_BUTTON_R)
        background_id++;

    if (gKeySt->repeated & KEY_BUTTON_L)
        background_id--;

    if (gKeySt->repeated & KEY_BUTTON_A)
        background_id += 10;

    if (gKeySt->repeated & KEY_BUTTON_B)
        background_id -= 10;

    if (face_id <= FID_NEW && proc->x > FID_NEW)
        face_id = FID_LAST_OLD;

    if (face_id > FID_LAST_OLD && proc->x <= FID_LAST_OLD)
        face_id = FID_NEW + 1;

    face_id = max(FID_01, min(face_id, FID_LAST));

    if (background_id < BACKGROUND_0)
        background_id = BACKGROUND_LAST;

    if (background_id > BACKGROUND_LAST)
        background_id = BACKGROUND_0;

    PrintFaceDebugInfo(face_id, background_id);

    if (face_id != proc->x || background_id != proc->y)
    {

        if (background_id != proc->y)
            DisplayBackground(background_id);

        // DisplayBackground will clear face so we always need to redraw it
        // if (face_id != proc->x)
        {
            EndFaceChibiSpr();
            EndFace(proc->ptr);
            proc->ptr = StartFace(0, face_id, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - (IsNewFace(face_id) ? NEW_FULL_FACE_HEIGHT : OLD_FULL_FACE_HEIGHT), FACE_96x80);
            if (hasChibiFace(face_id))
                StartFaceChibiStr(DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH - 32, 32, face_id, 64, 1, FALSE, proc->ptr);
        }

        proc->x = face_id;
        proc->y = background_id;
    }
}

struct ProcScr const ProcScr_FaceDebug[] =
{
    PROC_CALL(LockGame),
    PROC_SLEEP(1),

    PROC_CALL(FaceDebug_OnInit),
    PROC_REPEAT(FaceDebug_OnIdle),

    PROC_CALL(UnlockGame),
    PROC_END,
};

void StartFaceDebug(void)
{
    SpawnProc(ProcScr_FaceDebug, PROC_TREE_3);
}

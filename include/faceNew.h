#pragma once

#include <gba_types.h>

struct FaceInfoNew
{
    /* 00 */ u8 const * img;
    /* 04 */ u8 const * img_chibi;
    /* 08 */ u16 const * pal;
    /* 0C */ u8 x_mouth, y_mouth;
    /* 0E */ u8 x_box, y_box; // position of 80x72 hackbox
    /* 10 */ u16 const * pal_chibi;
};

struct FaceProcNew
{
    /* 00 */ PROC_HEADER;

    /* 29 */ // pad
    /* 2A */ u16 disp;
    /* 2C */ i8 slot;
    /* 2D */ i8 sprite_layer;
    /* 2E */ short x_disp;
    /* 30 */ short y_disp;
    /* 32 */ short x_offset_mouth;
    /* 34 */ short y_offset_mouth;
    /* 36 */ i8 talk_frame;
    /* 37 */ i8 talk_frame_clock;
    /* 38 */ u16 oam2;
    /* 3A */ // pad
    /* 3C */ u16 const * sprite;
    /* 40 */ u16 fid;
};

enum { NEW_FACE_PAL_CNT = 4 };

enum {
    OBJPAL_FACE_NEW = 6,
    BGPAL_FACE_NEW = 10,
};

enum { FID_LAST_OLD = 0xE6 };

#define NEW_FULL_FACE_WIDTH 128
#define NEW_FULL_FACE_HEIGHT 128
#define OLD_FULL_FACE_WIDTH 96
#define OLD_FULL_FACE_HEIGHT 80

void StartFaceFadeInNew(struct FaceProcNew * proc);
void StartFaceFadeOutNew(struct FaceProcNew * proc);

bool IsNewFace(int fid);
const char * GetFaceName(int fid);
bool hasChibiFace(int fid);
void StartFaceDebug(void);

extern const struct FaceInfoNew newFaces[];
extern const char * const face_names[];

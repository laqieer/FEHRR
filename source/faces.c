#include "face.h"
#include "faceNew.h"
#include "facesNew.h"
#include "all_gfx.h"

#include <stddef.h>

const struct FaceInfoNew newFaces[] = {
    [0] = {
        .img = NULL,
        .img_chibi = NULL,
        .pal = NULL,
        .x_mouth = 0,
        .y_mouth = 0,
        .x_box = 0,
        .y_box = 0,
        .pal_chibi = NULL
    },

    [FID_ANNA - FID_NEW] = {
        .img = ch00_03_Anna_F_Normal_FaceTiles,
        .img_chibi = ch00_03_Anna_F_Normal_Face_FCTiles,
        .pal = ch00_03_Anna_F_Normal_FacePal,
        .x_mouth = 0,
        .y_mouth = 0,
        .x_box = 3,
        .y_box = 0,
        .pal_chibi = ch00_03_Anna_F_Normal_Face_FCPal,
    },

};

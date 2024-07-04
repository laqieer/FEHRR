#include "helpbox.h"

#include "hardware.h"
#include "oam.h"
#include "sound.h"
#include "sprite.h"
#include "msg.h"
#include "util.h"
#include "item.h"
#include "chapter.h"
#include "chapterinfo.h"
#include "ui.h"

#include "constants/videoalloc_global.h"
#include "constants/songs.h"

#include "log.h"
#include "utilNew.h"
#include "faceNew.h"

extern struct HelpBoxInfo gMutableHelpBoxInfo;
extern struct HelpBoxInfo const * gLastHelpBoxInfo;
extern struct Vec2i gHelpBoxOrigin;

void ApplyHelpBoxContentSizeNew(struct HelpBoxProc * proc, int w_inner, int h_inner)
{
    Debugf("w_inner: %d, h_inner: %d", w_inner, h_inner);

    w_inner = 0x1E0 & (w_inner + 31); // align to 32 pixel multiple
    h_inner = min(h_inner, 0x10 * 3); // no more than 3 lines

    switch (func_fe6_08070B30(proc->item))
    {

    case HELPBOX_INFO_WEAPON:
        w_inner = 0xA0;
        h_inner += 0x20;
        break;

    case HELPBOX_INFO_STAFF:
        if (w_inner < 0x60)
            w_inner = 0x60;
        h_inner += 0x10;
        break;

    }

    proc->w_box_fini = w_inner;
    proc->h_box_fini = h_inner;

    Debugf("proc->w_box_fini: %d, proc->h_box_fini: %d", proc->w_box_fini, proc->h_box_fini);
}

void ApplyHelpBoxContentSizeOld(struct HelpBoxProc * proc, int w_inner, int h_inner)
{
    ApplyHelpBoxContentSizeNew(proc, w_inner, h_inner);
}

void ApplyHelpBoxPositionNew(struct HelpBoxProc * proc, int x, int y)
{
    Debugf("x: %d, y: %d", x, y);

    int x_span = proc->w_box_fini + 0x10;
    int y_span = proc->h_box_fini + 0x10;

    x += gHelpBoxOrigin.x * 8;
    y += gHelpBoxOrigin.y * 8;

    proc->x_box_fini = x - 0x10 - x_span / 6;

    if (proc->x_box_fini + x_span > DISPLAY_WIDTH)
        proc->x_box_fini = DISPLAY_WIDTH - x_span;

    if (proc->x_box_fini < 0)
        proc->x_box_fini = 0;

    proc->y_box_fini = y + 0x10;

    if (proc->y_box_fini + y_span > DISPLAY_HEIGHT)
        proc->y_box_fini = y - y_span;

    proc->x_box_fini += 8;
    proc->y_box_fini += 8;

    Debugf("proc->x_box_fini: %d, proc->y_box_fini: %d", proc->x_box_fini, proc->y_box_fini);
}

void ApplyHelpBoxPositionOld(struct HelpBoxProc * proc, int x, int y)
{
    ApplyHelpBoxPositionNew(proc, x, y);
}

const struct ProcScr ClearNewFaceWhenOpenHelpBox = PROC_CALL(ClearNewFace);

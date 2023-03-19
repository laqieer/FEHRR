#include "debugtext.h"

#include <stdarg.h>
#include <stdio.h>

#include "hardware.h"
#include "move.h"
#include "oam.h"
#include "ramfunc.h"
#include "sprite.h"

#include "constants/videoalloc_global.h"

extern const u8 Img_DebugFont[];

struct DebugTextSt
{
    /* 00 */ int vramOffset;
    /* 04 */ short bg;
    /* 06 */ u16 chr;

    /* 08 */ int hcur;
    /* 0C */ u32 vcur;
    /* 10 */ u32 vdisp;

    /* 14 */ char screen[256][32];
};

extern struct DebugTextSt sDebugTextSt;

extern char gNumberStr[9];

extern int sDebugOam2Chr;
extern int sDebugOam2Pal;

void DebugPutFmtNew(u16 * tm, char const * fmt, ...)
{
    char buffer[0x100];
    va_list args;

    va_start(args, fmt);
    vsprintf(buffer, fmt, args);
    va_end(args);

    DebugPutStr(tm, buffer);
}

void DebugPrintFmtNew(char const * fmt, ...)
{
    char buffer[0x100];
    va_list args;

    va_start(args, fmt);
    vsprintf(buffer, fmt, args);
    va_end(args);

    DebugPrintStr(buffer);
}

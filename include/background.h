#pragma once

#include <gba_types.h>

struct BackgroundEnt
{
    u8 const * img;
    u8 const * tsa;
    u16 const * pal;
};

extern struct BackgroundEnt const gBackgroundTable[];

struct BackgroundEntNew
{
    u8 const * img1;
    u8 const * img2;
    u16 const * pal;
};

extern struct BackgroundEntNew const newBackgrounds[];

#define BackgroundWidth 32
#define BackgroundHeightImg1 16
#define BackgroundHeightImg2 4

#define BgChrOffsetImg2 0x2800

extern const char * const background_names[];
const char * GetBackgroundName(int background_id);

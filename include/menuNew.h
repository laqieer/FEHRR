#pragma once

struct MapDebugMenuEntProc
{
    /* 00 */ PROC_HEADER;
    /* 2A */ i16 x;
    /* 2C */ i16 y;
    /* 30 */ struct MenuEntInfo const * info;
    /* 34 */ struct Text text;
    /* 3C */ i8 id;
    /* 3D */ u8 availability;
    /* 3E */ u16 mapId;
};

extern struct MenuInfo const MenuInfo_MapNew;

void StartMenu_Debug_StartUp(void);

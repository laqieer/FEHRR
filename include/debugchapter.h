#pragma once

#include "chapterinfo.h"
#include "unit.h"

#define DEBUG_CHAPTER_TITLE_MSG_ID 3786

#define DEBUG_BLUE_UNIT_LEVEL 20
#define DEBUG_BLUE_UNIT_AUTOLEVEL TRUE
#define DEBUG_RED_UNIT_LEVEL 20
#define DEBUG_RED_UNIT_AUTOLEVEL TRUE

extern const u8 DebugChapterMap[];
extern const struct ChapterEventInfo DebugChapterEvent;
extern const struct UnitInfo DebugBlueUnits[];
extern const unsigned int DebugChapterMapGraphic[];
extern const unsigned short DebugChapterMapPalette[];
extern const uint8_t DebugChapterMapTileset[];
extern const u8 DebugChapterMapGraphicAnimation[];

extern const EventScr DummyEvent[];

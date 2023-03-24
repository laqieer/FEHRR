#include "chapterinfo.h"
#include "chapterNew.h"

#include "hardware.h"
#include "msg.h"
#include "save_xmap.h"
#include "gbasram.h"

#include "constants/chapters.h"

bool IsChapterNew(int chapter)
{
    return chapter != CHAPTER_CH_NULL && chapter >= CHAPTER_CH_NEW;
}

struct ChapterInfo const * GetChapterInfoNew(int chapter)
{
    if (chapter == CHAPTER_CH_NULL)
        return gExtraMapInfo->chapter_info;

    return IsChapterNew(chapter) ? &newChapters[chapter - CHAPTER_CH_NEW] : ChapterInfoTable + chapter;
}

struct ChapterInfo const * GetChapterInfoOld(int chapter)
{
    return GetChapterInfoNew(chapter);
}

u8 const * GetChapterMapNew(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return ChapterAssets[GetChapterInfoNew(chapter)->asset_map];

    ReadSramFast(GetExtraMapMapReadAddr(), gBuf, GetExtraMapMapSize());
    return gBuf;
}

u8 const * GetChapterMapOld(int chapter)
{
    return GetChapterMapNew(chapter);
}

struct MapChangeInfo const * GetChapterMapChangesNew(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return ChapterAssets[GetChapterInfoNew(chapter)->asset_map_changes];

    return gExtraMapInfo->map_change_info;
}

struct MapChangeInfo const * GetChapterMapChangesOld(int chapter)
{
    return GetChapterMapChangesNew(chapter);
}

struct ChapterEventInfo const * GetChapterEventInfoNew(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return ChapterAssets[GetChapterInfoNew(chapter)->asset_event_info];

    return gExtraMapInfo->event_info;
}

struct ChapterEventInfo const * GetChapterEventInfoOld(int chapter)
{
    return GetChapterEventInfoNew(chapter);
}

char const * GetChapterUnk_0802BBD0New(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return DecodeMsg(GetChapterInfoNew(chapter)->msg_38);

    return gExtraMapInfo->msg_0C;
}

char const * GetChapterUnk_0802BBD0Old(int chapter)
{
    return GetChapterUnk_0802BBD0New(chapter);
}

#include "constants/chapters.h"
#include "chapterinfo.h"
#include "chapterNew.h"
#include "chapters.h"

#include "hardware.h"
#include "msg.h"
#include "save_xmap.h"
#include "gbasram.h"

bool IsChapterNew(int chapter)
{
    return chapter != CHAPTER_CH_NULL && chapter >= CHAPTER_CH_NEW;
}

struct ChapterInfo const * GetChapterInfoNew(int chapter)
{
    if (chapter == CHAPTER_CH_NULL)
        return gExtraMapInfo->chapter_info;

    return IsChapterNew(chapter) ? (struct ChapterInfo const * )&newChapters[chapter - CHAPTER_CH_NEW] : ChapterInfoTable + chapter;
}

struct ChapterInfo const * GetChapterInfoOld(int chapter)
{
    return GetChapterInfoNew(chapter);
}

u8 const * GetChapterMapNew(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return IsChapterNew(chapter) ? (chapter == CHAPTER_CH_S0000 ? ChapterMaps[CHAPTER_CH_S0000 - CHAPTER_CH_NEW] : ChapterMaps[CHAPTER_CH_S0001 - CHAPTER_CH_NEW]) : ChapterAssets[GetChapterInfoNew(chapter)->asset_map];

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
        return IsChapterNew(chapter) ? ChapterMapChanges[chapter - CHAPTER_CH_NEW] : ChapterAssets[GetChapterInfoNew(chapter)->asset_map_changes];

    return gExtraMapInfo->map_change_info;
}

struct MapChangeInfo const * GetChapterMapChangesOld(int chapter)
{
    return GetChapterMapChangesNew(chapter);
}

struct ChapterEventInfo const * GetChapterEventInfoNew(int chapter)
{
    if (chapter != CHAPTER_CH_NULL)
        return IsChapterNew(chapter) ? ChapterEvents[chapter - CHAPTER_CH_NEW] : ChapterAssets[GetChapterInfoNew(chapter)->asset_event_info];

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

int GetChapterNumber(int chapter)
{
    if(IsChapterNew(chapter))
        return (chapter - CHAPTER_CH_NEW) * 2;
    return GetChapterInfo(chapter)->number_id;
}

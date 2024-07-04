#include "prelude.h"

#include "chapterinfo.h"
#include "event.h"

#include "bmNew.h"
#include "chapterNew.h"

void StartWorldMapIntroScenNew()
{
    int chapter = GetChapterInPlaySt(&gPlayStNew);
    if (IsChapterNew(chapter) || chapter == CHAPTER_CH_NULL)
        return;

    EventScr const * wmEvent = ChapterAssets[((const struct ChapterInfoNew *)GetChapterInfo(chapter))->asset_wm_event_info];
    if (wmEvent)
    {
        StartEvent(wmEvent);
    }
}

void StartWorldMapIntroScenOld()
{
    StartWorldMapIntroScenNew();
}

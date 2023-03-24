#pragma once

#define CHAPTER_CH_NEW CHAPTER_COUNT
#define CHAPTER_CH_1st CHAPTER_CH_NEW
#define CHAPTER_CH_NULL 0xFFFF

bool IsChapterNew(int chapter);

extern struct ChapterInfo const newChapters[];

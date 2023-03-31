#include "common.h"

#include "save_game.h"
#include "helpbox.h"
#include "oam.h"
#include "spriteanim.h"
#include "chapterNew.h"
#include "log.h"

#define SAVE_SLOT_NUM 3

extern u8 gSavedChapterFlags[SAVE_SLOT_NUM];

extern u16 const gUnk_0832C39C[];

void func_fe6_08070D48(int chr);
void func_fe6_0808A418(ProcPtr proc);

struct SaveScreenProc
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 unk_29;
    /* 2A */ u8 unk_2A;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 unk_2C[0x37 - 0x2C];
    /* 37 */ u8 chapterTitleId[SAVE_SLOT_NUM];
    /* 3A */ u8 isChapterCompleted[SAVE_SLOT_NUM];
    /* 3D */ u8 unk_38[0x3F - 0x3D];
    /* 3F */ u8 suspendSaveId;
    /* 40 */ u16 action;
    /* 42 */ u8 unk_42[0x44 - 0x42];
    /* 44 */ u32 chapterTimeSaved[SAVE_SLOT_NUM];
    /* 50 */ u32 suspendChapterTimeSaved;
    /* 54 */ u8 unk_54[0x5C - 0x54];
    /* 5C */ ProcPtr unk_5C;
    /* 60 */ u8 unk_60[0x66 - 0x60];
    /* 66 */ u16 chapterTitleIdNew[SAVE_SLOT_NUM];
};

struct SaveScreenChildProc;

struct SaveScreenChildProc
{                                                                       \
    struct ProcScr const * proc_script; /* pointer to proc script */                           \
    struct ProcScr const * proc_script_pc; /* pointer to currently executing script command */ \
    ProcFunc proc_end_func; /* callback to run upon delegint the process */                   \
    ProcFunc proc_repeat_func; /* callback to run once each frame. */                         \
                          /* disables script execution when not null */                       \
    char const * proc_name;                                                                    \
    struct SaveScreenProc * proc_parent; /* pointer to parent proc. If this proc is a root proc, */           \
                         /* this member is an integer which is the root index. */             \
    ProcPtr proc_child; /* pointer to most recently added child */                            \
    ProcPtr proc_next; /* next sibling */                                                     \
    ProcPtr proc_prev; /* previous sibling */                                                 \
    i16 proc_sleep_clock;                                                                     \
    u8 proc_mark;                                                                             \
    u8 proc_flags;                                                                            \
    u8 proc_lock_cnt; /* wait semaphore. Process execution */                                 \
                      /* is blocked when this is nonzero. */                                  \

    /* 29 */ u8 unk_29;
    /* 2A */ u16 unk_2A;
    /* 2C */ u16 unk_2C;
    /* 2E */ u16 unk_2E;
    /* 30 */ u16 unk_30;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 unk_33;
    /* 34 */ struct SaveScreenChildProc * unk_34;
    /* 38 */ u8 unk_38;
    /* 39 */ u8 unk_39;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 unk_3B;
    /* 3C */ u8 unk_3C;
    /* 3D */ u8 unk_3D[0x6C - 0x3D];
};

void func_fe6_0808A918New(int slot, struct SaveScreenProc *proc)
{
    struct PlaySt playSt;

    if (slot < SAVE_SLOT_NUM) {
        if (!IsSaveValid(slot)) {
            proc->chapterTitleId[slot] = 0xff; // FIXME: Copy Save feature still uses this old field
            proc->chapterTitleIdNew[slot] = CHAPTER_CH_NULL;
            proc->isChapterCompleted[slot] = FALSE;
            proc->chapterTimeSaved[slot] = 0;
            gSavedChapterFlags[slot] = 0;
        }
        else {
            ReadGameSavePlaySt(slot, &playSt);
            // proc->chapterTitleId[slot] = func_fe6_08070E0C(&playSt);
            proc->chapterTitleIdNew[slot] = func_fe6_08070E0C(&playSt);
            proc->chapterTimeSaved[slot] = playSt.time_saved;
            proc->isChapterCompleted[slot] = (playSt.flags & 0x20) != 0;
            gSavedChapterFlags[slot] = playSt.flags;
        }
    }
    else if (proc->action == 0x100) {
        if (!IsValidSuspendSave(3)) {
            proc->action = 0xf0;
        }
        else {
            ReadSuspendSavePlaySt(3, &playSt);
            proc->suspendSaveId = playSt.save_id;
            proc->suspendChapterTimeSaved = playSt.time_saved;
        }
    }
}

void func_fe6_0808A918Old(u8 slot, struct SaveScreenProc *proc)
{
    func_fe6_0808A918New(slot, proc);
}
/*
void func_fe6_080898F0New(struct SaveScreenChildProc *proc)
{
  proc->unk_2C = 0;
  proc->unk_2E = 0x100;
  proc->unk_3A = 0;
  proc->unk_3B = 0x28;
  func_fe6_08070D48(0xac0);

  for (u8 slot = 0; slot < SAVE_SLOT_NUM; slot++) {
    int chapterTitleId = proc->proc_parent->chapterTitleId[slot];
    if (chapterTitleId == 0xff) {
      func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, -1);
    }
    else {
      func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, chapterTitleId);
    }
  }
  proc->unk_30 = 0;
  proc->unk_32 = 0;
  SetObjAffine(0,0x100,0,0,0x100);
  SetObjAffine(1,0x100,0,0,0x100);
  SetObjAffine(2,0x100,0,0,0x100);
  proc->unk_2A = 0;
  func_fe6_0808A418(proc);
  proc->unk_34 = proc;
  proc->unk_39 = 0;
  u8 saveId = proc->proc_parent->suspendSaveId;
  if (saveId == 0xff) {
    proc->proc_parent->unk_5C = NULL;
  }
  else {
    proc->proc_parent->unk_5C = StartSpriteAnimProc(gUnk_0832C39C,0x140,
                             saveId * 0x20 + 0x30,0x1a0,0,4);
  }
  proc->unk_3C = proc->proc_parent->unk_2B;
}

void func_fe6_080898F0Old(struct SaveScreenChildProc *proc)
{
    func_fe6_080898F0New(proc);
}
*/
void func_fe6_080898F0(struct SaveScreenChildProc *proc);

void func_fe6_080898F0New(struct SaveScreenChildProc *proc)
{
    func_fe6_080898F0(proc);

    for (int slot = 0; slot < SAVE_SLOT_NUM; slot++) {
        // int chapterTitleId = proc->proc_parent->chapterTitleId[slot];
        // func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, chapterTitleId == 0xff ? -1 : chapterTitleId);
        int chapterTitleId = proc->proc_parent->chapterTitleIdNew[slot];
        func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, chapterTitleId == CHAPTER_CH_NULL ? -1 : chapterTitleId);
    }
}

void (* const func_fe6_080898F0PtrNew)(struct SaveScreenChildProc *proc) = func_fe6_080898F0New;

void func_fe6_08088870(struct SaveScreenProc *proc);

void func_fe6_08088870New(struct SaveScreenProc *proc)
{
    func_fe6_08088870(proc);

    if (proc->unk_29 == 9) {
        int slot = proc->unk_2B;
        // int chapterTitleId = proc->chapterTitleId[slot];
        // func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, chapterTitleId == 0xff ? -1 : chapterTitleId);
        int chapterTitleId = proc->chapterTitleIdNew[slot];
        func_fe6_08070D08(((slot * 0x800 + 0x16800) & 0x1ffff) >> 5, chapterTitleId == CHAPTER_CH_NULL ? -1 : chapterTitleId);
    }
}

void (* const func_fe6_08088870PtrNew)(struct SaveScreenProc *proc) = func_fe6_08088870New;

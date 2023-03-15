#include "m4a.h"
#include "m4aNew.h"

#include "common.h"

#define MPLAY_JUMP_TABLE_FUNC(n) (*(gMPlayJumpTable + (n)))

extern const u8 gCgb3Vol[];

// m4a_1
extern u32 MulByQ32(u32 multiplier, u32 multiplicand);
extern void SoundMain(void);
extern void SoundMainRam_load(struct SoundInfo * sound_info);
extern void RealClear64byte(void);
extern void RealClearChain(void * x);
extern void MPlayJumpTableCopy(MPlayFunc * mplay_jump_table);
extern void MPlayMain(struct MusicPlayer * music_player);
extern void TrackStop(struct MusicPlayer * music_player, struct MusicPlayerTrack * track);

// m4a
extern void MPlayContinue(struct MusicPlayer * music_player);
extern void FadeOutBody(struct MusicPlayer * music_player);
extern void TrkVolPitSet(struct MusicPlayer * music_player, struct MusicPlayerTrack * track);
extern void MPlayFadeOut(struct MusicPlayer * music_player, u16 speed);
extern void ClearChain(void * x);
extern void Clear64byte(void * addr);
extern void SoundInit(struct SoundInfo * soundInfo);
extern void MPlayExtender(struct CgbChannel * cgb_channels);
extern void MPlayOpen(struct MusicPlayer * music_player, struct MusicPlayerTrack * track, u8 a3);
extern void CgbSound(void);
extern void CgbOscOff(u8);
extern void CgbModVol(struct CgbChannel * chan);
extern u32 MidiKeyToCgbFreq(u8, u8, u8);
extern void DummyFunc(void);
extern void SampleFreqSet(u32 freq);
extern void ClearModM(struct MusicPlayerTrack * track);

// sound command handler functions
extern void ply_fine(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_goto(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_patt(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_pend(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_rept(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_memacc(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_prio(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_tempo(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_keysh(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_voice(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_vol(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_pan(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_bend(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_bendr(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_lfos(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_lfodl(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_mod(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_modt(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_tune(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_port(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xcmd(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_endtie(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_note(u32 note_cmd, struct MusicPlayer *, struct MusicPlayerTrack *);

// extended sound command handler functions
extern void ply_xxx(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xwave(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xtype(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xatta(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xdeca(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xsust(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xrele(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xiecv(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xiecl(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xleng(struct MusicPlayer *, struct MusicPlayerTrack *);
extern void ply_xswee(struct MusicPlayer *, struct MusicPlayerTrack *);

u8 SoundMainRamNew[0xa60] = {0};

extern struct SoundInfo gSoundInfo;

extern MPlayFunc gMPlayJumpTable[36];

extern struct CgbChannel gCgbChans[4];

extern u8 gMPlayMemAccArea[0x10];

typedef void (* XcmdFunc)(struct MusicPlayer *, struct MusicPlayerTrack *);

extern XcmdFunc const gXcmdTable[];

extern MPlayFunc const gMPlayJumpTableTemplate[];
extern u8 const gScaleTable[];
extern u32 const gFreqTable[];
extern u16 const gPcmSamplesPerVBlankTable[];

extern u8 const gCgbScaleTable[];
extern i16 const gCgbFreqTable[];
extern u8 const gNoiseTable[];

extern u8 const gScaleTable[];
extern u32 const gFreqTable[];

extern const u8 gCgb3Vol[];

void SoundMainRAM(struct SoundInfo * sound_info);

void m4aSoundInitNew(void)
{
    int i;

    CpuCopy32(((void *) (((iptr) SoundMainRAM) & ~1)), SoundMainRamNew, sizeof(SoundMainRamNew));

    SoundInit(&gSoundInfo);
    MPlayExtender(gCgbChans);
    m4aSoundMode(SOUND_MODE);

    for (i = 0; i < NUM_MUSIC_PLAYERS_NEW; i++)
    {
        struct MusicPlayer * music_player = gMusicPlayerTable[i].music_player;
        MPlayOpen(music_player, gMusicPlayerTable[i].track, gMusicPlayerTable[i].num_tracks);
        music_player->unk_B = gMusicPlayerTable[i].unk_A;
        music_player->mem_acc_area = gMPlayMemAccArea;
    }
}

void m4aSoundInitOld(void)
{
    m4aSoundInitNew();
}

void (* const pSoundMainRAM)(struct SoundInfo * sound_info) = (void *)(SoundMainRamNew + 1);

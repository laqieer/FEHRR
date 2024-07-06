#include "voice.h"

#include "face.h"
#include "constants/faces.h"
#include "faceNew.h"
#include "proc.h"
#include "bm.h"
#include "hardware.h"
#include "event.h"
#include "debugtext.h"
#include "debugtextNew.h"

#include "utilNew.h"
#include "hero.h"
#include "heroes.h"
#include "backgrounds.h"
#include "bas.h"
#include "battleNew.h"

#include "log.h"

#define VOICE_PRIORITY 0
#define VOICE_NUM (VOICE_STATUS_NUM + VOICE_MAP_NUM + VOICE_ATTACK_NUM + VOICE_DAMAGE_NUM)
#define VOICE_CHOICE_RANGE (VOICE_MAP_NUM * VOICE_ATTACK_NUM)

u8 gVoiceChoice = 0;

const int VoiceChoiceRangesByType[] = {
    VOICE_STATUS_NUM,
    VOICE_MAP_NUM,
    VOICE_ATTACK_NUM,
    VOICE_DAMAGE_NUM,
};

const char * const VoiceTypenames[] = {
    "status",
    "map",
    "attack",
    "damage",
};

const char * GetVoiceTypeName(enum VoiceType type)
{
    return VoiceTypenames[type];
}

int ChooseVoice(int range)
{
    gVoiceChoice = (gVoiceChoice + 1) % VOICE_CHOICE_RANGE;
    return gVoiceChoice % range;
}

int GetVoiceId(int hero_id, int hero_voice_id)
{
    const struct Voice * hero_voice = &hero_voices[hero_id];
    int voice_id = hero_voice->status[hero_voice_id];

    return voice_id;
}

const char * GetVoiceName(int voice_id)
{
    return voice_names[voice_id];
}

void StartVoice(int voice_id)
{
    struct MusicPlayerEnt const * music_player_table = gMusicPlayerTable;
    struct MusicPlayerEnt const * music_player_ent = music_player_table + VOICE_PRIORITY;

    if (voice_id && voices[voice_id])
    {
        Infof("Playing voice %d: %s", voice_id, GetVoiceName(voice_id));
        m4aMPlayStart(music_player_ent->music_player, (struct Song *)voices[voice_id]);
    }
}

void StopVoice(void)
{
    struct MusicPlayerEnt const * music_player_table = gMusicPlayerTable;
    struct MusicPlayerEnt const * music_player_ent = music_player_table + VOICE_PRIORITY;

    m4aMPlayStop(music_player_ent->music_player);
}

void StartHeroVoice(int hero_id, enum VoiceType voice_type)
{
    Debugf("hero_id: %d %s, voice_type: %s", hero_id, GetHeroName(hero_id), GetVoiceTypeName(voice_type));

    if (hero_id == 0 || hero_id >= HERO_NUM)
        return;

    int chosen_voice = ChooseVoice(VoiceChoiceRangesByType[voice_type]);

    switch (voice_type)
    {
        case VOICE_TYPE_STATUS:
            StartVoice(hero_voices[hero_id].status[chosen_voice]);
            break;
        case VOICE_TYPE_MAP:
            StartVoice(hero_voices[hero_id].map[chosen_voice]);
            break;
        case VOICE_TYPE_ATTACK:
            StartVoice(hero_voices[hero_id].attack[chosen_voice]);
            break;
        case VOICE_TYPE_DAMAGE:
            StartVoice(hero_voices[hero_id].damage[chosen_voice]);
            break;
    }
}

void StartUnitVoice(struct Unit *unit, enum VoiceType voice_type)
{
    if (unit == NULL || unit->pinfo == NULL)
        return;

    StartHeroVoice(unit->pinfo->id, voice_type);
}

void VoiceDebug_SetBackground(struct GenericProc * proc)
{
    DisplayBackground(BACKGROUND_0);
}

void PrintCharacterDebugInfo(int hero_id, int hero_voice_id, int level)
{
    DebugScreenInit();

    int chibi_fid = GetPInfo(hero_id)->fid;
    if (!hasChibiFace(chibi_fid))
        chibi_fid = FID_FACTION_CHIBI + GetPInfo(hero_id)->chibi_id;

    PutFaceChibi(chibi_fid, gBg2Tm + TM_OFFSET(0, 4), 0x270, 2, 0);

    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 0), "PID: %d", hero_id);
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 1), GetFaceName(GetPInfo(hero_id)->fid));
    DebugPutStr(gBg2Tm + TM_OFFSET(0, 2), GetVoiceName(GetVoiceId(hero_id, hero_voice_id)));

    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 9), "LV %d", level);
    int hp = GetPInfo(hero_id)->base_hp + GetPInfo(hero_id)->growth_hp * (level - 1) / 100;
    int pow = GetPInfo(hero_id)->base_pow + GetPInfo(hero_id)->growth_pow * (level - 1) / 100;
    int spd = GetPInfo(hero_id)->base_spd + GetPInfo(hero_id)->growth_spd * (level - 1) / 100;
    int def = GetPInfo(hero_id)->base_def + GetPInfo(hero_id)->growth_def * (level - 1) / 100;
    int res = GetPInfo(hero_id)->base_res + GetPInfo(hero_id)->growth_res * (level - 1) / 100;
    int total = hp + pow + spd + def + res;
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 11), "HP  %d", hp);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 12), "POW %d", pow);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 13), "SPD %d", spd);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 14), "DEF %d", def);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 15), "RES %d", res);
    DebugPutFmtNew(gBg2Tm + TM_OFFSET(0, 17), "TOTAL %d", total);
}

void VoiceDebug_OnInit(struct GenericProc * proc)
{
    int hero_id = 1;
    int hero_voice_id = 0;
    int level = 1;

    proc->x = hero_id;
    proc->y = hero_voice_id;
    proc->unk34 = level;

    Infof("hero_id: %d, id_tag: %s", hero_id, GetHeroName(hero_id));
    PrintCharacterDebugInfo(hero_id, hero_voice_id, level);

    StartVoice(GetVoiceId(hero_id, hero_voice_id));
    StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);
}

void VoiceDebug_OnIdle(struct GenericProc * proc)
{
    int hero_id = proc->x;
    int hero_voice_id = proc->y;
    int level = proc->unk34;

    if (gKeySt->pressed & KEY_BUTTON_SELECT)
    {
        Proc_Break(proc);
        return;
    }

    if (gKeySt->repeated & KEY_DPAD_RIGHT)
        hero_id++;

    if (gKeySt->repeated & KEY_DPAD_LEFT)
        hero_id--;

    if (gKeySt->repeated & KEY_BUTTON_R)
        hero_voice_id++;

    if (gKeySt->repeated & KEY_BUTTON_L)
        hero_voice_id--;

    if (gKeySt->repeated & KEY_DPAD_UP)
        level++;

    if (gKeySt->repeated & KEY_DPAD_DOWN)
        level--;

    hero_id = max(1, min(hero_id, HERO_NUM));

    if (hero_voice_id < 0)
        hero_voice_id = VOICE_NUM - 1;

    if (hero_voice_id >= VOICE_NUM)
        hero_voice_id = 0;

    level = max(1, min(level, UNIT_LEVEL_MAX * 2));

    if (hero_id != proc->x)
    {
        Infof("hero_id: %d, id_tag: %s", hero_id, GetHeroName(hero_id));

        proc->x = hero_id;

        EndFaceById(0);
        StartFace(0, GetPInfo(hero_id)->fid, DISPLAY_WIDTH - NEW_FULL_FACE_WIDTH / 2, DISPLAY_HEIGHT - NEW_FULL_FACE_HEIGHT, 0);

        PrintCharacterDebugInfo(hero_id, hero_voice_id, level);
        StartVoice(GetVoiceId(hero_id, hero_voice_id));
        return;
    }

    if (level != proc->unk34)
    {
        proc->unk34 = level;

        PrintCharacterDebugInfo(hero_id, hero_voice_id, level);
    }

    if (hero_voice_id != proc->y)
    {
        proc->y = hero_voice_id;

        PrintCharacterDebugInfo(hero_id, hero_voice_id, level);
        StartVoice(GetVoiceId(hero_id, hero_voice_id));
        return;
    }

    if (gKeySt->pressed & KEY_BUTTON_A)
    {
        StartVoice(GetVoiceId(hero_id, hero_voice_id));
        return;
    }

    if (gKeySt->pressed & KEY_BUTTON_B)
    {
        StopVoice();
        return;
    }
}

struct ProcScr const ProcScr_VoiceDebug[] =
{
    PROC_CALL(LockGame),
    PROC_SLEEP(1),

    PROC_CALL(VoiceDebug_SetBackground),
    PROC_SLEEP(1),

    PROC_CALL(VoiceDebug_OnInit),
    PROC_REPEAT(VoiceDebug_OnIdle),

    PROC_CALL(UnlockGame),
    PROC_END,
};

void StartVoiceDebug(void)
{
    SpawnProc(ProcScr_VoiceDebug, PROC_TREE_3);
}

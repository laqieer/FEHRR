#pragma once

#include <gba_types.h>

#include "m4a.h"
#include "unit.h"

#define VOICE_STATUS_NUM 1
#define VOICE_MAP_NUM 3
#define VOICE_ATTACK_NUM 2
#define VOICE_DAMAGE_NUM 2

#define VOICE_DAMAGE_THRESHOLD 4

struct Voice {
    u16 status[VOICE_STATUS_NUM];
    u16 map[VOICE_MAP_NUM];
    u16 attack[VOICE_ATTACK_NUM];
    u16 damage[VOICE_DAMAGE_NUM];
};

enum VoiceType {
    VOICE_TYPE_STATUS,
    VOICE_TYPE_MAP,
    VOICE_TYPE_ATTACK,
    VOICE_TYPE_DAMAGE,
};

extern const struct Song * const voices[];
extern const struct Voice hero_voices[];
extern const char * const voice_names[];

int GetVoiceId(int hero_id, int voice_type);
const char * GetVoiceName(int voice_id);
const char * GetVoiceTypeName(enum VoiceType type);
void StartVoice(int voice_id);
void StartHeroVoice(int hero_id, enum VoiceType voice_type);
void StartUnitVoice(struct Unit *unit, enum VoiceType voice_type);
void StartVoiceDebug(void);
void StopVoice(void);

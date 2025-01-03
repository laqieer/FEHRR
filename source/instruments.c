#include "m4a.h"
#include "m4aNew.h"

extern const struct WaveData Voice000;
extern const struct WaveData Voice001;
extern const struct WaveData Voice002;
extern const struct WaveData Voice003;
extern const struct WaveData Voice004;
extern const struct WaveData Voice005;
extern const struct WaveData Voice006;
extern const struct WaveData Voice007;
extern const struct WaveData Voice008;
extern const struct WaveData Voice009;
extern const struct WaveData Voice010;
extern const struct WaveData Voice011;
extern const struct WaveData Voice012;
extern const struct WaveData Voice013;
extern const struct WaveData Voice014;
extern const struct WaveData Voice015;
extern const struct WaveData Voice016;
extern const struct WaveData Voice017;
extern const struct WaveData Voice018;
extern const struct WaveData Voice019;
extern const struct WaveData Voice020;
extern const struct WaveData Voice021;
extern const struct WaveData Voice022;
extern const struct WaveData Voice024;
extern const struct WaveData Voice025;
extern const struct WaveData Voice027;
extern const struct WaveData Voice028;
extern const struct WaveData Voice029;
extern const struct WaveData Voice030;
extern const struct WaveData Voice033;
extern const struct WaveData Voice034;
extern const struct WaveData Voice036;
extern const struct WaveData Voice040;
extern const struct WaveData Voice041;
extern const struct WaveData Voice044;
extern const struct WaveData Voice045;
extern const struct WaveData Voice046;
extern const struct WaveData Voice047;
extern const struct WaveData Voice048;
extern const struct WaveData Voice049;
extern const struct WaveData Voice050;
extern const struct WaveData Voice051;
extern const struct WaveData Voice052;
extern const struct WaveData Voice053;
extern const struct WaveData Voice054;
extern const struct WaveData Voice055;
extern const struct WaveData Voice056;
extern const struct WaveData Voice057;
extern const struct WaveData Voice058;
extern const struct WaveData Voice059;
extern const struct WaveData Voice060;
extern const struct WaveData Voice061;
extern const struct WaveData Voice062;
extern const struct WaveData Voice063;
extern const struct WaveData Voice064;
extern const struct WaveData Voice065;
extern const struct WaveData Voice066;
extern const struct WaveData Voice068;
extern const struct WaveData Voice069;
extern const struct WaveData Voice070;
extern const struct WaveData Voice071;
extern const struct WaveData Voice072;
extern const struct WaveData Voice073;
extern const struct WaveData Voice079;
extern const struct WaveData Voice080;
extern const struct WaveData Voice087;
extern const struct WaveData Voice089;
extern const struct WaveData Voice090;
extern const struct WaveData Voice091;
extern const struct WaveData Voice092;
extern const struct WaveData Voice094;
extern const struct WaveData Voice098;
extern const struct WaveData Voice100;
extern const struct WaveData Voice103;
extern const struct WaveData Voice104;
extern const struct WaveData Voice113;
extern const struct WaveData Voice116;
extern const struct WaveData Voice117;
extern const struct WaveData Voice121;
extern const struct ToneData VoiceGroup001[];
extern const struct ToneData VoiceGroup001[];
extern const struct WaveData Voice126;
extern const struct ToneData VoiceGroup001[];

// FE6 native instrument map
const struct ToneData voicegroup000[] = {
    [0] = { // acoustic grand (no sustain)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice000,
        .attack = 255,
        .decay = 252,
        .sustain = 0,
        .release = 200,
    },
    [1] = { // bright acoustic
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice001,
        .attack = 250,
        .decay = 250,
        .sustain = 150,
        .release = 200,
    },
    [2] = { // electric grand
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice002,
        .attack = 255,
        .decay = 248,
        .sustain = 150,
        .release = 180,
    },
    [3] = { // honky-tonk (faster decay than №5)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice003,
        .attack = 255,
        .decay = 220,
        .sustain = 150,
        .release = 150,
    },
    [4] = { // elec piano 1
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice004,
        .attack = 255,
        .decay = 252,
        .sustain = 100,
        .release = 180,
    },
    [5] = { // elec piano 2; sounds like square wave
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice005,
        .attack = 255,
        .decay = 252,
        .sustain = 80,
        .release = 180,
    },
    [6] = { // harpsichord
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice006,
        .attack = 150,
        .decay = 250,
        .sustain = 150,
        .release = 210,
    },
    [7] = { // clavichord (faster decay/release but louder attack/sustain than №6; better for low or staccato notes)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice007,
        .attack = 255,
        .decay = 240,
        .sustain = 180,
        .release = 150,
    },
    [8] = { // celesta (no sustain)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice008,
        .attack = 240,
        .decay = 252,
        .sustain = 0,
        .release = 220,
    },
    [9] = { // glockenspiel (Idunn theme background)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice009,
        .attack = 255,
        .decay = 251,
        .sustain = 80,
        .release = 200,
    },
    [10] = { // music box (Idunn theme)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice010,
        .attack = 255,
        .decay = 253,
        .sustain = 0,
        .release = 220,
    },
    [11] = { // celesta w/ sustain
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice011,
        .attack = 255,
        .decay = 240,
        .sustain = 150,
        .release = 200,
    },
    [12] = { // tubular bells w/ faster decay/release
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice012,
        .attack = 255,
        .decay = 240,
        .sustain = 150,
        .release = 150,
    },
    [13] = { // xylophone (also works for agogo)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice013,
        .attack = 255,
        .decay = 200,
        .sustain = 200,
        .release = 150,
    },
    [14] = { // tubular bells
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice014,
        .attack = 255,
        .decay = 250,
        .sustain = 80,
        .release = 200,
    },
    [15] = { // dulcimer
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice015,
        .attack = 150,
        .decay = 245,
        .sustain = 150,
        .release = 200,
    },
    [16] = { // drawbar organ (rock organ but w/ lower attack)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice016,
        .attack = 100,
        .decay = 252,
        .sustain = 200,
        .release = 180,
    },
    [17] = { // percussive organ
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice017,
        .attack = 255,
        .decay = 200,
        .sustain = 200,
        .release = 150,
    },
    [18] = { // rock organ (comparable to perc organ at lower pitches)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice018,
        .attack = 255,
        .decay = 254,
        .sustain = 200,
        .release = 180,
    },
    [19] = { // church organ
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice019,
        .attack = 200,
        .decay = 255,
        .sustain = 200,
        .release = 200,
    },
    [20] = { // reed organ (oboe with lower atk)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice020,
        .attack = 80,
        .decay = 254,
        .sustain = 80,
        .release = 200,
    },
    [21] = { // accordion
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice021,
        .attack = 150,
        .decay = 252,
        .sustain = 150,
        .release = 150,
    },
    [22] = { // tango accord (higher atk/dec)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice022,
        .attack = 255,
        .decay = 240,
        .sustain = 200,
        .release = 150,
    },
    [23] = UNUSED_INSTRUMENT, // blank
    [24] = { // acoustic guitar (nylon) (orch strings w/ lower decay)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice024,
        .attack = 255,
        .decay = 250,
        .sustain = 150,
        .release = 150,
    },
    [25] = { // acoustic guitar (steel) (bass w/ decay)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice025,
        .attack = 255,
        .decay = 250,
        .sustain = 80,
        .release = 150,
    },
    [26] = UNUSED_INSTRUMENT, // blank
    [27] = { // electric guitar (clean) (elec piano w/ faster decay more more sus)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice027,
        .attack = 255,
        .decay = 200,
        .sustain = 200,
        .release = 150,
    },
    [28] = { // elec guitar muted (chord)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice028,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [29] = { // over guitar
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice029,
        .attack = 255,
        .decay = 200,
        .sustain = 240,
        .release = 80,
    },
    [30] = { // distort guitar; also works for heavy/fat synthbrass
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice030,
        .attack = 255,
        .decay = 254,
        .sustain = 240,
        .release = 150,
    },
    [31] = UNUSED_INSTRUMENT, // blank
    [32] = UNUSED_INSTRUMENT, // blank
    [33] = { // elec bass finger (the main bass of the game; a bit more impactful than you'd expect)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice033,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [34] = { // elec bass pick (№33 plus fast decay to make it sound pick-y)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice034,
        .attack = 255,
        .decay = 200,
        .sustain = 150,
        .release = 80,
    },
    [35] = UNUSED_INSTRUMENT, // blank
    [36] = { // slap bass 1
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice036,
        .attack = 255,
        .decay = 250,
        .sustain = 200,
        .release = 150,
    },
    [37] = UNUSED_INSTRUMENT, // blank
    [38] = UNUSED_INSTRUMENT, // blank
    [39] = UNUSED_INSTRUMENT, // blank
    [40] = { // violin (synthstrings1 with fast decay)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice040,
        .attack = 255,
        .decay = 200,
        .sustain = 200,
        .release = 150,
    },
    [41] = { // viola (strings1 with fast decay)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice041,
        .attack = 255,
        .decay = 200,
        .sustain = 150,
        .release = 150,
    },
    [42] = UNUSED_INSTRUMENT, // blank
    [43] = UNUSED_INSTRUMENT, // blank
    [44] = { // tremolo strings (actual strings; not a harp); can be used as pizzicato
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice044,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 80,
    },
    [45] = { // pizzicato strings (no sustain)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice045,
        .attack = 255,
        .decay = 245,
        .sustain = 0,
        .release = 150,
    },
    [46] = { // orch strings (harp) (also works for acoustic guitar (nylon)?)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice046,
        .attack = 200,
        .decay = 252,
        .sustain = 0,
        .release = 200,
    },
    [47] = { // timpani
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice047,
        .attack = 255,
        .decay = 250,
        .sustain = 0,
        .release = 150,
    },
    [48] = { // strings1
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice048,
        .attack = 200,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [49] = { // strings2; good for high strings
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice049,
        .attack = 150,
        .decay = 252,
        .sustain = 200,
        .release = 150,
    },
    [50] = { // synthstrings1; high/light, but more synthy than №49
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice050,
        .attack = 150,
        .decay = 252,
        .sustain = 150,
        .release = 200,
    },
    [51] = { // synthstrings2; fifths?; sounds kind of like synthstrings and synthbrass at the same time
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice051,
        .attack = 100,
        .decay = 252,
        .sustain = 100,
        .release = 200,
    },
    [52] = { // choir aah
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice052,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [53] = { // voice ooh (also synth voice or pad?)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice053,
        .attack = 255,
        .decay = 255,
        .sustain = 200,
        .release = 150,
    },
    [54] = { // synth voice (slower atk/rel)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice054,
        .attack = 50,
        .decay = 250,
        .sustain = 80,
        .release = 210,
    },
    [55] = { // orch hit
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice055,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [56] = { // trumpet (№1 in #2)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice056,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [57] = { // trombone or tuba; "arng" sound at higher pitches
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice057,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [58] = { // low brass
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice058,
        .attack = 150,
        .decay = 255,
        .sustain = 200,
        .release = 150,
    },
    [59] = { // high brass; sounds like FE8's trumpet; used in level-up jingle
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice059,
        .attack = 150,
        .decay = 255,
        .sustain = 200,
        .release = 150,
    },
    [60] = { // French horn
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice060,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 165,
    },
    [61] = { // brass section (bad loop, so best for short notes); kinda synthy
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice061,
        .attack = 255,
        .decay = 250,
        .sustain = 200,
        .release = 150,
    },
    [62] = { // synthbrass1
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice062,
        .attack = 150,
        .decay = 0,
        .sustain = 255,
        .release = 120,
    },
    [63] = { // synthbrass2 (less atk)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice063,
        .attack = 70,
        .decay = 252,
        .sustain = 200,
        .release = 150,
    },
    [64] = { // high brass; used in song #18; kinda echoey?
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice064,
        .attack = 100,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [65] = { // "swoo" brass; light; sounds almost like strings at high pitches
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice065,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [66] = { // alternate brass section; sounds more like a real brass section
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice066,
        .attack = 150,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [67] = UNUSED_INSTRUMENT, // blank
    [68] = { // oboe
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice068,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [69] = { // high brass; background of FoW player phase theme; unsure sound; used in Shadow of Triumph
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice069,
        .attack = 100,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [70] = { // bassoon (cross btwn French horn and woodwind?)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice070,
        .attack = 200,
        .decay = 252,
        .sustain = 200,
        .release = 150,
    },
    [71] = { // clarinet
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice071,
        .attack = 200,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [72] = { // high oboe or clarinet
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice072,
        .attack = 80,
        .decay = 252,
        .sustain = 200,
        .release = 150,
    },
    [73] = { // flute
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice073,
        .attack = 200,
        .decay = 0,
        .sustain = 255,
        .release = 150,
    },
    [74] = UNUSED_INSTRUMENT, // blank
    [75] = UNUSED_INSTRUMENT, // blank
    [76] = UNUSED_INSTRUMENT, // blank
    [77] = UNUSED_INSTRUMENT, // blank
    [78] = UNUSED_INSTRUMENT, // blank
    [79] = { // ocarina
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice079,
        .attack = 50,
        .decay = 254,
        .sustain = 200,
        .release = 200,
    },
    [80] = { // lead (square)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice080,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 80,
    },
    [81] = UNUSED_INSTRUMENT, // blank
    [82] = UNUSED_INSTRUMENT, // blank
    [83] = UNUSED_INSTRUMENT, // blank
    [84] = UNUSED_INSTRUMENT, // blank
    [85] = UNUSED_INSTRUMENT, // blank
    [86] = UNUSED_INSTRUMENT, // blank
    [87] = { // lead (bass plus lead)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice087,
        .attack = 70,
        .decay = 254,
        .sustain = 220,
        .release = 100,
    },
    [88] = UNUSED_INSTRUMENT, // blank
    [89] = { // pad warm
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice089,
        .attack = 20,
        .decay = 251,
        .sustain = 80,
        .release = 220,
    },
    [90] = { // pad polysynth
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice090,
        .attack = 12,
        .decay = 252,
        .sustain = 50,
        .release = 230,
    },
    [91] = { // pad choir
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice091,
        .attack = 20,
        .decay = 253,
        .sustain = 40,
        .release = 210,
    },
    [92] = { // pad bowed (sounds kinda sci-fi/abstract)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice092,
        .attack = 16,
        .decay = 254,
        .sustain = 40,
        .release = 210,
    },
    [93] = UNUSED_INSTRUMENT, // blank
    [94] = { // pad halo
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice094,
        .attack = 24,
        .decay = 252,
        .sustain = 80,
        .release = 220,
    },
    [95] = UNUSED_INSTRUMENT, // blank
    [96] = UNUSED_INSTRUMENT, // blank
    [97] = UNUSED_INSTRUMENT, // blank
    [98] = { // light strings with crystalline, glassy sounds playing in the bg; used in healing themes
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice098,
        .attack = 100,
        .decay = 255,
        .sustain = 150,
        .release = 210,
    },
    [99] = UNUSED_INSTRUMENT, // blank
    [100] = { // fx brightness
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice100,
        .attack = 255,
        .decay = 240,
        .sustain = 0,
        .release = 200,
    },
    [101] = UNUSED_INSTRUMENT, // blank
    [102] = UNUSED_INSTRUMENT, // blank
    [103] = { // some kind of fx; cool robotic sound used as pizzicato in "Frontier"
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice103,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 200,
    },
    [104] = { // sitar
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice104,
        .attack = 255,
        .decay = 252,
        .sustain = 80,
        .release = 200,
    },
    [105] = UNUSED_INSTRUMENT, // blank
    [106] = UNUSED_INSTRUMENT, // blank
    [107] = UNUSED_INSTRUMENT, // blank
    [108] = UNUSED_INSTRUMENT, // blank
    [109] = UNUSED_INSTRUMENT, // blank
    [110] = UNUSED_INSTRUMENT, // blank
    [111] = UNUSED_INSTRUMENT, // blank
    [112] = UNUSED_INSTRUMENT, // blank
    [113] = { // agogo
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice113,
        .attack = 255,
        .decay = 240,
        .sustain = 0,
        .release = 150,
    },
    [114] = UNUSED_INSTRUMENT, // blank
    [115] = UNUSED_INSTRUMENT, // blank
    [116] = { // melodic bass drum
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice116,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 80,
    },
    [117] = { // melodic tom
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice117,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 80,
    },
    [118] = UNUSED_INSTRUMENT, // blank
    [119] = UNUSED_INSTRUMENT, // blank
    [120] = UNUSED_INSTRUMENT, // blank
    [121] = { // brigand scream ;)
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice121,
        .attack = 255,
        .decay = 0,
        .sustain = 255,
        .release = 200,
    },
    [122] = { // rumbling sound (use as accenting sfx)
        .kind = TONEDATA_KIND_PSG_SQR2,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)0x1,
        .attack = 15,
        .decay = 0,
        .sustain = 15,
        .release = 0,
    },
    [123] = { // blank
        .kind = TONEDATA_KIND_PSG_NOISE,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)0x0,
        .attack = 255,
        .decay = 0,
        .sustain = 15,
        .release = 10,
    },
    [124] = { // drumkit1 (drum part)
        .kind = TONEDATA_KIND_RHY,
        .wav = (struct WaveData *)VoiceGroup001,
    },
    [125] = { // drumkit2 (drum part)
        .kind = TONEDATA_KIND_RHY,
        .wav = (struct WaveData *)VoiceGroup001,
    },
    [126] = { // applause
        .kind = TONEDATA_KIND_SND,
        .key = TONEDATA_KEY_Cn3,
        .length = 0,
        .pan_sweep = 0,
        .wav = (struct WaveData *)&Voice126,
        .attack = 40,
        .decay = 0,
        .sustain = 255,
        .release = 200,
    },
    [127] = { // drumkit2 (drum part) (identical to 125 for compatibility purposes; use one or the other)
        .kind = TONEDATA_KIND_RHY,
        .wav = (struct WaveData *)VoiceGroup001,
    },
};

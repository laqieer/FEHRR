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
extern const struct ToneData VoiceGroup002[];
extern const struct WaveData Voice126;
extern const struct ToneData VoiceGroup003[];

const struct ToneData voicegroup000[] = {
    [0] = TONEDATA_DIRECT_SOUND(&Voice000, 255, 252, 0, 200) // acoustic grand (no sustain)
    [1] = TONEDATA_DIRECT_SOUND(&Voice001, 250, 250, 150, 200) // bright acoustic
    [2] = TONEDATA_DIRECT_SOUND(&Voice002, 255, 248, 150, 180) // electric grand
    [3] = TONEDATA_DIRECT_SOUND(&Voice003, 255, 220, 150, 150) // honky-tonk (faster decay than №5)
    [4] = TONEDATA_DIRECT_SOUND(&Voice004, 255, 252, 100, 180) // elec piano 1
    [5] = TONEDATA_DIRECT_SOUND(&Voice005, 255, 252, 80, 180) // elec piano 2; sounds like square wave
    [6] = TONEDATA_DIRECT_SOUND(&Voice006, 150, 250, 150, 210) // harpsichord
    [7] = TONEDATA_DIRECT_SOUND(&Voice007, 255, 240, 180, 150) // clavichord (faster decay/release but louder attack/sustain than №6; better for low or staccato notes)
    [8] = TONEDATA_DIRECT_SOUND(&Voice008, 240, 252, 0, 220) // celesta (no sustain)
    [9] = TONEDATA_DIRECT_SOUND(&Voice009, 255, 251, 80, 200) // glockenspiel (Idunn theme background)
    [10] = TONEDATA_DIRECT_SOUND(&Voice010, 255, 253, 0, 220) // music box (Idunn theme)
    [11] = TONEDATA_DIRECT_SOUND(&Voice011, 255, 240, 150, 200) // celesta w/ sustain
    [12] = TONEDATA_DIRECT_SOUND(&Voice012, 255, 240, 150, 150) // tubular bells w/ faster decay/release
    [13] = TONEDATA_DIRECT_SOUND(&Voice013, 255, 200, 200, 150) // xylophone (also works for agogo)
    [14] = TONEDATA_DIRECT_SOUND(&Voice014, 255, 250, 80, 200) // tubular bells
    [15] = TONEDATA_DIRECT_SOUND(&Voice015, 150, 245, 150, 200) // dulcimer
    [16] = TONEDATA_DIRECT_SOUND(&Voice016, 100, 252, 200, 180) // drawbar organ (rock organ but w/ lower attack)
    [17] = TONEDATA_DIRECT_SOUND(&Voice017, 255, 200, 200, 150) // percussive organ
    [18] = TONEDATA_DIRECT_SOUND(&Voice018, 255, 254, 200, 180) // rock organ (comparable to perc organ at lower pitches)
    [19] = TONEDATA_DIRECT_SOUND(&Voice019, 200, 255, 200, 200) // church organ
    [20] = TONEDATA_DIRECT_SOUND(&Voice020, 80, 254, 80, 200) // reed organ (oboe with lower atk)
    [21] = TONEDATA_DIRECT_SOUND(&Voice021, 150, 252, 150, 150) // accordion
    [22] = TONEDATA_DIRECT_SOUND(&Voice022, 255, 240, 200, 150) // tango accord (higher atk/dec)
    [23] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [24] = TONEDATA_DIRECT_SOUND(&Voice024, 255, 250, 150, 150) // acoustic guitar (nylon) (orch strings w/ lower decay)
    [25] = TONEDATA_DIRECT_SOUND(&Voice025, 255, 250, 80, 150) // acoustic guitar (steel) (bass w/ decay)
    [26] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [27] = TONEDATA_DIRECT_SOUND(&Voice027, 255, 200, 200, 150) // electric guitar (clean) (elec piano w/ faster decay more more sus)
    [28] = TONEDATA_DIRECT_SOUND(&Voice028, 255, 0, 255, 150) // elec guitar muted (chord)
    [29] = TONEDATA_DIRECT_SOUND(&Voice029, 255, 200, 240, 80) // over guitar
    [30] = TONEDATA_DIRECT_SOUND(&Voice030, 255, 254, 240, 150) // distort guitar; also works for heavy/fat synthbrass
    [31] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [32] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [33] = TONEDATA_DIRECT_SOUND(&Voice033, 255, 0, 255, 150) // elec bass finger (the main bass of the game; a bit more impactful than you'd expect)
    [34] = TONEDATA_DIRECT_SOUND(&Voice034, 255, 200, 150, 80) // elec bass pick (№33 plus fast decay to make it sound pick-y)
    [35] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [36] = TONEDATA_DIRECT_SOUND(&Voice036, 255, 250, 200, 150) // slap bass 1
    [37] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [38] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [39] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [40] = TONEDATA_DIRECT_SOUND(&Voice040, 255, 200, 200, 150) // violin (synthstrings1 with fast decay)
    [41] = TONEDATA_DIRECT_SOUND(&Voice041, 255, 200, 150, 150) // viola (strings1 with fast decay)
    [42] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [43] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [44] = TONEDATA_DIRECT_SOUND(&Voice044, 255, 0, 255, 80) // tremolo strings (actual strings; not a harp); can be used as pizzicato
    [45] = TONEDATA_DIRECT_SOUND(&Voice045, 255, 245, 0, 150) // pizzicato strings (no sustain)
    [46] = TONEDATA_DIRECT_SOUND(&Voice046, 200, 252, 0, 200) // orch strings (harp) (also works for acoustic guitar (nylon)?)
    [47] = TONEDATA_DIRECT_SOUND(&Voice047, 255, 250, 0, 150) // timpani
    [48] = TONEDATA_DIRECT_SOUND(&Voice048, 200, 0, 255, 150) // strings1
    [49] = TONEDATA_DIRECT_SOUND(&Voice049, 150, 252, 200, 150) // strings2; good for high strings
    [50] = TONEDATA_DIRECT_SOUND(&Voice050, 150, 252, 150, 200) // synthstrings1; high/light, but more synthy than №49
    [51] = TONEDATA_DIRECT_SOUND(&Voice051, 100, 252, 100, 200) // synthstrings2; fifths?; sounds kind of like synthstrings and synthbrass at the same time
    [52] = TONEDATA_DIRECT_SOUND(&Voice052, 255, 0, 255, 150) // choir aah
    [53] = TONEDATA_DIRECT_SOUND(&Voice053, 255, 255, 200, 150) // voice ooh (also synth voice or pad?)
    [54] = TONEDATA_DIRECT_SOUND(&Voice054, 50, 250, 80, 210) // synth voice (slower atk/rel)
    [55] = TONEDATA_DIRECT_SOUND(&Voice055, 255, 0, 255, 150) // orch hit
    [56] = TONEDATA_DIRECT_SOUND(&Voice056, 255, 0, 255, 150) // trumpet (№1 in #2)
    [57] = TONEDATA_DIRECT_SOUND(&Voice057, 255, 0, 255, 150) // trombone or tuba; "arng" sound at higher pitches
    [58] = TONEDATA_DIRECT_SOUND(&Voice058, 150, 255, 200, 150) // low brass
    [59] = TONEDATA_DIRECT_SOUND(&Voice059, 150, 255, 200, 150) // high brass; sounds like FE8's trumpet; used in level-up jingle
    [60] = TONEDATA_DIRECT_SOUND(&Voice060, 255, 0, 255, 165) // French horn
    [61] = TONEDATA_DIRECT_SOUND(&Voice061, 255, 250, 200, 150) // brass section (bad loop, so best for short notes); kinda synthy
    [62] = TONEDATA_DIRECT_SOUND(&Voice062, 150, 0, 255, 120) // synthbrass1
    [63] = TONEDATA_DIRECT_SOUND(&Voice063, 70, 252, 200, 150) // synthbrass2 (less atk)
    [64] = TONEDATA_DIRECT_SOUND(&Voice064, 100, 0, 255, 150) // high brass; used in song #18; kinda echoey?
    [65] = TONEDATA_DIRECT_SOUND(&Voice065, 255, 0, 255, 150) // "swoo" brass; light; sounds almost like strings at high pitches
    [66] = TONEDATA_DIRECT_SOUND(&Voice066, 150, 0, 255, 150) // alternate brass section; sounds more like a real brass section
    [67] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [68] = TONEDATA_DIRECT_SOUND(&Voice068, 255, 0, 255, 150) // oboe
    [69] = TONEDATA_DIRECT_SOUND(&Voice069, 100, 0, 255, 150) // high brass; background of FoW player phase theme; unsure sound; used in Shadow of Triumph
    [70] = TONEDATA_DIRECT_SOUND(&Voice070, 200, 252, 200, 150) // bassoon (cross btwn French horn and woodwind?)
    [71] = TONEDATA_DIRECT_SOUND(&Voice071, 200, 0, 255, 150) // clarinet
    [72] = TONEDATA_DIRECT_SOUND(&Voice072, 80, 252, 200, 150) // high oboe or clarinet
    [73] = TONEDATA_DIRECT_SOUND(&Voice073, 200, 0, 255, 150) // flute
    [74] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [75] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [76] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [77] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [78] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [79] = TONEDATA_DIRECT_SOUND(&Voice079, 50, 254, 200, 200) // ocarina
    [80] = TONEDATA_DIRECT_SOUND(&Voice080, 255, 0, 255, 80) // lead (square)
    [81] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [82] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [83] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [84] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [85] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [86] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [87] = TONEDATA_DIRECT_SOUND(&Voice087, 70, 254, 220, 100) // lead (bass plus lead)
    [88] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [89] = TONEDATA_DIRECT_SOUND(&Voice089, 20, 251, 80, 220) // pad warm
    [90] = TONEDATA_DIRECT_SOUND(&Voice090, 12, 252, 50, 230) // pad polysynth
    [91] = TONEDATA_DIRECT_SOUND(&Voice091, 20, 253, 40, 210) // pad choir
    [92] = TONEDATA_DIRECT_SOUND(&Voice092, 16, 254, 40, 210) // pad bowed (sounds kinda sci-fi/abstract)
    [93] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [94] = TONEDATA_DIRECT_SOUND(&Voice094, 24, 252, 80, 220) // pad halo
    [95] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [96] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [97] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [98] = TONEDATA_DIRECT_SOUND(&Voice098, 100, 255, 150, 210) // light strings with crystalline, glassy sounds playing in the bg; used in healing themes
    [99] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [100] = TONEDATA_DIRECT_SOUND(&Voice100, 255, 240, 0, 200) // fx brightness
    [101] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [102] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [103] = TONEDATA_DIRECT_SOUND(&Voice103, 255, 0, 255, 200) // some kind of fx; cool robotic sound used as pizzicato in "Frontier"
    [104] = TONEDATA_DIRECT_SOUND(&Voice104, 255, 252, 80, 200) // sitar
    [105] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [106] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [107] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [108] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [109] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [110] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [111] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [112] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [113] = TONEDATA_DIRECT_SOUND(&Voice113, 255, 240, 0, 150) // agogo
    [114] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [115] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [116] = TONEDATA_DIRECT_SOUND(&Voice116, 255, 0, 255, 80) // melodic bass drum
    [117] = TONEDATA_DIRECT_SOUND(&Voice117, 255, 0, 255, 80) // melodic tom
    [118] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [119] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [120] = TONEDATA_SQUARE(2, 0, 0, 15, 0) // blank
    [121] = TONEDATA_DIRECT_SOUND(&Voice121, 255, 0, 255, 200) // brigand scream ;)
    [122] = {2, 60, 0, 0, (struct WaveData *)0x1, 15, 0, 15, 0}, // rumbling sound (use as accenting sfx)
    [123] = {4, 60, 0, 0, (struct WaveData *)0x0, 255, 0, 15, 10}, // blank
    [124] = TONEDATA_KEYSPLIT_ALL(VoiceGroup001, TONEDATA_KEY_Cn3) // drumkit1 (drum part)
    [125] = TONEDATA_KEYSPLIT_ALL(VoiceGroup002, TONEDATA_KEY_Cn3) // drumkit2 (drum part)
    [126] = TONEDATA_DIRECT_SOUND(&Voice126, 40, 0, 255, 200) // applause
    [127] = TONEDATA_KEYSPLIT_ALL(VoiceGroup003, 0) // drumkit2 (drum part) (identical to 125 for compatibility purposes; use one or the other)
};

INCLUDE ../ldscript/instruments.lds

FreeERamSpace = 0x203DBE4;
FreeIRamSpace = 0x3006648;
FreeRomSpace = 0x87FF0A4;
BaseRomSpace = 0x8000000;

gSavedChapterFlags = 0x2000464;
gBattleUnits = 0x203CD7C;
gBattleUnitPids = 0x203CD84;

AgbMainPtr = 0x8000220;

GetBasSubjectId = GetAnimPosition;
PlayBattleMusic = func_fe6_0805BD64;
AddSaveMenuOptions = func_fe6_0808A524;
IsTutorialAvailable = func_fe6_08084714;
IsSoundRoomAvailable = IsNotFirstPlaythrough_2;

func_fe6_08088870Ptr = 0x8689f60;
func_fe6_080898F0Ptr = 0x868a298;

SoundMainRAM_MixBuffer = SoundMainRam;
gPlayStNew = gPlaySt;

DebugChapterMapGraphic = 0x082478F0;
DebugChapterMapTileset = 0x0823956C;
DebugChapterMapPalette = 0x0823C980;
DebugChapterMapGraphicAnimation = 0x085C788C;

ClearFirstMapMetaTile = func_fe6_080192E4;

gPidStatsNew = gPidStats;

MainSaveMenu_Tiles = gUnk_0832A29C;
ExtraSaveMenu_Tiles = gUnk_0832B554;

TitleScreenOBJ_Tiles = gUnk_0835E6DC;
TitleScreenBG1_Tiles = gUnk_0835CC90;

StartShopScreen = StartShopScreen;
StartDefaultArmoryScreen = StartDefaultArmoryScreen;

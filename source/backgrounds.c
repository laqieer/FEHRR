#include "background.h"
#include "backgrounds.h"
#include "gfx_background.h"

struct BackgroundEntNew const newBackgrounds[] = {
    [BACKGROUND_001_Brave - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_001_Brave_img1Tiles,
        .img2 = BACKGROUND_001_Brave_img2Tiles,
        .pal = BACKGROUND_001_Brave_img1Pal,
    },

    [BACKGROUND_001_BraveAttack - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_001_BraveAttack_img1Tiles,
        .img2 = BACKGROUND_001_BraveAttack_img2Tiles,
        .pal = BACKGROUND_001_BraveAttack_img1Pal,
    },

    [BACKGROUND_001_BraveForest - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_001_BraveForest_img1Tiles,
        .img2 = BACKGROUND_001_BraveForest_img2Tiles,
        .pal = BACKGROUND_001_BraveForest_img1Pal,
    },

    [BACKGROUND_001_BraveInside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_001_BraveInside_img1Tiles,
        .img2 = BACKGROUND_001_BraveInside_img2Tiles,
        .pal = BACKGROUND_001_BraveInside_img1Pal,
    },

    [BACKGROUND_002_ForestNight - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_002_ForestNight_img1Tiles,
        .img2 = BACKGROUND_002_ForestNight_img2Tiles,
        .pal = BACKGROUND_002_ForestNight_img1Pal,
    },

    [BACKGROUND_002_PlainForest - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_002_PlainForest_img1Tiles,
        .img2 = BACKGROUND_002_PlainForest_img2Tiles,
        .pal = BACKGROUND_002_PlainForest_img1Pal,
    },

    [BACKGROUND_002_PlainForestInside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_002_PlainForestInside_img1Tiles,
        .img2 = BACKGROUND_002_PlainForestInside_img2Tiles,
        .pal = BACKGROUND_002_PlainForestInside_img1Pal,
    },

    [BACKGROUND_002_PlainSea - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_002_PlainSea_img1Tiles,
        .img2 = BACKGROUND_002_PlainSea_img2Tiles,
        .pal = BACKGROUND_002_PlainSea_img1Pal,
    },

    [BACKGROUND_003_Volcano - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_003_Volcano_img1Tiles,
        .img2 = BACKGROUND_003_Volcano_img2Tiles,
        .pal = BACKGROUND_003_Volcano_img1Pal,
    },

    [BACKGROUND_005_Castle - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_005_Castle_img1Tiles,
        .img2 = BACKGROUND_005_Castle_img2Tiles,
        .pal = BACKGROUND_005_Castle_img1Pal,
    },

    [BACKGROUND_005_CastleJP - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_005_CastleJP_img1Tiles,
        .img2 = BACKGROUND_005_CastleJP_img2Tiles,
        .pal = BACKGROUND_005_CastleJP_img1Pal,
    },

    [BACKGROUND_007_SnowDreaming - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_007_SnowDreaming_img1Tiles,
        .img2 = BACKGROUND_007_SnowDreaming_img2Tiles,
        .pal = BACKGROUND_007_SnowDreaming_img1Pal,
    },

    [BACKGROUND_014_GaidenCastle - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_014_GaidenCastle_img1Tiles,
        .img2 = BACKGROUND_014_GaidenCastle_img2Tiles,
        .pal = BACKGROUND_014_GaidenCastle_img1Pal,
    },

    [BACKGROUND_025_NiflPlain - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_025_NiflPlain_img1Tiles,
        .img2 = BACKGROUND_025_NiflPlain_img2Tiles,
        .pal = BACKGROUND_025_NiflPlain_img1Pal,
    },

    [BACKGROUND_026_Muspel - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_026_Muspel_img1Tiles,
        .img2 = BACKGROUND_026_Muspel_img2Tiles,
        .pal = BACKGROUND_026_Muspel_img1Pal,
    },

    [BACKGROUND_026_MuspelCastle - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_026_MuspelCastle_img1Tiles,
        .img2 = BACKGROUND_026_MuspelCastle_img2Tiles,
        .pal = BACKGROUND_026_MuspelCastle_img1Pal,
    },

    [BACKGROUND_026_MuspelNightForest - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_026_MuspelNightForest_img1Tiles,
        .img2 = BACKGROUND_026_MuspelNightForest_img2Tiles,
        .pal = BACKGROUND_026_MuspelNightForest_img1Pal,
    },

    [BACKGROUND_026_MuspelTemple - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_026_MuspelTemple_img1Tiles,
        .img2 = BACKGROUND_026_MuspelTemple_img2Tiles,
        .pal = BACKGROUND_026_MuspelTemple_img1Pal,
    },

    [BACKGROUND_044_EarthTemple - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_044_EarthTemple_img1Tiles,
        .img2 = BACKGROUND_044_EarthTemple_img2Tiles,
        .pal = BACKGROUND_044_EarthTemple_img1Pal,
    },

    [BACKGROUND_044_EarthTempleBoss - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_044_EarthTempleBoss_img1Tiles,
        .img2 = BACKGROUND_044_EarthTempleBoss_img2Tiles,
        .pal = BACKGROUND_044_EarthTempleBoss_img1Pal,
    },

    [BACKGROUND_BG_Blank_White - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_BG_Blank_White_img1Tiles,
        .img2 = BACKGROUND_BG_Blank_White_img2Tiles,
        .pal = BACKGROUND_BG_Blank_White_img1Pal,
    },

    [BACKGROUND_EvBG_OP_00_v0700a - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBG_OP_00_v0700a_img1Tiles,
        .img2 = BACKGROUND_EvBG_OP_00_v0700a_img2Tiles,
        .pal = BACKGROUND_EvBG_OP_00_v0700a_img1Pal,
    },

    [BACKGROUND_EvBg_001_BraveGround - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_001_BraveGround_img1Tiles,
        .img2 = BACKGROUND_EvBg_001_BraveGround_img2Tiles,
        .pal = BACKGROUND_EvBg_001_BraveGround_img1Pal,
    },

    [BACKGROUND_EvBg_Alfheim - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Alfheim_img1Tiles,
        .img2 = BACKGROUND_EvBg_Alfheim_img2Tiles,
        .pal = BACKGROUND_EvBg_Alfheim_img1Pal,
    },

    [BACKGROUND_EvBg_Alfheim_Throne - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Alfheim_Throne_img1Tiles,
        .img2 = BACKGROUND_EvBg_Alfheim_Throne_img2Tiles,
        .pal = BACKGROUND_EvBg_Alfheim_Throne_img1Pal,
    },

    [BACKGROUND_EvBg_AngrbodaTemple - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_AngrbodaTemple_img1Tiles,
        .img2 = BACKGROUND_EvBg_AngrbodaTemple_img2Tiles,
        .pal = BACKGROUND_EvBg_AngrbodaTemple_img1Pal,
    },

    [BACKGROUND_EvBg_AskAnother - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_AskAnother_img1Tiles,
        .img2 = BACKGROUND_EvBg_AskAnother_img2Tiles,
        .pal = BACKGROUND_EvBg_AskAnother_img1Pal,
    },

    [BACKGROUND_EvBg_BraveCamp - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_BraveCamp_img1Tiles,
        .img2 = BACKGROUND_EvBg_BraveCamp_img2Tiles,
        .pal = BACKGROUND_EvBg_BraveCamp_img1Pal,
    },

    [BACKGROUND_EvBg_BraveCastleNeighborhood - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_BraveCastleNeighborhood_img1Tiles,
        .img2 = BACKGROUND_EvBg_BraveCastleNeighborhood_img2Tiles,
        .pal = BACKGROUND_EvBg_BraveCastleNeighborhood_img1Pal,
    },

    [BACKGROUND_EvBg_BraveHaloGate - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_BraveHaloGate_img1Tiles,
        .img2 = BACKGROUND_EvBg_BraveHaloGate_img2Tiles,
        .pal = BACKGROUND_EvBg_BraveHaloGate_img1Pal,
    },

    [BACKGROUND_EvBg_BraveHell - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_BraveHell_img1Tiles,
        .img2 = BACKGROUND_EvBg_BraveHell_img2Tiles,
        .pal = BACKGROUND_EvBg_BraveHell_img1Pal,
    },

    [BACKGROUND_EvBg_BraveTwilight - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_BraveTwilight_img1Tiles,
        .img2 = BACKGROUND_EvBg_BraveTwilight_img2Tiles,
        .pal = BACKGROUND_EvBg_BraveTwilight_img1Pal,
    },

    [BACKGROUND_EvBg_Building - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Building_img1Tiles,
        .img2 = BACKGROUND_EvBg_Building_img2Tiles,
        .pal = BACKGROUND_EvBg_Building_img1Pal,
    },

    [BACKGROUND_EvBg_Chapter3_BraveHellGate - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Chapter3_BraveHellGate_img1Tiles,
        .img2 = BACKGROUND_EvBg_Chapter3_BraveHellGate_img2Tiles,
        .pal = BACKGROUND_EvBg_Chapter3_BraveHellGate_img1Pal,
    },

    [BACKGROUND_EvBg_Chapter3_BraveInside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Chapter3_BraveInside_img1Tiles,
        .img2 = BACKGROUND_EvBg_Chapter3_BraveInside_img2Tiles,
        .pal = BACKGROUND_EvBg_Chapter3_BraveInside_img1Pal,
    },

    [BACKGROUND_EvBg_Chapter3_Hell - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Chapter3_Hell_img1Tiles,
        .img2 = BACKGROUND_EvBg_Chapter3_Hell_img2Tiles,
        .pal = BACKGROUND_EvBg_Chapter3_Hell_img1Pal,
    },

    [BACKGROUND_EvBg_Chapter3_HellDoor - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Chapter3_HellDoor_img1Tiles,
        .img2 = BACKGROUND_EvBg_Chapter3_HellDoor_img2Tiles,
        .pal = BACKGROUND_EvBg_Chapter3_HellDoor_img1Pal,
    },

    [BACKGROUND_EvBg_Chapter8_EmbraDark - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Chapter8_EmbraDark_img1Tiles,
        .img2 = BACKGROUND_EvBg_Chapter8_EmbraDark_img2Tiles,
        .pal = BACKGROUND_EvBg_Chapter8_EmbraDark_img1Pal,
    },

    [BACKGROUND_EvBg_EarthTempleEntrance - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EarthTempleEntrance_img1Tiles,
        .img2 = BACKGROUND_EvBg_EarthTempleEntrance_img2Tiles,
        .pal = BACKGROUND_EvBg_EarthTempleEntrance_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraAnotherCastle - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraAnotherCastle_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraAnotherCastle_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraAnotherCastle_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraAnotherThrone_after - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraAnotherThrone_after_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraAnotherThrone_after_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraAnotherThrone_after_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraDarkOutside2 - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraDarkOutside2_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraDarkOutside2_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraDarkOutside2_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraGoingDark - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraGoingDark_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraGoingDark_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraGoingDark_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraInside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraInside_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraInside_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraInside_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraMountain - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraMountain_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraMountain_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraMountain_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraOutside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraOutside_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraOutside_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraOutside_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraOutside2 - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraOutside2_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraOutside2_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraOutside2_img1Pal,
    },

    [BACKGROUND_EvBg_EmbraOutsideForest - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_EmbraOutsideForest_img1Tiles,
        .img2 = BACKGROUND_EvBg_EmbraOutsideForest_img2Tiles,
        .pal = BACKGROUND_EvBg_EmbraOutsideForest_img1Pal,
    },

    [BACKGROUND_EvBg_GoldenThreadRiver - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_GoldenThreadRiver_img1Tiles,
        .img2 = BACKGROUND_EvBg_GoldenThreadRiver_img2Tiles,
        .pal = BACKGROUND_EvBg_GoldenThreadRiver_img1Pal,
    },

    [BACKGROUND_EvBg_GullveigCastleInside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_GullveigCastleInside_img1Tiles,
        .img2 = BACKGROUND_EvBg_GullveigCastleInside_img2Tiles,
        .pal = BACKGROUND_EvBg_GullveigCastleInside_img1Pal,
    },

    [BACKGROUND_EvBg_Hood - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Hood_img1Tiles,
        .img2 = BACKGROUND_EvBg_Hood_img2Tiles,
        .pal = BACKGROUND_EvBg_Hood_img1Pal,
    },

    [BACKGROUND_EvBg_LightTemple - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_LightTemple_img1Tiles,
        .img2 = BACKGROUND_EvBg_LightTemple_img2Tiles,
        .pal = BACKGROUND_EvBg_LightTemple_img1Pal,
    },

    [BACKGROUND_EvBg_Nisaveril - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Nisaveril_img1Tiles,
        .img2 = BACKGROUND_EvBg_Nisaveril_img2Tiles,
        .pal = BACKGROUND_EvBg_Nisaveril_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilCastle - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilCastle_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilCastle_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilCastle_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilCorridor - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilCorridor_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilCorridor_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilCorridor_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilOutside - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilOutside_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilOutside_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilOutside_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilSaintForest - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilSaintForest_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilSaintForest_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilSaintForest_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilShrine - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilShrine_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilShrine_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilShrine_img1Pal,
    },

    [BACKGROUND_EvBg_NisaverilTower - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_NisaverilTower_img1Tiles,
        .img2 = BACKGROUND_EvBg_NisaverilTower_img2Tiles,
        .pal = BACKGROUND_EvBg_NisaverilTower_img1Pal,
    },

    [BACKGROUND_EvBg_Opening - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Opening_img1Tiles,
        .img2 = BACKGROUND_EvBg_Opening_img2Tiles,
        .pal = BACKGROUND_EvBg_Opening_img1Pal,
    },

    [BACKGROUND_EvBg_Svartalf - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Svartalf_img1Tiles,
        .img2 = BACKGROUND_EvBg_Svartalf_img2Tiles,
        .pal = BACKGROUND_EvBg_Svartalf_img1Pal,
    },

    [BACKGROUND_EvBg_Throne_Brave - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_Throne_Brave_img1Tiles,
        .img2 = BACKGROUND_EvBg_Throne_Brave_img2Tiles,
        .pal = BACKGROUND_EvBg_Throne_Brave_img1Pal,
    },

    [BACKGROUND_EvBg_UndergroundPrison_Brave - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_UndergroundPrison_Brave_img1Tiles,
        .img2 = BACKGROUND_EvBg_UndergroundPrison_Brave_img2Tiles,
        .pal = BACKGROUND_EvBg_UndergroundPrison_Brave_img1Pal,
    },

    [BACKGROUND_EvBg_VanaThrone - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_VanaThrone_img1Tiles,
        .img2 = BACKGROUND_EvBg_VanaThrone_img2Tiles,
        .pal = BACKGROUND_EvBg_VanaThrone_img1Pal,
    },

    [BACKGROUND_EvBg_YggdrasillAsk - BACKGROUND_NEW] = {
        .img1 = BACKGROUND_EvBg_YggdrasillAsk_img1Tiles,
        .img2 = BACKGROUND_EvBg_YggdrasillAsk_img2Tiles,
        .pal = BACKGROUND_EvBg_YggdrasillAsk_img1Pal,
    },

};

const char * const background_names[] = {
    [BACKGROUND_001_Brave - BACKGROUND_NEW] = "001_Brave",
    [BACKGROUND_001_BraveAttack - BACKGROUND_NEW] = "001_BraveAttack",
    [BACKGROUND_001_BraveForest - BACKGROUND_NEW] = "001_BraveForest",
    [BACKGROUND_001_BraveInside - BACKGROUND_NEW] = "001_BraveInside",
    [BACKGROUND_002_ForestNight - BACKGROUND_NEW] = "002_ForestNight",
    [BACKGROUND_002_PlainForest - BACKGROUND_NEW] = "002_PlainForest",
    [BACKGROUND_002_PlainForestInside - BACKGROUND_NEW] = "002_PlainForestInside",
    [BACKGROUND_002_PlainSea - BACKGROUND_NEW] = "002_PlainSea",
    [BACKGROUND_003_Volcano - BACKGROUND_NEW] = "003_Volcano",
    [BACKGROUND_005_Castle - BACKGROUND_NEW] = "005_Castle",
    [BACKGROUND_005_CastleJP - BACKGROUND_NEW] = "005_CastleJP",
    [BACKGROUND_007_SnowDreaming - BACKGROUND_NEW] = "007_SnowDreaming",
    [BACKGROUND_014_GaidenCastle - BACKGROUND_NEW] = "014_GaidenCastle",
    [BACKGROUND_025_NiflPlain - BACKGROUND_NEW] = "025_NiflPlain",
    [BACKGROUND_026_Muspel - BACKGROUND_NEW] = "026_Muspel",
    [BACKGROUND_026_MuspelCastle - BACKGROUND_NEW] = "026_MuspelCastle",
    [BACKGROUND_026_MuspelNightForest - BACKGROUND_NEW] = "026_MuspelNightForest",
    [BACKGROUND_026_MuspelTemple - BACKGROUND_NEW] = "026_MuspelTemple",
    [BACKGROUND_044_EarthTemple - BACKGROUND_NEW] = "044_EarthTemple",
    [BACKGROUND_044_EarthTempleBoss - BACKGROUND_NEW] = "044_EarthTempleBoss",
    [BACKGROUND_BG_Blank_White - BACKGROUND_NEW] = "BG_Blank_White",
    [BACKGROUND_EvBG_OP_00_v0700a - BACKGROUND_NEW] = "EvBG_OP_00_v0700a",
    [BACKGROUND_EvBg_001_BraveGround - BACKGROUND_NEW] = "EvBg_001_BraveGround",
    [BACKGROUND_EvBg_Alfheim - BACKGROUND_NEW] = "EvBg_Alfheim",
    [BACKGROUND_EvBg_Alfheim_Throne - BACKGROUND_NEW] = "EvBg_Alfheim_Throne",
    [BACKGROUND_EvBg_AngrbodaTemple - BACKGROUND_NEW] = "EvBg_AngrbodaTemple",
    [BACKGROUND_EvBg_AskAnother - BACKGROUND_NEW] = "EvBg_AskAnother",
    [BACKGROUND_EvBg_BraveCamp - BACKGROUND_NEW] = "EvBg_BraveCamp",
    [BACKGROUND_EvBg_BraveCastleNeighborhood - BACKGROUND_NEW] = "EvBg_BraveCastleNeighborhood",
    [BACKGROUND_EvBg_BraveHaloGate - BACKGROUND_NEW] = "EvBg_BraveHaloGate",
    [BACKGROUND_EvBg_BraveHell - BACKGROUND_NEW] = "EvBg_BraveHell",
    [BACKGROUND_EvBg_BraveTwilight - BACKGROUND_NEW] = "EvBg_BraveTwilight",
    [BACKGROUND_EvBg_Building - BACKGROUND_NEW] = "EvBg_Building",
    [BACKGROUND_EvBg_Chapter3_BraveHellGate - BACKGROUND_NEW] = "EvBg_Chapter3_BraveHellGate",
    [BACKGROUND_EvBg_Chapter3_BraveInside - BACKGROUND_NEW] = "EvBg_Chapter3_BraveInside",
    [BACKGROUND_EvBg_Chapter3_Hell - BACKGROUND_NEW] = "EvBg_Chapter3_Hell",
    [BACKGROUND_EvBg_Chapter3_HellDoor - BACKGROUND_NEW] = "EvBg_Chapter3_HellDoor",
    [BACKGROUND_EvBg_Chapter8_EmbraDark - BACKGROUND_NEW] = "EvBg_Chapter8_EmbraDark",
    [BACKGROUND_EvBg_EarthTempleEntrance - BACKGROUND_NEW] = "EvBg_EarthTempleEntrance",
    [BACKGROUND_EvBg_EmbraAnotherCastle - BACKGROUND_NEW] = "EvBg_EmbraAnotherCastle",
    [BACKGROUND_EvBg_EmbraAnotherThrone_after - BACKGROUND_NEW] = "EvBg_EmbraAnotherThrone_after",
    [BACKGROUND_EvBg_EmbraDarkOutside2 - BACKGROUND_NEW] = "EvBg_EmbraDarkOutside2",
    [BACKGROUND_EvBg_EmbraGoingDark - BACKGROUND_NEW] = "EvBg_EmbraGoingDark",
    [BACKGROUND_EvBg_EmbraInside - BACKGROUND_NEW] = "EvBg_EmbraInside",
    [BACKGROUND_EvBg_EmbraMountain - BACKGROUND_NEW] = "EvBg_EmbraMountain",
    [BACKGROUND_EvBg_EmbraOutside - BACKGROUND_NEW] = "EvBg_EmbraOutside",
    [BACKGROUND_EvBg_EmbraOutside2 - BACKGROUND_NEW] = "EvBg_EmbraOutside2",
    [BACKGROUND_EvBg_EmbraOutsideForest - BACKGROUND_NEW] = "EvBg_EmbraOutsideForest",
    [BACKGROUND_EvBg_GoldenThreadRiver - BACKGROUND_NEW] = "EvBg_GoldenThreadRiver",
    [BACKGROUND_EvBg_GullveigCastleInside - BACKGROUND_NEW] = "EvBg_GullveigCastleInside",
    [BACKGROUND_EvBg_Hood - BACKGROUND_NEW] = "EvBg_Hood",
    [BACKGROUND_EvBg_LightTemple - BACKGROUND_NEW] = "EvBg_LightTemple",
    [BACKGROUND_EvBg_Nisaveril - BACKGROUND_NEW] = "EvBg_Nisaveril",
    [BACKGROUND_EvBg_NisaverilCastle - BACKGROUND_NEW] = "EvBg_NisaverilCastle",
    [BACKGROUND_EvBg_NisaverilCorridor - BACKGROUND_NEW] = "EvBg_NisaverilCorridor",
    [BACKGROUND_EvBg_NisaverilOutside - BACKGROUND_NEW] = "EvBg_NisaverilOutside",
    [BACKGROUND_EvBg_NisaverilSaintForest - BACKGROUND_NEW] = "EvBg_NisaverilSaintForest",
    [BACKGROUND_EvBg_NisaverilShrine - BACKGROUND_NEW] = "EvBg_NisaverilShrine",
    [BACKGROUND_EvBg_NisaverilTower - BACKGROUND_NEW] = "EvBg_NisaverilTower",
    [BACKGROUND_EvBg_Opening - BACKGROUND_NEW] = "EvBg_Opening",
    [BACKGROUND_EvBg_Svartalf - BACKGROUND_NEW] = "EvBg_Svartalf",
    [BACKGROUND_EvBg_Throne_Brave - BACKGROUND_NEW] = "EvBg_Throne_Brave",
    [BACKGROUND_EvBg_UndergroundPrison_Brave - BACKGROUND_NEW] = "EvBg_UndergroundPrison_Brave",
    [BACKGROUND_EvBg_VanaThrone - BACKGROUND_NEW] = "EvBg_VanaThrone",
    [BACKGROUND_EvBg_YggdrasillAsk - BACKGROUND_NEW] = "EvBg_YggdrasillAsk",
};

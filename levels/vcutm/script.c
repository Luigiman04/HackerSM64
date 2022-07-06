#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1427, 27, 273, 0, 0, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_BOWLING_BALL, -2049, 51, -691, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 1425, 27, 348, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 2862, 51, -691, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_GOOMBA, -733, -156, 484, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1528, -156, -1699, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BITDW_WARP_PIPE, 408, -205, 1675, 0, -180, 0, 0x00000000, bhvWarpPipe),
		OBJECT(MODEL_TRANSPARENT_STAR, -299, -6, -643, 0, 0, 0, (00 << 24), bhvBowserCourseRedCoinStar),
		OBJECT(MODEL_RED_COIN, 1406, -205, 256, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2835, -108, -715, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2063, -112, -715, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1347, 227, -4392, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -560, 227, -3620, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 402, 303, -718, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2104, 282, 1047, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -563, -205, -1822, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 386, -1, -4172, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 386, -1, -4172),
		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, vcutm_area_2),
		WARP_NODE(0x0A, LEVEL_VCUTM, 0x01, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x03, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, -2672, 9, -1999, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_BOWLING_BALL, -1969, 9, 1461, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -2744, 9, -12, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -1946, 9, -1711, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -2750, 9, -4154, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_AMP, -2101, 9, 538, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_AMP, -1853, 9, -4684, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_BITDW_WARP_PIPE, -2905, -151, 2734, 0, 90, 0, 0x000A0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -2330, 9, -6511, 0, 0, 0, 0x0A000000, bhvWarp),
		TERRAIN(vcutm_area_2_collision),
		MACRO_OBJECTS(vcutm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, vcutm_area_3),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x02, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_VCUTM, 0x04, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_VCUTM, 0x03, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_VCUTM, 0x03, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_VCUTM, 0x03, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_VCUTM, 0x03, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_VCUTM, 0x03, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_VCUTM, 0x03, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_VCUTM, 0x03, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(0x09, LEVEL_VCUTM, 0x03, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1629, -206, -330, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3798, -206, -314, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_CHUCKYA, 4348, -206, -1163, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 3735, -206, 643, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -3084, -206, -1254, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_BOWLING_BALL, -4493, -26, 451, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 5380, -26, -436, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_SCUTTLEBUG, 1826, -286, -222, 0, -180, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -4551, -286, -178, 0, -180, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, 5370, -286, -97, 0, -180, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_SCUTTLEBUG, -6553, -286, 508, 0, -180, 0, 0x00000000, bhvScuttlebug),
		OBJECT(MODEL_BOWLING_BALL, -6853, -26, 318, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_NONE, 5176, -237, 1072, 0, -180, 0, 0x0A000000, bhvWarp),
		OBJECT(MODEL_NONE, -7524, -276, -321, 0, 90, 0, 0x0A010000, bhvWarp),
		OBJECT(MODEL_NONE, -6370, -276, -1719, 0, 0, 0, 0x0A020000, bhvWarp),
		OBJECT(MODEL_NONE, -1277, -195, -1709, 0, 0, 0, 0x0A030000, bhvWarp),
		OBJECT(MODEL_NONE, -1277, -195, -1709, 0, -180, 0, 0x0A050000, bhvSparklerSlow),
		OBJECT(MODEL_NONE, -1267, -276, 1135, 0, -180, 0, 0x0A040000, bhvWarp),
		OBJECT(MODEL_NONE, 1957, -222, 1117, 0, -180, 0, 0x0A050000, bhvWarp),
		OBJECT(MODEL_NONE, 1957, -222, 1117, 0, -180, 0, 0x0A050000, bhvSparklerSlow),
		OBJECT(MODEL_NONE, 1987, -276, -1731, 0, 0, -180, 0x0A060000, bhvWarp),
		OBJECT(MODEL_NONE, 390, -276, 1132, 180, 0, 0, 0x0A070000, bhvWarp),
		OBJECT(MODEL_NONE, -4485, -276, 1089, 180, 0, 0, 0x0A080000, bhvWarp),
		OBJECT(MODEL_NONE, -4474, -276, -1793, 0, 0, -180, 0x0A090000, bhvWarp),
		TERRAIN(vcutm_area_3_collision),
		MACRO_OBJECTS(vcutm_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, vcutm_area_4),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x03, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_VCUTM, 0x05, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 8293, -31, -7789, 0, -180, 0, 0, bhvPieCoinerPreArea),
		OBJECT(MODEL_NONE, 2778, 176, 13223, 0, 0, 0, 0x00000000, bhvWarp),
		OBJECT(MODEL_NONE, 10969, 152, 14433, 0, -90, 0, 0x00010000, bhvWarp),
		TERRAIN(vcutm_area_4_collision),
		MACRO_OBJECTS(vcutm_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, vcutm_area_5),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x04, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_VCUTM, 0x05, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_VCUTM, 0x05, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_VCUTM, 0x05, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_VCUTM, 0x05, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_VCUTM, 0x05, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_VCUTM, 0x05, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_VCUTM, 0x06, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_VCUTM, 0x04, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5197, -31, -4704, 0, -180, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 5235, -31, -7852, 0, -180, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, 5192, -31, -10103, 0, 0, 0, 0x00030000, bhvWarp),
		OBJECT(MODEL_NONE, 8309, -31, -10020, 0, 0, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, 9438, -31, -8931, -3, -90, 3, 0x00050000, bhvWarp),
		OBJECT(MODEL_NONE, 9438, -31, -5798, -3, -90, 3, 0x00060000, bhvWarp),
		OBJECT(MODEL_NONE, 4022, -31, -5776, 0, 90, 0, 0x00000000, bhvWarp),
		OBJECT(MODEL_NONE, 7199, -31, -5811, 3, 90, 3, 0x00070000, bhvWarp),
		OBJECT(MODEL_NONE, 7226, -31, -8915, 3, 90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 4083, -31, -8915, 3, 90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 6326, -31, -8944, -3, -90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 6337, -31, -5800, -3, -90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 5179, -31, -6936, 0, 0, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8329, -31, -6936, 0, 0, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8293, -31, -4654, 0, -180, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8293, -31, -7789, 0, -180, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8293, -31, -7789, 0, -180, 0, 0, bhvPieCoiner),
		TERRAIN(vcutm_area_5_collision),
		MACRO_OBJECTS(vcutm_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, vcutm_area_6),
		WARP_NODE(0x00, LEVEL_VCUTM, 0x05, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x74, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5533, 366, -1753, 0, 0, 0, (01 << 24), bhvHiddenStar),
		OBJECT(MODEL_STAR, 6305, 270, -454, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 6305, 270, 769, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 5358, 270, 769, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 4811, 270, -558, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 6283, 270, -1606, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 4880, 397, -1241, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_STAR, 4880, 397, 591, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_STAR, 6025, 397, 232, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_STAR, 5489, 397, -437, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_STAR, 5228, 397, 232, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAR, 6105, 397, -929, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAR, 4978, 397, 25, -16, -59, -32, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_STAR, 5578, 397, -1198, 0, 0, -90, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_STAR, 5058, 397, -929, 180, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 5504, 328, 1263, 0, -180, 0, 0x00000000, bhvWarp),
		TERRAIN(vcutm_area_6_collision),
		MACRO_OBJECTS(vcutm_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x36, SEQ_CHIREIDEN),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 386, -1, -4172),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

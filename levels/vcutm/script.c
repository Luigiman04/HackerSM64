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
		OBJECT(MODEL_NONE, 386, 94, 987, 0, 0, 0, 0x00f10000, bhvDeathWarp),
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
		WARP_NODE(0x01, LEVEL_VCUTM, 0x03, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_VCUTM, 0x01, 0xf1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, -2672, 9, -1999, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_BOWLING_BALL, -1969, 9, 1461, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -2744, 9, -12, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -1946, 9, -1711, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -2750, 9, -4154, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_AMP, -2101, 9, 538, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_AMP, -1853, 9, -4684, 0, 0, 0, 0x00000000, bhvHomingAmp),
		OBJECT(MODEL_BITDW_WARP_PIPE, -2905, -151, 2734, 0, 90, 0, 0x000A0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -2330, -208, -6811, 0, 0, 0, 0x0A000000, bhvWarp),
		OBJECT(MODEL_NONE, -2130, -208, -6811, 0, 0, 0, 0x0A010000, bhvWarp),
		OBJECT(MODEL_NONE, -2530, -208, -6811, 0, 0, 0, 0x0A010000, bhvWarp),
		OBJECT(MODEL_NONE, -2312, 96, -5985, 0, 180, 0, 0x00f10000, bhvDeathWarp),
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

		WARP_NODE(0x20, LEVEL_VCUTM, 0x02, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_VCUTM, 0x04, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x22, LEVEL_VCUTM, 0x03, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x23, LEVEL_VCUTM, 0x03, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x24, LEVEL_VCUTM, 0x03, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x25, LEVEL_VCUTM, 0x03, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x26, LEVEL_VCUTM, 0x03, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0x27, LEVEL_VCUTM, 0x03, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(0x28, LEVEL_VCUTM, 0x03, 0x09, WARP_NO_CHECKPOINT),
		WARP_NODE(0x29, LEVEL_VCUTM, 0x03, 0x07, WARP_NO_CHECKPOINT),

		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_VCUTM, 0x02, 0xf1, WARP_NO_CHECKPOINT),
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

		OBJECT(MODEL_NONE, 5189, -346, 1432, 0, -180, 0, 0x0C000000, bhvWarp),
		OBJECT(MODEL_NONE, 5389, -346, 1432, 0, -180, 0, 0x0C200000, bhvWarp),
		OBJECT(MODEL_NONE, 5589, -346, 1432, 0, -180, 0, 0x0C200000, bhvWarp),
		OBJECT(MODEL_NONE, -7844, -346, -332, 0, 90, 0, 0x0C010000, bhvWarp),
		OBJECT(MODEL_NONE, -7844, -346, -132, 0, 90, 0, 0x0C210000, bhvWarp),
		OBJECT(MODEL_NONE, -7844, -346, -532, 0, 90, 0, 0x0C210000, bhvWarp),
		OBJECT(MODEL_NONE, -6342, -346, -2109, 0, 0, 0, 0x0C020000, bhvWarp),
		OBJECT(MODEL_NONE, -6142, -346, -2109, 0, 0, 0, 0x0C220000, bhvWarp),
		OBJECT(MODEL_NONE, -6542, -346, -2109, 0, 0, 0, 0x0C220000, bhvWarp),
		OBJECT(MODEL_NONE, -1252, -346, -2066, 0, 0, 0, 0x0C030000, bhvWarp),
		OBJECT(MODEL_NONE, -1052, -346, -2066, 0, 0, 0, 0x0C230000, bhvWarp),
		OBJECT(MODEL_NONE, -1452, -346, -2066, 0, 0, 0, 0x0C230000, bhvWarp),
		OBJECT(MODEL_NONE, -1277, -195, -1709, 0, -180, 0, 0, bhvSparklerSlow),
		OBJECT(MODEL_NONE, -1239, -346, 1432, 0, -180, 0, 0x0C040000, bhvWarp),
		OBJECT(MODEL_NONE, -1039, -346, 1432, 0, -180, 0, 0x0C240000, bhvWarp),
		OBJECT(MODEL_NONE, -1439, -346, 1432, 0, -180, 0, 0x0C240000, bhvWarp),
		OBJECT(MODEL_NONE, 1957, -346, 1425, 0, -180, 0, 0x0C050000, bhvWarp),
		OBJECT(MODEL_NONE, 1757, -346, 1425, 0, -180, 0, 0x0C250000, bhvWarp),
		OBJECT(MODEL_NONE, 2157, -346, 1425, 0, -180, 0, 0x0C250000, bhvWarp),
		OBJECT(MODEL_NONE, 1957, -222, 1117, 0, -180, 0, 0, bhvSparklerSlow),
		OBJECT(MODEL_NONE, 1956, -346, -2112, 0, 0, -180, 0x0C060000, bhvWarp),
		OBJECT(MODEL_NONE, 1756, -346, -2112, 0, 0, -180, 0x0C260000, bhvWarp),
		OBJECT(MODEL_NONE, 2156, -346, -2112, 0, 0, -180, 0x0C260000, bhvWarp),
		OBJECT(MODEL_NONE, 351, -346, 1470, 0, 180, 0, 0x0C070000, bhvWarp),
		OBJECT(MODEL_NONE, 551, -346, 1470, 0, 180, 0, 0x0C270000, bhvWarp),
		OBJECT(MODEL_NONE, 751, -346, 1470, 0, 180, 0, 0x0C270000, bhvWarp),
		OBJECT(MODEL_NONE, -4459, -346, 1459, 0, 180, 0, 0x0C080000, bhvWarp),
		OBJECT(MODEL_NONE, -4259, -346, 1459, 0, 180, 0, 0x0C280000, bhvWarp),
		OBJECT(MODEL_NONE, -4659, -346, 1459, 0, 180, 0, 0x0C280000, bhvWarp),
		OBJECT(MODEL_NONE, -4456, -346, -2100, 0, 0, -180, 0x0C090000, bhvWarp),
		OBJECT(MODEL_NONE, -4256, -346, -2100, 0, 0, -180, 0x0C290000, bhvWarp),
		OBJECT(MODEL_NONE, -4656, -346, -2100, 0, 0, -180, 0x0C290000, bhvWarp),
		OBJECT(MODEL_NONE, -6891, 166, -286, 0, 270, 0, 0x00f10000, bhvDeathWarp),
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
		WARP_NODE(0x20, LEVEL_VCUTM, 0x03, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_VCUTM, 0x05, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_VCUTM, 0x03, 0xf1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 8293, -31, -7789, 0, -180, 0, 0, bhvPieCoinerPreArea),
		OBJECT(MODEL_NONE, 2744, 82, 12972, 0, 0, 0, 0x0C000000, bhvWarp),
		OBJECT(MODEL_NONE, 2544, 82, 12972, 0, 0, 0, 0x0C200000, bhvWarp),
		OBJECT(MODEL_NONE, 2944, 82, 12972, 0, 0, 0, 0x0C200000, bhvWarp),
		OBJECT(MODEL_NONE, 11202, 82, 14395, 0, -90, 0, 0x0C010000, bhvWarp),
		OBJECT(MODEL_NONE, 11202, 82, 14195, 0, -90, 0, 0x0C210000, bhvWarp),
		OBJECT(MODEL_NONE, 11202, 82, 14595, 0, -90, 0, 0x0C210000, bhvWarp),
		OBJECT(MODEL_NONE, 10191, 467, 14414, 0, 90, 0, 0x00f10000, bhvDeathWarp),
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
		WARP_NODE(0x08, LEVEL_VCUTM, 0x04, 0xf1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_VCUTM, 0x04, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_VCUTM, 0x05, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x22, LEVEL_VCUTM, 0x05, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x23, LEVEL_VCUTM, 0x05, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0x24, LEVEL_VCUTM, 0x05, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x25, LEVEL_VCUTM, 0x05, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x26, LEVEL_VCUTM, 0x05, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x27, LEVEL_VCUTM, 0x06, 0x00, WARP_NO_CHECKPOINT),
		WARP_NODE(0x28, LEVEL_VCUTM, 0x04, 0xf1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x04, 0xf1, WARP_NO_CHECKPOINT),
	
		OBJECT(MODEL_NONE, 5195, -123, -4429, 0, -180, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 5095, -123, -4429, 0, -180, 0, 0x00210000, bhvWarp),
		OBJECT(MODEL_NONE, 5295, -123, -4429, 0, -180, 0, 0x00210000, bhvWarp),
		OBJECT(MODEL_NONE, 5200, -123, -7556, 0, -180, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, 5300, -123, -7556, 0, -180, 0, 0x00220000, bhvWarp),
		OBJECT(MODEL_NONE, 5400, -123, -7556, 0, -180, 0, 0x00220000, bhvWarp),
		OBJECT(MODEL_NONE, 5199, -123, -10303, 0, 0, 0, 0x00030000, bhvWarp),
		OBJECT(MODEL_NONE, 5299, -123, -10303, 0, 0, 0, 0x00230000, bhvWarp),
		OBJECT(MODEL_NONE, 5399, -123, -10303, 0, 0, 0, 0x00230000, bhvWarp),
		OBJECT(MODEL_NONE, 8321, -123, -10290, 0, 0, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, 8421, -123, -10290, 0, 0, 0, 0x00240000, bhvWarp),
		OBJECT(MODEL_NONE, 8521, -123, -10290, 0, 0, 0, 0x00240000, bhvWarp),
		OBJECT(MODEL_NONE, 9699, -123, -8924, -3, -90, 3, 0x00050000, bhvWarp),
		OBJECT(MODEL_NONE, 9699, -123, -8824, -3, -90, 3, 0x00250000, bhvWarp),
		OBJECT(MODEL_NONE, 9699, -123, -9024, -3, -90, 3, 0x00250000, bhvWarp),
		OBJECT(MODEL_NONE, 9666, -123, -5799, -3, -90, 3, 0x00060000, bhvWarp),
		OBJECT(MODEL_NONE, 9666, -123, -5899, -3, -90, 3, 0x00260000, bhvWarp),
		OBJECT(MODEL_NONE, 9666, -123, -5699, -3, -90, 3, 0x00260000, bhvWarp),
		OBJECT(MODEL_NONE, 3852, -123, -5788, 0, 90, 0, 0x08000000, bhvWarp),
		OBJECT(MODEL_NONE, 3852, -123, -5688, 0, 90, 0, 0x08200000, bhvWarp),
		OBJECT(MODEL_NONE, 3852, -123, -5888, 0, 90, 0, 0x08200000, bhvWarp),
		OBJECT(MODEL_NONE, 6941, -123, -5798, 3, 90, 3, 0x00070000, bhvWarp),
		OBJECT(MODEL_NONE, 6941, -123, -5698, 3, 90, 3, 0x00270000, bhvWarp),
		OBJECT(MODEL_NONE, 6941, -123, -5898, 3, 90, 3, 0x00270000, bhvWarp),
		OBJECT(MODEL_NONE, 6925, -123, -8902, 3, 90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 6925, -123, -9002, 3, 90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 6925, -123, -8802, 3, 90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 3817, -123, -8916, 3, 90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 3817, -123, -9016, 3, 90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 3817, -123, -8816, 3, 90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 6572, -123, -8908, -3, -90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 6572, -123, -8808, -3, -90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 6572, -123, -9008, -3, -90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 6598, -123, -5813, -3, -90, 3, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 6598, -123, -5913, -3, -90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 6598, -123, -5713, -3, -90, 3, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 5196, -123, -7177, 0, 0, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 5296, -123, -7177, 0, 0, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 5396, -123, -7177, 0, 0, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8307, -123, -7199, 0, 0, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8207, -123, -7199, 0, 0, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8407, -123, -7199, 0, 0, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8289, -123, -4456, 0, -180, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8189, -123, -4456, 0, -180, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8389, -123, -4456, 0, -180, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8315, -123, -7523, 0, -180, 0, 0x00080000, bhvWarp),
		OBJECT(MODEL_NONE, 8415, -123, -7523, 0, -180, 0, 0x00280000, bhvWarp),
		OBJECT(MODEL_NONE, 8215, -123, -7523, 0, -180, 0, 0x00280000, bhvWarp),

		OBJECT(MODEL_NONE, 8293, -31, -7789, 0, -180, 0, 0, bhvPieCoiner),
		OBJECT(MODEL_NONE, 7776, 53, -5797, 0, 90, 0, 0x00f10000, bhvDeathWarp),
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
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x05, 0xf1, WARP_NO_CHECKPOINT),
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

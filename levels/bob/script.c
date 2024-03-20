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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 721, 43, -562, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 718, 43, 578, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_STAGE1, 0, 0, 0, 0, 0, 0, (1 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -622, 434, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -622, 434, 0),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -884, 43, -442, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -913, 43, 444, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 304, 43, -5, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1463, 43, -443, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1448, 43, 464, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_STAGE2, 0, 0, 0, 0, 0, 0, (2 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2493, 63, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -5071, 1717, 158, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -4008, 1717, -188, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -2435, 1159, 390, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -1761, 600, -373, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1109, 43, 15, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_STAGE3, 0, 0, 0, 0, 0, 0, (3 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -5048, 2754, 1719, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, bob_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -5893, 43, -2171, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -4058, 43, -379, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -1434, 43, 323, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -3375, 43, 4112, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1059, 43, 5111, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 3900, 43, 1761, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_GOOMBA, -1975, 0, -758, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4064, 0, 2194, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAGE4, 0, 0, 0, 0, 0, 0, (4 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -5248, 14, -4286, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_4_collision),
		MACRO_OBJECTS(bob_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, bob_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 2205, 43, 1101, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 2198, 43, -1189, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 780, -517, 62, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_STAGE5, 0, 0, 0, 0, 0, 0, (5 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2493, -548, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_5_collision),
		MACRO_OBJECTS(bob_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -622, 434, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

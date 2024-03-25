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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE11, stage11_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE12, stage12_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE13, stage13_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE14, stage14_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE15, stage15_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ROTATER, rotater_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -5, 143, 2547, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -3143, 1070, 6874, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 3287, 1097, 4422, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 7, 434, -1520, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_STAGE11, 0, 0, 0, 0, 0, 0, (11 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 7, 434, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 7, 434, 0),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 1344, 225, 2870, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 7, 434, -1520, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_STAGE12, 0, 0, 0, 0, 0, 0, (12 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 7, 434, -507, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 559, 3848, 195, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1209, 1712, 2954, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1262, 622, 1732, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -528, 6614, -3361, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_STAGE13, 0, 0, 0, 0, 0, 0, (13 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 519, 6614, -3015, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, wf_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 380, 3239, -729, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1107, 3239, 2981, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 1283, 3738, -9730, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOOMBA, 995, -1680, -4309, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 739, -1680, 349, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 187, -1680, -1760, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 208, -1680, -7082, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1265, -1680, 2765, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 492, -1680, 4040, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 302, -1680, 1698, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 529, -1680, 3081, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 784, -1680, -1577, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1336, -1680, 532, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 923, -1680, 3417, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 259, -1680, -3993, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1031, -1680, -5268, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1221, -1680, -2926, 0, -180, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAGE14, 0, 0, 0, 0, 0, 0, (14 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 1283, 3738, -8211, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_4_collision),
		MACRO_OBJECTS(wf_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, wf_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 6837, 3259, -1693, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -5191, 3259, -1750, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 3960, 3259, 3991, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -3331, 3259, 2786, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 720, 3526, -9974, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_ROTATER, 733, 3244, -1646, 0, 0, 0, 0x00000000, bhvRotater),
		OBJECT(MODEL_STAGE15, 0, 0, 0, 0, 0, 0, (15 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 733, 3604, -9311, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_5_collision),
		MACRO_OBJECTS(wf_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 7, 434, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

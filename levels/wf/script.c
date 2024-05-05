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
	LOAD_MODEL_FROM_GEO(MODEL_STAGE16, stage16_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE17, stage17_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE18, stage18_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE19, stage19_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STAGE20, stage20_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ROTATER, rotater_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -49, -260, 869, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -359, 104, 1338, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 7, 434, -1520, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, -5, -692, 4587, 0, 0, 0, 0x00000000, bhvGoal),
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
		OBJECT(MODEL_REAL_COIN, 1344, 52, 2870, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 13, -85, -3283, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 17, 0, 3047, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE12, 0, 0, 0, 0, 0, 0, (12 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 13, -444, -2270, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
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
		OBJECT(MODEL_REAL_COIN, 218, 787, 2459, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 363, 535, -1072, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 62, 110, 4961, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE13, 0, 0, 0, 0, 0, 0, (13 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 119, 314, -300, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
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
		OBJECT(MODEL_REAL_COIN, -96, 774, 1640, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -88, 750, 627, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -30, 771, -487, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 133, 349, -4200, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, -59, 110, 4961, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE14, 0, 0, 0, 0, 0, 0, (14 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 133, 349, -2680, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
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
		OBJECT(MODEL_REAL_COIN, 570, 203, -1795, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 211, 470, -4055, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, -149, 110, 4961, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE15, 0, 0, 0, 0, 0, 0, (15 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 224, 548, -2904, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_5_collision),
		MACRO_OBJECTS(wf_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, wf_area_6),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -1084, 244, 5068, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 19, 831, -8925, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 14, 172, 7758, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_ROTATER, -4491, 188, 173, 0, 0, 0, 0x00000000, bhvRotater),
		OBJECT(MODEL_STAGE16, 0, 0, 0, 0, 0, 0, (16 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 32, 909, -8262, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_6_collision),
		MACRO_OBJECTS(wf_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(7, wf_area_7),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -1359, 244, 1616, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 19, 831, -8925, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 14, 172, 2284, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE17, 0, 0, 0, 0, 0, 0, (17 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 32, 317, -8104, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_7_collision),
		MACRO_OBJECTS(wf_area_7_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(8, wf_area_8),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 1205, 692, 88, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, 19, 175, -8090, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 14, 692, 2284, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE18, 0, 0, 0, 0, 0, 0, (18 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, 32, -338, -7178, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_8_collision),
		MACRO_OBJECTS(wf_area_8_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(9, wf_area_9),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -177, 466, -2255, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, -36, -125, 514, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE19, 0, 0, 0, 0, 0, 0, (19 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -164, -48, -1592, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_9_collision),
		MACRO_OBJECTS(wf_area_9_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(10, wf_area_10),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -177, 466, -2255, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, -36, -125, 514, 0, 0, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE20, 0, 0, 0, 0, 0, 0, (20 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -164, -48, -1592, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_10_collision),
		MACRO_OBJECTS(wf_area_10_macro_objs),
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

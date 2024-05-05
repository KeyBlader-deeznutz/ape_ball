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
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 721, 43, -562, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 718, 43, 578, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -3971, 605, 0, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_STAGE1, 0, 0, 0, 0, 0, 0, (1 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -3182, 434, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -3182, 434, 0),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 304, 43, -5, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1463, 43, -443, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1448, 43, 464, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -2409, 321, 0, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2188, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE2, 0, 0, 0, 0, 0, 0, (2 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2092, 123, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3360, 750, -195, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2788, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE3, 0, 0, 0, 0, 0, 0, (3 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2539, 198, -96, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, bob_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -3517, 914, -43, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2841, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE4, 0, 0, 0, 0, 0, 0, (4 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2631, 281, 60, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_4_collision),
		MACRO_OBJECTS(bob_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, bob_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 55, 43, 901, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 106, 43, -993, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -3330, 620, 0, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2785, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE5, 0, 0, 0, 0, 0, 0, (5 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2199, 308, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_5_collision),
		MACRO_OBJECTS(bob_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, bob_area_6),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 330, -1216, 1402, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 390, 170, -928, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, -374, 68, 853, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 1203, 121, 417, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -3674, 158, 498, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2886, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE6, 0, 0, 0, 0, 0, 0, (6 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2614, 158, 498, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_6_collision),
		MACRO_OBJECTS(bob_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(7, bob_area_7),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -370, 565, 927, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 164, 565, 927, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -4229, 486, 32, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2722, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE7, 0, 0, 0, 0, 0, 0, (7 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2590, 116, 32, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_7_collision),
		MACRO_OBJECTS(bob_area_7_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(8, bob_area_8),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, -1382, 1789, 501, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_REAL_COIN, 2425, 397, -252, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -4759, 2748, 64, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 3470, 0, 1653, 0, -180, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE8, 0, 0, 0, 0, 0, 0, (8 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -3516, 2459, -40, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_8_collision),
		MACRO_OBJECTS(bob_area_8_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(9, bob_area_9),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_REAL_COIN, 1396, 37, -806, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_GOOMBA, -33, 37, -46, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_REAL_COIN, 1396, 37, 793, 0, 0, 0, 0x00000000, bhvStageCoin),
		OBJECT(MODEL_NONE, -3376, 548, 9, 0, 0, 0, 0x00000000, bhvViewAligner),
		OBJECT(MODEL_GOAL, 2798, 0, -63, 0, 90, 0, 0x00000000, bhvGoal),
		OBJECT(MODEL_STAGE9, 0, 0, 0, 0, 0, 0, (9 << 16), bhvTestplane),
		OBJECT(MODEL_NONE, -2625, 213, -26, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_9_collision),
		MACRO_OBJECTS(bob_area_9_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_MONKEY_1),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(10, bob_area_10),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 1628, 4619, 0, 0, 0, (1 << 16), bhvViewAligner),
		OBJECT(MODEL_PLINKO_TEXT, 0, 0, 0, 0, 0, 0, 0x00000000, bhvPlinkoText),
		OBJECT(MODEL_NONE, 55, 2478, 100, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bob_area_10_collision),
		MACRO_OBJECTS(bob_area_10_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3182, 434, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

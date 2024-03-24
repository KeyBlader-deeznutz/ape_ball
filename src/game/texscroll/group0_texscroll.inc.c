#include "actors/group0.h"
#include "actors/stage1/texscroll.inc.c"
#include "actors/stage2/texscroll.inc.c"
#include "actors/stage3/texscroll.inc.c"
#include "actors/stage4/texscroll.inc.c"
#include "actors/stage5/texscroll.inc.c"
#include "actors/boost_vertical/texscroll.inc.c"
#include "actors/boost_ring/texscroll.inc.c"
#include "actors/stage6/texscroll.inc.c"
#include "actors/stage7/texscroll.inc.c"
#include "actors/stage8/texscroll.inc.c"
#include "actors/stage9/texscroll.inc.c"
#include "actors/stage10/texscroll.inc.c"
void scroll_textures_group0() {
	scroll_actor_geo_stage1();
	scroll_actor_geo_stage2();
	scroll_actor_geo_stage3();
	scroll_actor_geo_stage4();
	scroll_actor_geo_stage5();
	scroll_actor_geo_boost_vertical();
	scroll_actor_geo_boost_ring();
	scroll_actor_geo_stage6();
	scroll_actor_geo_stage7();
	scroll_actor_geo_stage8();
	scroll_actor_geo_stage9();
		scroll_actor_geo_stage10();
}

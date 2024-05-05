#include "actors/group0.h"
#include "actors/stage1/texscroll.inc.c"
#include "actors/stage2/texscroll.inc.c"
#include "actors/boost_vertical/texscroll.inc.c"
#include "actors/boost_ring/texscroll.inc.c"
#include "actors/stage7/texscroll.inc.c"
#include "actors/stage10/texscroll.inc.c"
#include "actors/goal/texscroll.inc.c"
void scroll_textures_group0() {
	scroll_actor_geo_stage1();
	scroll_actor_geo_stage2();
				scroll_actor_geo_boost_vertical();
	scroll_actor_geo_boost_ring();
		scroll_actor_geo_stage7();
				scroll_actor_geo_stage10();
	scroll_actor_geo_goal();
}

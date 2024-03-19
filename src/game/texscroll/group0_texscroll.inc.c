#include "actors/group0.h"
#include "actors/stage1/texscroll.inc.c"
#include "actors/stage2/texscroll.inc.c"
#include "actors/stage3/texscroll.inc.c"
#include "actors/stage4/texscroll.inc.c"
#include "actors/stage5/texscroll.inc.c"
void scroll_textures_group0() {
	scroll_actor_geo_stage1();
	scroll_actor_geo_stage2();
	scroll_actor_geo_stage3();
	scroll_actor_geo_stage4();
	scroll_actor_geo_stage5();
}

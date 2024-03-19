#include "actors/group0.h"
#include "actors/stage1/texscroll.inc.c"
#include "actors/stage2/texscroll.inc.c"
void scroll_textures_group0() {
	scroll_actor_geo_stage1();
	scroll_actor_geo_stage2();
}

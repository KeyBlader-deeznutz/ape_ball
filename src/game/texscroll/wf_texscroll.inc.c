#include "levels/wf/header.h"
#include "levels/wf/texscroll.inc.c"
#include "levels/wf/stage12/texscroll.inc.c"
#include "levels/wf/stage13/texscroll.inc.c"
#include "levels/wf/stage14/texscroll.inc.c"
#include "levels/wf/rotater/texscroll.inc.c"
#include "levels/wf/stage15/texscroll.inc.c"
#include "levels/wf/stage16/texscroll.inc.c"
#include "levels/wf/stage18/texscroll.inc.c"
#include "levels/wf/stage19/texscroll.inc.c"
void scroll_textures_wf() {
		scroll_wf();
	scroll_wf_level_geo_stage12();
	scroll_wf_level_geo_stage13();
	scroll_wf_level_geo_stage14();
	scroll_wf_level_geo_rotater();
	scroll_wf_level_geo_stage15();
	scroll_wf_level_geo_stage16();
	scroll_wf_level_geo_stage18();
	scroll_wf_level_geo_stage19();
}

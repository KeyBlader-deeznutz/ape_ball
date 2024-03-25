#include "levels/wf/header.h"
#include "levels/wf/stage11/texscroll.inc.c"
#include "levels/wf/texscroll.inc.c"
#include "levels/wf/stage12/texscroll.inc.c"
#include "levels/wf/stage13/texscroll.inc.c"
#include "levels/wf/stage14/texscroll.inc.c"
#include "levels/wf/rotater/texscroll.inc.c"
#include "levels/wf/stage15/texscroll.inc.c"
void scroll_textures_wf() {
	scroll_wf_level_geo_stage11();
	scroll_wf();
	scroll_wf_level_geo_stage12();
	scroll_wf_level_geo_stage13();
	scroll_wf_level_geo_stage14();
	scroll_wf_level_geo_rotater();
	scroll_wf_level_geo_stage15();
}

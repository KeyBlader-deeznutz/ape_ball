#include "levels/wf/header.h"
#include "levels/wf/stage11/texscroll.inc.c"
#include "levels/wf/texscroll.inc.c"
#include "levels/wf/stage12/texscroll.inc.c"
#include "levels/wf/stage13/texscroll.inc.c"
void scroll_textures_wf() {
	scroll_wf_level_geo_stage11();
	scroll_wf();
	scroll_wf_level_geo_stage12();
	scroll_wf_level_geo_stage13();
}

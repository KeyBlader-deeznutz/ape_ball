#include "src/game/envfx_snow.h"

const GeoLayout stage3_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage3_stage_3_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, stage3_stage_3_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

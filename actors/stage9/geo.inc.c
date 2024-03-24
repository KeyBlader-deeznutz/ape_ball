#include "src/game/envfx_snow.h"

const GeoLayout stage9_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage9_Plane_018_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage9_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

#include "src/game/envfx_snow.h"

const GeoLayout stage3_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage3_Plane_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, stage3_Plane_005_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage3_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, stage3_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

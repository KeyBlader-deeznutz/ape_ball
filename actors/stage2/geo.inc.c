#include "src/game/envfx_snow.h"

const GeoLayout stage2_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage2_Plane_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage2_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

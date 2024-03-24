#include "src/game/envfx_snow.h"

const GeoLayout plinko_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, plinko_Plane_020_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, plinko_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

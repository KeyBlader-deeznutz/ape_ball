#include "src/game/envfx_snow.h"

const GeoLayout stage11_geo[] = {
	GEO_CULLING_RADIUS(32767),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stage11_Stage11_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

#include "src/game/envfx_snow.h"

const GeoLayout boost_ring_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(GEO_TRANSPARENCY_MODE_NORMAL, geo_update_layer_transparency),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boost_ring_Circle_mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boost_ring_material_revert_render_settings),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

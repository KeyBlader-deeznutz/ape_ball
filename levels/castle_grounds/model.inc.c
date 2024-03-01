
Vtx castle_grounds_dl_Plane_mesh_layer_1_vtx_cull[8] = {
	{{ {-7962, -1503, 7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-7962, -1503, 7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-7962, -1503, -7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-7962, -1503, -7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {7962, -1503, 7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {7962, -1503, 7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {7962, -1503, -7962}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {7962, -1503, -7962}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx castle_grounds_dl_Plane_mesh_layer_1_vtx_0[4] = {
	{{ {-7962, -1503, 7962}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {7962, -1503, 7962}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {7962, -1503, -7962}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-7962, -1503, -7962}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx castle_grounds_dl_Plane_mesh_layer_1_tri_0[] = {
	gsSPVertex(castle_grounds_dl_Plane_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_castle_grounds_dl_f3dlite_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xffffffff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx castle_grounds_dl_Plane_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(castle_grounds_dl_Plane_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_castle_grounds_dl_f3dlite_material_001),
	gsSPDisplayList(castle_grounds_dl_Plane_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx castle_grounds_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


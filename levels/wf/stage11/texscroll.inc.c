void scroll_stage11_Cube_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(stage11_Cube_mesh_layer_1_vtx_3);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_stage11_autoboost_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stage11_autoboost_layer1);

	shift_t_down(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_wf_level_geo_stage11() {
	scroll_stage11_Cube_mesh_layer_1_vtx_3();
	scroll_gfx_mat_stage11_autoboost_layer1();
};

void scroll_bob_dl_Plane_019_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 4;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Plane_019_mesh_layer_1_vtx_2);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_bob_dl_cozieswater_001_layer5_area2() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_cozieswater_001_layer5_area2);


	shift_t(mat, 13, PACK_TILESIZE(0, 2));
	shift_s(mat, 18, PACK_TILESIZE(0, 1));
	shift_t(mat, 18, PACK_TILESIZE(0, 3));

};

void scroll_gfx_mat_bob_dl_f3dlite_material_024() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_f3dlite_material_024);
	static int interval_tex_bob_dl_f3dlite_material_024 = 5;
	static int cur_interval_tex_bob_dl_f3dlite_material_024 = 5;

	if (--cur_interval_tex_bob_dl_f3dlite_material_024 <= 0) {
		shift_s(mat, 9, PACK_TILESIZE(0, 129));
		cur_interval_tex_bob_dl_f3dlite_material_024 = interval_tex_bob_dl_f3dlite_material_024;
	}

};

void scroll_bob() {
	scroll_bob_dl_Plane_019_mesh_layer_1_vtx_2();
	scroll_gfx_mat_bob_dl_cozieswater_001_layer5_area2();
	scroll_gfx_mat_bob_dl_f3dlite_material_024();
};

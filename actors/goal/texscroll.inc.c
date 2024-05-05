void scroll_goal_Goal_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(goal_Goal_mesh_layer_1_vtx_0);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_goal_cozieswater_001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_goal_cozieswater_001_layer5);


	shift_t(mat, 13, PACK_TILESIZE(0, 2));
	shift_s(mat, 18, PACK_TILESIZE(0, 1));
	shift_t(mat, 18, PACK_TILESIZE(0, 3));

};

void scroll_actor_geo_goal() {
	scroll_goal_Goal_mesh_layer_1_vtx_0();
	scroll_gfx_mat_goal_cozieswater_001_layer5();
};

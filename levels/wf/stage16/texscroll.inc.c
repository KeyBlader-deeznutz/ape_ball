void scroll_stage16_Cube_006_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 26;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(stage16_Cube_006_mesh_layer_1_vtx_1);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_level_geo_stage16() {
	scroll_stage16_Cube_006_mesh_layer_1_vtx_1();
};

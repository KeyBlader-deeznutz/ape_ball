void scroll_gfx_mat_stage12_Z_Jump_pad_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stage12_Z_Jump_pad_layer1);

	shift_t_down(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_stage12_b_bricks_vine_002_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stage12_b_bricks_vine_002_layer1);

	shift_t(mat, 10, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_stage12_b_bricks_vine_001_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stage12_b_bricks_vine_001_layer1);

	shift_t(mat, 10, PACK_TILESIZE(0, 1));

};

void scroll_wf_level_geo_stage12() {
	scroll_gfx_mat_stage12_Z_Jump_pad_layer1();
	scroll_gfx_mat_stage12_b_bricks_vine_002_layer1();
	scroll_gfx_mat_stage12_b_bricks_vine_001_layer1();
};

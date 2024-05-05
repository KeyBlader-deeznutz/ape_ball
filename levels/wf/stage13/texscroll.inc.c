void scroll_gfx_mat_stage13_Z_Jump_pad_layer1() {
	Gfx *mat = segmented_to_virtual(mat_stage13_Z_Jump_pad_layer1);

	shift_t_down(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_wf_level_geo_stage13() {
	scroll_gfx_mat_stage13_Z_Jump_pad_layer1();
};

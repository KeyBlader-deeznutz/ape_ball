void scroll_gfx_mat_rotater_autoboost_layer1() {
	Gfx *mat = segmented_to_virtual(mat_rotater_autoboost_layer1);

	shift_t_down(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_wf_level_geo_rotater() {
	scroll_gfx_mat_rotater_autoboost_layer1();
};

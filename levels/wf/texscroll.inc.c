void scroll_gfx_mat_wf_dl_cozieswater_001_layer5_area1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_cozieswater_001_layer5_area1);


	shift_t(mat, 13, PACK_TILESIZE(0, 2));
	shift_s(mat, 18, PACK_TILESIZE(0, 1));
	shift_t(mat, 18, PACK_TILESIZE(0, 3));

};

void scroll_wf() {
	scroll_gfx_mat_wf_dl_cozieswater_001_layer5_area1();
};

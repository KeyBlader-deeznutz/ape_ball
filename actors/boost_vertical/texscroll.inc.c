void scroll_gfx_mat_boost_vertical_spooky_tiles_layer5() {
	Gfx *mat = segmented_to_virtual(mat_boost_vertical_spooky_tiles_layer5);


	shift_s(mat, 11, PACK_TILESIZE(0, 5));
	shift_t(mat, 11, PACK_TILESIZE(0, 3));
	shift_s(mat, 16, PACK_TILESIZE(0, 3));
	shift_t(mat, 16, PACK_TILESIZE(0, 2));

};

void scroll_actor_geo_boost_vertical() {
	scroll_gfx_mat_boost_vertical_spooky_tiles_layer5();
};
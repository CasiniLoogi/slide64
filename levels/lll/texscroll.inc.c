void scroll_lll_dl_GeoArea1_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 24;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_GeoArea1_mesh_layer_1_vtx_4);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;
	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_lll_dl_GeoArea2_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 18;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_GeoArea2_mesh_layer_1_vtx_0);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;
	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_gfx_mat_lll_dl_Lava_layer1() {
	Gfx *mat = segmented_to_virtual(mat_lll_dl_Lava_layer1);


	shift_s(mat, 10, PACK_TILESIZE(0, 1));
	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));

};

void scroll_lll() {
	scroll_lll_dl_GeoArea1_mesh_layer_1_vtx_4();
	scroll_lll_dl_GeoArea2_mesh_layer_1_vtx_0();
	scroll_gfx_mat_lll_dl_Lava_layer1();
};

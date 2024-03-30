void scroll_bob_dl_GeoMain_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 4;
	int width = 128 * 0x20;
	int height = 128 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_GeoMain_mesh_layer_1_vtx_2);

	deltaX = (int)(0.0 * 0x20) % width;
	deltaY = (int)(0.0 * 0x20) % height;

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

void scroll_bob_dl_GeoMain_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 72;
	int height = 128 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_GeoMain_mesh_layer_5_vtx_0);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_bob_dl_Water_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_Water_layer1);


	shift_s(mat, 10, PACK_TILESIZE(0, 1));
	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_bob_dl_WaterAlpha_layer5() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_WaterAlpha_layer5);

	shift_t_down(mat, 10, PACK_TILESIZE(0, 3));

};

void scroll_bob() {
	scroll_bob_dl_GeoMain_mesh_layer_1_vtx_2();
	scroll_bob_dl_GeoMain_mesh_layer_5_vtx_0();
	scroll_gfx_mat_bob_dl_Water_layer1();
	scroll_gfx_mat_bob_dl_WaterAlpha_layer5();
};
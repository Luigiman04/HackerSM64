void scroll_mtc_ball_Course_13_002_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 27;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(mtc_ball_Course_13_002_mesh_layer_5_vtx_0);

	deltaX = (int)(0.25 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_mtc_level_geo_mtc_ball() {
	scroll_mtc_ball_Course_13_002_mesh_layer_5_vtx_0();
}

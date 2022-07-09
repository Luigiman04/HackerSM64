#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -4406, 0, 3015, castle_grounds_dl__bg_mesh_layer_5),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, castle_grounds_dl_Lake_of_the_East_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_Lake_of_the_East_mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, castle_grounds_dl_Lake_of_the_East_mesh_layer_2),
			GEO_DISPLAY_LIST(LAYER_ALPHA, castle_grounds_dl_Lake_of_the_East_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_ROTATION_NODE_WITH_DL(LAYER_TRANSPARENT, 90, 0, 0, castle_grounds_dl_Lake_of_the_East_001_mesh_layer_5),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -927, -444, 1060),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3523, -1104, 4740, castle_grounds_dl_Plane_003_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

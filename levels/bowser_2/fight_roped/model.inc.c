Lights1 fight_roped_ropetr_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx fight_roped_rope_ci8_aligner[] = {gsSPEndDisplayList()};
u8 fight_roped_rope_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x03, 
	0x03, 0x01, 0x04, 0x05, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x08, 
	0x08, 0x01, 0x01, 0x04, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x06, 0x08, 
	0x0a, 0x02, 0x02, 0x0b, 0x0c, 0x05, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x06, 0x0d, 
	0x0a, 0x02, 0x02, 0x02, 0x0b, 0x0e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x05, 0x0f, 
	0x10, 0x11, 0x11, 0x11, 0x12, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x10, 0x0c, 0x0f, 
	0x0c, 0x14, 0x12, 0x11, 0x11, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x16, 0x16, 0x17, 
	0x18, 0x19, 0x0d, 0x08, 0x08, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x16, 0x16, 0x16, 
	0x17, 0x19, 0x1a, 0x19, 0x0d, 0x06, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x16, 0x16, 0x1b, 
	0x1c, 0x1d, 0x1e, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x06, 0x17, 0x16, 0x1b, 
	0x20, 0x21, 0x21, 0x1e, 0x1e, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x17, 0x1c, 
	0x20, 0x23, 0x23, 0x24, 0x1e, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x22, 0x24, 
	0x20, 0x23, 0x23, 0x23, 0x24, 0x13, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x22, 
	0x16, 0x25, 0x26, 0x26, 0x25, 0x27, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x16, 0x17, 0x22, 
	0x22, 0x28, 0x25, 0x26, 0x26, 0x29, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x23, 0x23, 0x24, 
	0x1e, 0x2a, 0x2a, 0x2b, 0x2c, 0x29, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x23, 0x23, 0x23, 
	0x24, 0x2a, 0x2a, 0x2a, 0x2b, 0x27, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x02, 0x2d, 0x2e, 0x2f, 
	0x30, 0x31, 0x32, 0x1e, 0x1e, 0x33, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x2d, 0x2e, 0x2f, 
	0x34, 0x35, 0x31, 0x1e, 0x36, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x2d, 0x30, 
	0x34, 0x35, 0x35, 0x38, 0x1e, 0x33, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x37, 0x39, 
	0x2f, 0x35, 0x35, 0x3a, 0x38, 0x3b, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x32, 
	0x1b, 0x3c, 0x3c, 0x3c, 0x3d, 0x27, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x17, 0x24, 0x32, 0x32, 
	0x24, 0x3e, 0x3d, 0x3f, 0x3f, 0x29, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x41, 0x41, 0x28, 
	0x32, 0x32, 0x24, 0x24, 0x1b, 0x29, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x42, 0x41, 
	0x28, 0x32, 0x32, 0x32, 0x24, 0x27, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x43, 0x43, 0x44, 
	0x44, 0x45, 0x46, 0x18, 0x18, 0x47, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x15, 0x1c, 0x43, 0x44, 
	0x48, 0x34, 0x45, 0x18, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x1e, 0x1c, 0x44, 
	0x48, 0x34, 0x34, 0x49, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x36, 0x1e, 0x1e, 0x4a, 
	0x44, 0x34, 0x34, 0x4b, 0x49, 0x47, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x4c, 0x4c, 0x4d, 
	0x21, 0x3c, 0x3c, 0x3f, 0x3e, 0x4e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x4d, 0x4d, 0x4c, 
	0x4d, 0x3e, 0x3d, 0x3f, 0x3d, 0x4f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x50, 0x28, 0x28, 0x32, 
	0x32, 0x2a, 0x2b, 0x2c, 0x2c, 0x51, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x52, 0x41, 0x41, 0x41, 
	0x53, 0x2a, 0x2a, 0x2a, 0x2b, 0x4f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0x43, 0x43, 0x3f, 
	0x4a, 0x54, 0x1e, 0x4c, 0x4c, 0x47, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x27, 0x43, 0x44, 
	0x44, 0x55, 0x54, 0x4c, 0x56, 0x09, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x1e, 0x1c, 0x44, 
	0x48, 0x57, 0x55, 0x58, 0x4c, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1e, 0x4a, 
	0x48, 0x57, 0x57, 0x59, 0x58, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x49, 
	0x4b, 0x3c, 0x3c, 0x3f, 0x3e, 0x46, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x18, 0x18, 0x18, 
	0x49, 0x3e, 0x3f, 0x3c, 0x3f, 0x4f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x5a, 0x5b, 0x46, 
	0x46, 0x32, 0x24, 0x1b, 0x1b, 0x51, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x29, 0x29, 0x5a, 
	0x5b, 0x18, 0x32, 0x32, 0x32, 0x4e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x5c, 0x5d, 0x5d, 0x5e, 
	0x5f, 0x1e, 0x1e, 0x60, 0x60, 0x0e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x5c, 0x5d, 0x5d, 0x61, 
	0x5e, 0x54, 0x1e, 0x62, 0x62, 0x63, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x12, 0x64, 0x5d, 0x61, 
	0x61, 0x55, 0x54, 0x60, 0x62, 0x65, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x66, 0x67, 0x5d, 0x61, 
	0x68, 0x57, 0x55, 0x69, 0x60, 0x63, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x1d, 0x55, 
	0x57, 0x57, 0x57, 0x55, 0x6a, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1e, 0x54, 
	0x57, 0x57, 0x57, 0x6b, 0x55, 0x6c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1e, 0x1e, 
	0x54, 0x26, 0x57, 0x6d, 0x6b, 0x6e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x21, 0x1d, 0x54, 
	0x1e, 0x6f, 0x26, 0x6b, 0x6d, 0x70, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x71, 0x72, 0x72, 0x6a, 
	0x1e, 0x2a, 0x2a, 0x73, 0x73, 0x74, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x72, 0x72, 0x72, 
	0x6a, 0x2a, 0x2a, 0x75, 0x24, 0x76, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x16, 0x3f, 0x3f, 0x48, 
	0x3f, 0x1c, 0x2a, 0x18, 0x18, 0x0f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x17, 0x4a, 0x44, 0x48, 
	0x48, 0x77, 0x1c, 0x18, 0x18, 0x0f, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1c, 0x27, 0x1d, 0x78, 0x79, 
	0x1b, 0x24, 0x32, 0x18, 0x18, 0x19, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1c, 0x38, 0x36, 0x1d, 0x5b, 
	0x5b, 0x32, 0x24, 0x1b, 0x1b, 0x15, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x7a, 0x41, 0x7b, 0x46, 0x36, 0x1f, 
	0x5b, 0x7c, 0x7c, 0x7c, 0x32, 0x15, 0x7d, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x7a, 0x41, 0x41, 0x1d, 0x1d, 0x5b, 
	0x79, 0x7c, 0x7c, 0x7c, 0x32, 0x7d, 0x08, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x46, 0x1d, 0x7e, 0x0d, 0x5b, 0x27, 0x72, 
	0x72, 0x3a, 0x3a, 0x38, 0x1e, 0x46, 0x1d, 0x1d, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x46, 0x46, 0x19, 0x19, 0x27, 0x29, 0x72, 
	0x72, 0x38, 0x38, 0x1e, 0x36, 0x17, 0x1d, 0x17, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0x09, 0x0d, 0x38, 0x29, 0x72, 
	0x6a, 0x7f, 0x0e, 0x56, 0x0e, 0x02, 0x07, 0x06, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x21, 0x0d, 0x7e, 0x38, 0x29, 0x6a, 
	0x1e, 0x0e, 0x56, 0x56, 0x0e, 0x07, 0x06, 0x09, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x81, 0x4e, 0x15, 0x15, 0x82, 
	0x09, 0x09, 0x09, 0x09, 0x47, 0x63, 0x63, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x4e, 0x75, 0x13, 0x36, 0x09, 
	0x47, 0x07, 0x02, 0x82, 0x09, 0x65, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x4e, 0x1a, 0x36, 0x83, 
	0x82, 0x02, 0x02, 0x82, 0x09, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x15, 0x47, 
	0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx fight_roped_rope_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 fight_roped_rope_ci8_pal_rgba16[] = {
	0x00, 0x00, 0x31, 0x89, 0x4a, 0x4b, 0x5a, 0x8d, 
	0x21, 0x03, 0x10, 0x81, 0x29, 0x03, 0x39, 0x87, 
	0x41, 0xc7, 0x10, 0x41, 0x52, 0x4b, 0x39, 0xc7, 
	0x29, 0x43, 0x39, 0x85, 0x21, 0x05, 0x21, 0x01, 
	0x31, 0x85, 0x5a, 0x8b, 0x4a, 0x07, 0x31, 0x45, 
	0x41, 0xc5, 0x4a, 0x09, 0x62, 0x8d, 0x49, 0xc7, 
	0x28, 0xc1, 0x29, 0x01, 0x20, 0xc1, 0x7b, 0x4f, 
	0x73, 0x0d, 0x52, 0x09, 0x39, 0x41, 0x18, 0x41, 
	0x8b, 0x91, 0x6a, 0xcf, 0x39, 0x43, 0x8b, 0xd1, 
	0x62, 0x89, 0x7b, 0x4b, 0x94, 0x0f, 0x5a, 0x47, 
	0x6a, 0xc7, 0x83, 0x91, 0x41, 0x81, 0x6a, 0x89, 
	0x94, 0x13, 0x7b, 0x4d, 0xa4, 0x97, 0xac, 0xd3, 
	0xa4, 0x91, 0x83, 0x8b, 0x49, 0xc1, 0x20, 0xc3, 
	0xbd, 0x55, 0xb4, 0xd7, 0x08, 0x01, 0x52, 0x05, 
	0x6a, 0xcb, 0x9c, 0x4d, 0xa4, 0x99, 0x39, 0x89, 
	0xb5, 0x15, 0x93, 0xcb, 0x7b, 0x47, 0xa4, 0x8f, 
	0x6b, 0x11, 0x83, 0x8d, 0xa4, 0x93, 0x93, 0xd3, 
	0xb5, 0x13, 0x7b, 0x45, 0x31, 0x01, 0x29, 0x05, 
	0xc5, 0x99, 0x5a, 0x4b, 0x8b, 0xcb, 0x94, 0x19, 
	0x20, 0x81, 0x41, 0x85, 0x49, 0xc5, 0x6a, 0xcd, 
	0x5a, 0x49, 0x83, 0x93, 0x73, 0x11, 0x5a, 0x43, 
	0x62, 0x85, 0x8b, 0xcd, 0x00, 0x01, 0xb5, 0x17, 
	0x41, 0x89, 0x6a, 0xd3, 0x6a, 0xc9, 0x49, 0xc3, 
	0x52, 0x49, 0x9c, 0x11, 0x93, 0xcd, 0x7b, 0x07, 
	0x31, 0x05, 0xb4, 0xd5, 0x18, 0x01, 0x18, 0xc3, 
	0x7b, 0x09, 0x08, 0x41, 0x39, 0x83, 0x62, 0x43, 
	0xcd, 0x9b, 0x49, 0xcb, 0x73, 0x07, 0xac, 0xd5, 
	0x4a, 0x05, 0xc5, 0x9b, 0x6b, 0x0d, 0x6a, 0xc5, 
	0x94, 0x57, 0x7b, 0x53, 0x9c, 0x53, 0x7b, 0x51, 
	0x94, 0x17, 0x41, 0x83, 0x6a, 0x8d, 0xac, 0xdb, 
	0x83, 0x53, 0xb5, 0x1d, 0x73, 0x09, 0x8b, 0xcf, 
	0xb4, 0xd3, 0x31, 0x43, 0x4a, 0x49, 0x39, 0xcb, 
	0x62, 0x8b, 0x52, 0x07, 0x31, 0x47, 0x18, 0x81, 
	
};

Vtx fight_roped_fight_004_mesh_layer_4_vtx_cull[8] = {
	{{{-36, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-36, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-36, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-36, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{36, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{36, 0, 300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{36, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{36, 0, -300},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx fight_roped_fight_004_mesh_layer_4_vtx_0[4] = {
	{{{36, 0, -300},0, {857, 2040},{0x9A, 0x6A, 0xA3, 0xFF}}},
	{{{36, 0, 300},0, {857, -2056},{0x9A, 0x6A, 0xA3, 0xFF}}},
	{{{-36, 0, 300},0, {135, -2056},{0x9A, 0x6A, 0xA3, 0xFF}}},
	{{{-36, 0, -300},0, {135, 2040},{0x9A, 0x6A, 0xA3, 0xFF}}},
};

Gfx fight_roped_fight_004_mesh_layer_4_tri_0[] = {
	gsSPVertex(fight_roped_fight_004_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_fight_roped_ropetr_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fight_roped_rope_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 131),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, fight_roped_rope_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPSetLights1(fight_roped_ropetr_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_fight_roped_ropetr_001[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx fight_roped_fight_004_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(fight_roped_fight_004_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_fight_roped_ropetr_001),
	gsSPDisplayList(fight_roped_fight_004_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_fight_roped_ropetr_001),
	gsSPEndDisplayList(),
};

Gfx fight_roped_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


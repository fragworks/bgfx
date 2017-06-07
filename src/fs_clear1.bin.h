static const uint8_t fs_clear1_glsl[170] =
{
	0x46, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0x84, 0x00, 0x00, 0x00, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, // .....uniform vec
	0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, // 4 bgfx_clear_col
	0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // or[8];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //  ().{.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[0] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[0];.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x31, 0x5d, 0x20, 0x3d, // gl_FragData[1] =
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  bgfx_clear_colo
	0x72, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // r[1];.}...
};
static const uint8_t fs_clear1_spv[2416] =
{
	0x46, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x02, 0x00, 0x00, 0x02, // clear_color.....
	0x00, 0x4c, 0x09, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x54, // .L...#.........T
	0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, // a...............
	0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, // .......GLSL.std.
	0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // 450.............
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, // ...............m
	0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0xc2, 0x11, 0x00, 0x00, 0x10, // ain.............
	0x00, 0x03, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, // ................
	0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, // ...............m
	0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x35, 0x13, 0x00, 0x00, 0x76, // ain........5...v
	0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x05, // ec4_splat(f1;...
	0x00, 0x03, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x5f, 0x78, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xff, // ......._x.......
	0x0f, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x34, // ...@main(vf4;vf4
	0x3b, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x4f, 0x30, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ;......O0..gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xa2, // agData_0_.......
	0x25, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x31, // %..gl_FragData_1
	0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, // _..........bgfx_
	0x56, 0x6f, 0x69, 0x64, 0x46, 0x72, 0x61, 0x67, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x2c, // VoidFrag.......,
	0x4e, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, // N..param........
	0x06, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x9a, // ...$Global......
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, // .......u_viewRec
	0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, // t..............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x9a, // _viewTexel......
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, // .......u_view...
	0x00, 0x06, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, // ...........u_inv
	0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x04, // View............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x9a, // ...u_proj.......
	0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, // .......u_invProj
	0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, // ...............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x9a, // _viewProj.......
	0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, // .......u_invView
	0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x08, // Proj............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x9a, // ...u_model......
	0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, // ew.............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, // _modelViewProj..
	0x00, 0x06, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, // ...........u_alp
	0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x06, 0x00, 0x08, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0c, // haRef4..........
	0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, // ...bgfx_clear_co
	0x6c, 0x6f, 0x72, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, // lor........B....
	0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xbd, 0x43, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ........C..gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xdf, // agData_0_.......
	0x38, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x31, // 8..gl_FragData_1
	0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xa3, 0x47, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, // _.......G..param
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, // ...........param
	0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ...........gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xc2, // agData_0_.......
	0x11, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x31, // ...gl_FragData_1
	0x5f, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xda, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, // _..G...........@
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xc7, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x10, // ...G............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x01, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, // ...#.......H....
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, // .......#... ...H
	0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x03, // ...`...H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x05, // .......H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, // .......#... ...H
	0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x07, // ...`...H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x09, // .......H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, // ...........H....
	0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x0c, // ... ...H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x30, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x9a, // ...#...0...G....
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, // .......G...B..."
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xc2, 0x11, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, // ...............!
	0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x07, // ... ... ........
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, // ................
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, 0x00, 0x00, 0x00, 0x1d, // .......!........
	0x00, 0x00, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x07, // ....... ........
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x05, 0x00, 0x3d, 0x0b, 0x00, 0x00, 0x08, // .......!...=....
	0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, // ...........+....
	0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, // ...............e
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, // ... .......+....
	0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xda, // ...j... ........
	0x01, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, // ...e...j...+....
	0x00, 0x00, 0x00, 0x22, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xc7, // ..."............
	0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x22, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0f, 0x00, 0x9a, // ......."........
	0x06, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...........e...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...e...e...e...e
	0x00, 0x00, 0x00, 0xda, 0x01, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, // .......e...e....
	0x00, 0x00, 0x00, 0xc7, 0x04, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x17, 0x09, 0x00, 0x00, 0x02, // ....... ........
	0x00, 0x00, 0x00, 0x9a, 0x06, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x17, 0x09, 0x00, 0x00, 0x42, // .......;.......B
	0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x2f, // .......+......./
	0x0a, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, // .......+........
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x02, // ....... ........
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, // .......+........
	0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x03, // ....... ........
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xd1, // .......;........
	0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xc2, // .......;........
	0x11, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, // .......6........
	0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, // ...............S
	0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xa3, 0x47, 0x00, 0x00, 0x07, // a..;........G...
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, // ...;............
	0x00, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0xbe, 0x2c, 0x00, 0x00, 0xff, // ...9........,...
	0x0f, 0x00, 0x00, 0xa3, 0x47, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // ....G......=....
	0x00, 0x00, 0x00, 0xbd, 0x43, 0x00, 0x00, 0xa3, 0x47, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // ....C...G..=....
	0x00, 0x00, 0x00, 0xdf, 0x38, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd1, // ....8......>....
	0x0d, 0x00, 0x00, 0xbd, 0x43, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xc2, 0x11, 0x00, 0x00, 0xdf, // ....C..>........
	0x38, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, // 8......8...6....
	0x00, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, 0x37, // ...5...........7
	0x00, 0x03, 0x00, 0x8a, 0x02, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x88, // ................
	0x2e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64, 0x57, 0x00, 0x00, 0xdd, // ...=.......dW...
	0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xa9, 0x4e, 0x00, 0x00, 0xdd, // ...=........N...
	0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x49, 0x39, 0x00, 0x00, 0xdd, // ...=.......I9...
	0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xdd, // ...=........9...
	0x0e, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xb0, 0x2a, 0x00, 0x00, 0x64, // ...P........*..d
	0x57, 0x00, 0x00, 0xa9, 0x4e, 0x00, 0x00, 0x49, 0x39, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xfe, // W...N..I9...9...
	0x00, 0x02, 0x00, 0xb0, 0x2a, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, // ....*..8...6....
	0x00, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x0b, 0x00, 0x00, 0x37, // ...........=...7
	0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x4f, 0x30, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, // .......O0..7....
	0x02, 0x00, 0x00, 0xa2, 0x25, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0xee, 0x5f, 0x00, 0x00, 0x3b, // ....%......._..;
	0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x2c, 0x4e, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3e, // .......,N......>
	0x00, 0x03, 0x00, 0x2c, 0x4e, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x39, 0x00, 0x05, 0x00, 0x1d, // ...,N......9....
	0x00, 0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x2c, 0x4e, 0x00, 0x00, 0x41, // .......5...,N..A
	0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x53, 0x18, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x2f, // .......S...B.../
	0x0a, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x85, // .......=........
	0x5a, 0x00, 0x00, 0x53, 0x18, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x4f, 0x30, 0x00, 0x00, 0x85, // Z..S...>...O0...
	0x5a, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, 0x00, 0xf9, 0x34, 0x00, 0x00, 0x42, // Z..A........4..B
	0x13, 0x00, 0x00, 0x2f, 0x0a, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // .../.......=....
	0x00, 0x00, 0x00, 0x1e, 0x21, 0x00, 0x00, 0xf9, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xa2, // ....!...4..>....
	0x25, 0x00, 0x00, 0x1e, 0x21, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, // %...!......8....
};
static const uint8_t fs_clear1_dx9[208] =
{
	0x46, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x02, // clear_color.....
	0x00, 0xac, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, // .........".CTAB.
	0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, // ...[............
	0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, // .......T...0....
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, // .......D.......b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, // gfx_clear_color.
	0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, // ...ps_3_0.Micros
	0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, // oft (R) HLSL Sha
	0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, // der Compiler 10.
	0x31, 0x00, 0xab, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, // 1...............
	0x00, 0x00, 0x02, 0x01, 0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00, // ................
};
static const uint8_t fs_clear1_dx11[411] =
{
	0x46, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0x74, 0x01, 0x44, 0x58, 0x42, 0x43, 0x82, 0xff, 0x8b, 0x5f, 0x53, 0xa0, 0x1f, 0x3b, 0x53, // .t.DXBC..._S..;S
	0xc6, 0x2a, 0x12, 0xcf, 0xc8, 0x7f, 0xb8, 0x01, 0x00, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00, 0x04, // .*.........t....
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x28, // ...0...........(
	0x01, 0x00, 0x00, 0x41, 0x6f, 0x6e, 0x39, 0x50, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, // ...Aon9P...P....
	0x02, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x24, 0x00, 0x00, // ... ...0.....$..
	0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // .0...0...$...0..
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xff, 0x01, // ................
	0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, // ................
	0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x53, 0x48, 0x44, 0x52, 0x64, // ...........SHDRd
	0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, // ...@.......Y...F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, // . .........e....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, //  ......e.... ...
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...6.... ......F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, // . .........6....
	0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, //  ......F. ......
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, // ...>...ISGN,....
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // ....... ........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, // ...............S
	0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4f, 0x53, 0x47, 0x4e, 0x44, // V_POSITION.OSGND
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, // ...........8....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ...8............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, // ...........SV_TA
	0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x00, 0x00, 0x80, 0x00,                               // RGET.......
};
static const uint8_t fs_clear1_mtl[554] =
{
	0x46, 0x53, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0x04, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, // .....using names
	0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // pace metal;.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // Input {.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x20, 0x5b, //  gl_FragData_0 [
	0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, // [color(0)]];.  f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // loat4 gl_FragDat
	0x61, 0x5f, 0x31, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x31, 0x29, 0x5d, 0x5d, // a_1 [[color(1)]]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ;.};.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // MtlShaderUniform
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, //  {.  float4 bgfx
	0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, // _clear_color[8];
	0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // .};.fragment xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, //  xlatMtlMain (xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, // atMtlShaderInput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, //  _mtl_i [[stage_
	0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, // in]], constant x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, // latMtlShaderUnif
	0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, // orm& _mtl_u [[bu
	0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, // ffer(0)]]).{.  x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, // latMtlShaderOutp
	0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, // ut _mtl_o;.  _mt
	0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, // l_o.gl_FragData_
	0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, // 0 = _mtl_u.bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, // clear_color[0];.
	0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, //   _mtl_o.gl_Frag
	0x44, 0x61, 0x74, 0x61, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // Data_1 = _mtl_u.
	0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // bgfx_clear_color
	0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, // [1];.  return _m
	0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // tl_o;.}...
};
extern const uint8_t* fs_clear1_pssl;
extern const uint32_t fs_clear1_pssl_size;

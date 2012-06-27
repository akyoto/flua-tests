#ifndef file_1
#define file_1

// Includes
#include <flua_decls.hpp>
#include </home/eduard/Projects/bp/src/bp/Core/C++/Core.hpp>
#include </home/eduard/Projects/bp/src/bp/Graphics/C++/Graphics.hpp>
#include </home/eduard/Projects/bp/src/bp/Math/Geometry/C++/Geometry.hpp>

// Prototypes

inline BPMesh* Primitive_createCube();
inline Float64 sinDegree__Int(Int);
inline Int64 systemTime();
inline Float64 sin__Float(Float);
inline Float64 abs__Float64(Float64);
inline Int getMouseX();
inline Int getMouseY();

// Includes


// Tuples


// Variables

Int flua_for_end_0;
BPShader* composed;
BPMaterial* mat;
BPMesh* cubeModel;
BPGraphicsWindow* win;
BPMutableList< BPSceneNode* >* ring;
BPTexture* tex1;
BPScene* scene;
BPFragmentShader* fs;
Int ringRadius;
BPVertexShader* vs;
BPCamera* cam;

// DataFlow variables


// Classes


// Threads


// Functions

// Module execution
void exec_file_1() {
	// Strings
	file_1_flua_string_0 = new BPUTF8String(const_cast<Byte*>("Flua - Ring of cubes"));
	file_1_flua_string_1 = new BPUTF8String(const_cast<Byte*>("../"));
	file_1_flua_string_2 = new BPUTF8String(const_cast<Byte*>("Shader/VS.glsl"));
	file_1_flua_string_3 = new BPUTF8String(const_cast<Byte*>("Shader/FS.glsl"));
	file_1_flua_string_4 = new BPUTF8String(const_cast<Byte*>("Textures/tiles.png"));

	// Code
	win = (new BPGraphicsWindow(file_1_flua_string_0, 800, 600, 32, false));
	fsRoot = file_1_flua_string_1;
	vs = (new BPVertexShader(fsRoot->operatorAdd__UTF8String(file_1_flua_string_2)));
	fs = (new BPFragmentShader(fsRoot->operatorAdd__UTF8String(file_1_flua_string_3)));
	tex1 = (new BPTexture(fsRoot->operatorAdd__UTF8String(file_1_flua_string_4)));
	composed = (new BPShader(vs, fs));
	mat = (new BPMaterial(composed));
	mat->_texture = tex1;
	scene = (new BPScene());
	cam = (new BPCamera(scene->_root));
	cubeModel = ::Primitive_createCube();
	ring = (new BPMutableList< BPSceneNode* >());
	ringRadius = 3;
	flua_for_end_0 = 18;
	for(Int i = -(18); i <= flua_for_end_0; ++i) {
		BPSceneNode* cube = (new BPSceneNode(scene->_root));
		cube->_position = (new BPVector3< Float >((i * ringRadius), 0, (30 + (::sinDegree__Int(((i * 10) + 90)) * 80))));
		cube->_scaling->operatorAssignMultiply__Int(2);
		cube->_mesh = cubeModel;
		cube->_material = mat;
	};
	while(win->getOpen()) {
		//in {
			BPGraphicsWindow* _tmp_var_0 = (win);
			_tmp_var_0->enter();
		win->cls__Float__Float__Float__Float(0.65f, 0.65f, 0.65f, 1.0f);
		BPColorRGBA* color = mat->_color;
		color->_red = ::abs__Float64(::sin__Float(((::systemTime() * 0.0005f) + 1)));
		color->_green = ::abs__Float64(::sin__Float(((::systemTime() * 0.0005f) + 2)));
		color->_blue = ::abs__Float64(::sin__Float(((::systemTime() * 0.0005f) + 3)));
		color->_alpha = ::abs__Float64(::sin__Float(((::systemTime() * 0.0005f) + 4)));
		cam->_rotation->_x = ((::getMouseX() - 400) * 0.0005f);
		cam->_rotation->_y = (-((::getMouseY() - 300)) * 0.0005f);
		cam->activate();
		scene->render();
			_tmp_var_0->exit();
		//};
	};
}
#endif

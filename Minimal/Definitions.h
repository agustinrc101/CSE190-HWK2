#pragma once

//Folders
#define SKYBOX_LEFT "skybox/left"
#define SKYBOX_RIGHT "skybox/right"

//Textures


//Models


//Colors


//Enums
enum StereoMode {
	STEREO_BOTH = 0,
	STEREO_SKY = 1,
	STEREO_CUBE = 2,
};

enum DisplayMode {
	MODE_STEREO = 0,
	MODE_MONO = 1,
	MODE_LEFT = 2,
	MODE_RIGHT = 3,
	MODE_INVERTED = 4,
};

enum TrackingMode {
	TRACKING_FULL = 0,
	TRACKING_ORIENTATION = 1,
	TRACKING_POSITION = 2,
	TRACKING_NONE = 3,
};

static void print(glm::mat4 c){
	std::cout << "=============================" << std::endl;
	std::cout << c[0][0] << ", " << c[1][0] << ", " << c[2][0] << ", " << c[3][0] << std::endl;
	std::cout << c[0][1] << ", " << c[1][1] << ", " << c[2][1] << ", " << c[3][1] << std::endl;
	std::cout << c[0][2] << ", " << c[1][2] << ", " << c[2][2] << ", " << c[3][2] << std::endl;
	std::cout << c[0][3] << ", " << c[1][3] << ", " << c[2][3] << ", " << c[3][3] << std::endl;
	std::cout << "=============================" << std::endl;
};

static void print(glm::vec4 v){
	std::cout << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << std::endl;
};

static void print(glm::vec3 v) {
	std::cout << v[0] << ", " << v[1] << ", " << v[2] << std::endl;
};
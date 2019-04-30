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
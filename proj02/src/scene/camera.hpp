#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "film.hpp"
#include "paramset.hpp"
#include "ray.hpp"

enum CameraType{
	CT_ORTHO
};

CameraType cameraTypeFromString(string str);

struct Camera{
	CameraType type;
	unique_ptr<Film> film;

	Camera();
	void readParamSet(ParamSet ps);

	// TODO: these should be purely abstract methods
	virtual Ray generateRay(int x, int y);
	virtual Ray generateRay(float x, float y);

};

struct PerspectiveCamera : Camera{

};

struct OrtographicCamera : Camera{

};

#endif
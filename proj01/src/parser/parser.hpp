#ifndef PARSER_HPP
#define PARSER_HPP

#include "background.hpp"
#include "camera.hpp"
#include "scene.hpp"
#include "film.hpp"
#include "tinyxml.h"

unique_ptr<Background> parseBackground(const TiXmlElement* background);
unique_ptr<Camera> parseCamera(const TiXmlElement *);
unique_ptr<Film> parseFilm(const TiXmlElement *);
void parseScene(const char* input, unique_ptr<Camera>& camera, unique_ptr<Scene>& scene);
void parseWorld(const TiXmlElement* world, unique_ptr<Scene>& scene);

#endif
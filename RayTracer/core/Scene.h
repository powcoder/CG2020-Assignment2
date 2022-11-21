https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Scene.h
 *
 */

#ifndef SCENE_H_
#define SCENE_H_

#include <vector>

#include "rapidjson/document.h"

#include "core/LightSource.h"
#include "core/Shape.h"


using namespace rapidjson;

namespace rt{

class Scene {
public:

	Scene(){};

	void createScene(Value& scenespecs);


private:

	std::vector<LightSource*> lightSources;
	std::vector<Shape*> shapes;

};

} //namespace rt



#endif /* SCENE_H_ */

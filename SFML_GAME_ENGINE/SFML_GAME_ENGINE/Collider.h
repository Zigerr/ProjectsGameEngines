#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include<vector>
#include "GameObject.h"

using namespace sf;
using namespace std;

class Collider
{

private:

	vector<GameObject> colliders ;//objects which check
	
public:
	enum ModeColidedUpdate
	{
		STATIC,
		DYNAIMIC,
		PARTICLE
		//DYNAIMIC => STATIC, STATIC, ...(!PARTICLE)
	};
	Collider(vector<GameObject> colliders);
	


	void addObject(GameObject object,ModeColidedUpdate);
	void addObject(GameObject object);
	void removeObject(GameObject object);
	void removeObjectByName(string objectName);
};


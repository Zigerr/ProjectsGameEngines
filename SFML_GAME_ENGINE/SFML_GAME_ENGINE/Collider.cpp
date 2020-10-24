#include "Collider.h"

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <vector>
#include "GameObject.h"

using namespace sf;
using namespace std;

Collider::Collider(vector<GameObject> colliders) {
	this->colliders = colliders;
	
}

void Collider::addObject(GameObject object, ModeColidedUpdate m) {
		if (find(this->colliders.begin(), this->colliders.end(), object) != this->colliders.end()) {
			cout << object.getName() << " also appended in collidersCheckList.\n";
		}
		else {
			object.setModeColidedUpdate(m);
			this->colliders.push_back(object);
			cout << object.getName() << " appended in collidersCheckList.\n";
		}

}

void Collider::addObject(GameObject object) {
	if (find(this->colliders.begin(), this->colliders.end(), object) != this->colliders.end()) {
		cout << object.getName() << " also appended in collidersCheckList.\n";
	}
	else {
		this->colliders.push_back(object);
		cout << object.getName() << " appended in collidersCheckList.\n";
	}
}

void Collider::removeObject(GameObject object) {
	if (find(this->colliders.begin(), this->colliders.end(), object) != this->colliders.end()) {
		for (int i = 0; i < this->colliders.size(); i++) {
			if (this->colliders[i].getName() == object.getName()) {
				this->colliders.erase(this->colliders.begin() + i);//??????CheckThis!!!!
			}
		}
		cout << object.getName() << " also appended in collidersCheckList.\n";
	}
	else {void removeObject(GameObject object);
		cout << object.getName() << " appended in collidersCheckList.\n";
	}
}

void Collider::removeObjectByName(string objectName) {
		for (int i = 0; i < this->colliders.size(); i++) {
			if (this->colliders[i].getName() == objectName) {
				this->colliders.erase(this->colliders.begin() + i);
			}
		}
}


#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Collider.h"
using namespace sf;
using namespace std;

class GameObject
{
private:

	Vector2f position;
	Texture texture;
	Vector2f scaleTexture;
	Sprite sprite;
	string name;
	IntRect intRect;

	int ModeColidedUpdate;
public:

	GameObject(Vector2f position, Texture texture, IntRect intRect, Vector2f scaleTexture, string name);
	GameObject(Vector2f position, Texture texture, Vector2f scaleTexture, string name);
	GameObject(Texture texture, IntRect intRect, Vector2f scaleTexture, string name);
	GameObject(Texture texture, string name);
	GameObject();

	Vector2f getPosition()		{ return this->position;     }
	Vector2f getScaleTexture()	{ return this->scaleTexture; }
	string   getName()			{ return this->name;         }
	Texture  getTexture()		{ return this->texture;      }

	int      getModeColidedUpdate()  { return this->ModeColidedUpdate; }
	void     setModeColidedUpdate(int ModeColidedUpdate);

	void	 setPosition(Vector2f position);
	void	 setScaleTexture(Vector2f scaleTexture);
	void	 setTexture(Texture texture);
	void	 setName(string name);
	void	 setTextureRect(IntRect intRect);

	void	 draw(RenderWindow &window);

	void     moveOn(Vector2f direction);
	void     moveOn(float x,float y);

	void	 colissionDetected(GameObject object);//Object which colision detected
	
};


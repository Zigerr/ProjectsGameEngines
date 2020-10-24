#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace sf;
using namespace std;

	GameObject::GameObject(Vector2f position, Texture texture, IntRect intRect, Vector2f scaleTexture, string name) {

		this->position = position;
		this->texture = texture;
		this->scaleTexture = scaleTexture;
		this->name = name;
		this->intRect = intRect;

		this->sprite.setTextureRect(this->intRect);
		this->sprite.setTexture(this->texture);
		this->sprite.setScale(this->scaleTexture);
		this->sprite.setPosition(this->position);

		cout << name << " created \n";

	}

	GameObject::GameObject(Vector2f position, Texture texture, Vector2f scaleTexture, string name) {

		this->position = position;
		this->texture = texture;
		this->scaleTexture = scaleTexture;
		this->name = name;

		this->sprite.setTexture(this->texture);
		this->sprite.setScale(this->scaleTexture);
		this->sprite.setPosition(this->position);

		cout << name << " created \n";

	}

	GameObject::GameObject(Texture texture, IntRect intRect, Vector2f scaleTexture, string name) {

		this->texture = texture;
		this->intRect = intRect;
		this->scaleTexture = scaleTexture;
		this->name = name;
		cout << name << " created \n";

	}

	GameObject::GameObject(Texture texture, string name) {

		this->texture = texture;
		this->name = name;
		cout << name << " created \n";

	}

	void GameObject::setPosition(Vector2f position)			{ this->position = position;			}
	void GameObject::setScaleTexture(Vector2f scaleTexture) { this->scaleTexture = scaleTexture;	}
	void GameObject::setTexture(Texture texture)			{ this->texture = texture;				}	
	void GameObject::setName(string name)					{ this->name = name;					}
	void GameObject::setTextureRect(IntRect intRect)		{ this->intRect = intRect;				}

	void GameObject::draw(RenderWindow &window) {

		this->sprite.setTexture(this->texture);
		this->sprite.setScale(this->scaleTexture);
		this->sprite.setPosition(this->position);
	
		window.draw(this->sprite);
	}

	void	GameObject::setModeColidedUpdate(int ModeColidedUpdate) { ModeColidedUpdate = ModeColidedUpdate; }

	void	GameObject::moveOn(Vector2f direction) {
		this->setPosition(this->getPosition() + direction);
	}
	void	GameObject::moveOn(float x, float y) {
		this->setPosition(Vector2f(this->getPosition().x + x, this->getPosition().y+y));
	}
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include <vector>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(600, 300), "TmarPidor!");


	
	while (window.isOpen())
	{
		window.clear(Color(42, 42, 42));
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			}
		
		window.display();
	}

	return 0;
}
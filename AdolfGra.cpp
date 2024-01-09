
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;






int main()
{
	RenderWindow window{ VideoMode{800,600}, "Adolf poczatek" };
	RenderWindow window2{ VideoMode{1000,600}, "Adolf poczatek2" };
	Event event;
	Event event2;
	Texture texture;
	Texture texture2;
	if (!texture.loadFromFile("adi.png")) {
		return -1;
	}
	if (!texture2.loadFromFile("sta.png")) {
		return -1;
	}

	Sprite sprite;
	Sprite sprite2;
	sprite.setTexture(texture);
	sprite2.setTexture(texture2);

	while (true) {
		window.clear(Color::Black);
		window.pollEvent(event);
		window2.clear(Color::Black);
		window2.pollEvent(event);

		if (event.type == Event::Closed) {
			window.close();
			window2.close();
			break;
		}

		window.clear();
		window.draw(sprite);
		window.display();
		window2.clear();
		window2.draw(sprite2);
		window2.display();
chuj
	}
	return 0;
}

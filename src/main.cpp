#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>

#include <Global.hpp>
#include <Helper.hpp>
#include <Slope.hpp>
#include <SlopeField.hpp>

int main()
{
	sf::Clock clock;

	SlopeField field;
	Slope s(HelperFunc::convertCartesianToGame(sf::Vector2f(-500, 0)), 1);

	std::srand(time(NULL)); // init rand seed

	sf::RenderWindow window(sf::VideoMode(glob::WIN_WIDTH, glob::WIN_HEIGHT), "C++ App");
	window.setFramerateLimit(glob::FPS);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		sf::Time delta_time = clock.restart();
		field.update(window);
		s.update(window);
		window.display();
	}

	return 0;
}

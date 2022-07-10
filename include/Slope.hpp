#pragma once
#include <SFML/Graphics.hpp>
#include <Global.hpp>

// individual slope in a slope field
class Slope{

	public:
		sf::RectangleShape slopeRect;
		double angle; // angle rotated on slope field

	public:
		Slope(sf::Vector2f pos, double slope);
		void update(sf::RenderWindow& window);

};

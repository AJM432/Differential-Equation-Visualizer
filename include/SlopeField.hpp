#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include <Slope.hpp>
#include <Global.hpp>

class SlopeField
{
	public:
		std::vector<Slope> slope_field_array;
		sf::RectangleShape xAxis;
		sf::RectangleShape yAxis;
	
	public:
		SlopeField();
		std::vector<Slope> createSlopeField();
		double eval_dydx(double x, double y);
		void update(sf::RenderWindow& window);
		void drawAxes(sf::RenderWindow& window);

};



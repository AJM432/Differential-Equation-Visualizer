// include miscellaneous functions
#include "SFML/System/Vector2.hpp"
#include <iostream>
#include <cmath>

namespace HelperFunc
{
	
	const double PI = 3.14159265358979323846;

// randSeed is std::rand() and cannot use directly since the program assumes random seed is initialized beforehand
	int randNum(long randSeed, int min, int max);
	
	double radToDegrees(double radAngle);

	double slopeToAngle(double slope);

	double convertRanges(double value, double valueMin, double valueMax, double newMin, double newMax);
	
	sf::Vector2f convertCartesianToGame(sf::Vector2f pos);

}


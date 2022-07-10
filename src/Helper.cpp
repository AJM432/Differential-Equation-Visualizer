#include <Helper.hpp>
#include <Global.hpp>
#include <SFML/Graphics.hpp>

int HelperFunc::randNum(long randSeed, int min, int max)
{
	if (min >= max) 
	{
		throw std::invalid_argument("min must be smaller than max argument in HelperFunc::randNum");
	}
	int random_num = randSeed%(max-min + 1) + min;
	return random_num; 
}


double HelperFunc::radToDegrees(double radAngle)
{
	return radAngle*(180.0/HelperFunc::PI);
}

double HelperFunc::slopeToAngle(double slope)
{
	return radToDegrees(atan(slope));
}

double HelperFunc::convertRanges(double value, double valueMin, double valueMax, double newMin, double newMax)
{
	return (((value - valueMin) * (newMax - newMin)) / (valueMax - valueMin)) + newMin;
}

sf::Vector2f HelperFunc::convertCartesianToGame(sf::Vector2f pos)
{
	/* return sf::Vector2f(pos.x + glob::WIN_WIDTH/2.0, pos.y + glob::WIN_HEIGHT/2.0); */

	pos.y = -pos.y;
	return pos += sf::Vector2f(glob::WIN_WIDTH / 2.f, glob::WIN_HEIGHT/ 2.f);
	return pos; 
}

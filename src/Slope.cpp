#include "SFML/System/Vector2.hpp"
#include <SFML/Graphics.hpp>
#include <Slope.hpp>
#include <Helper.hpp>
#include <Global.hpp>

// TODO: fix rectangle offset where its position must be at the point but is drawn shifted at top left

Slope::Slope(sf::Vector2f pos, double slope)
{
	slopeRect.setSize(sf::Vector2f(glob::RECT_LENGTH, glob::RECT_WIDTH));
	slopeRect.setOrigin(sf::Vector2f(glob::RECT_LENGTH/2.0, glob::RECT_WIDTH/2.0));
	slopeRect.setPosition(pos);
	slopeRect.setFillColor(sf::Color::White);

	angle = HelperFunc::slopeToAngle(slope);
	slopeRect.setRotation(-angle); // negative angle since sfml rotates in opposite directions
}


void Slope::update(sf::RenderWindow& window)
{
	/* slopeRect.setPosition(pos); */
	//TODO: add delta time and position updating
	/* slopeRect.setRotation(angle); */
	window.draw(slopeRect);

}

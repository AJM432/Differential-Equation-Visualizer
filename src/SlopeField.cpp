//TODO extend range of graph to x \in [-width/2, width/2]

#include <SlopeField.hpp>
#include <Slope.hpp>
#include <vector>
#include <Global.hpp>
#include <Helper.hpp>

#include <iostream>
#include <cmath>

SlopeField::SlopeField() {
	slope_field_array = createSlopeField();

	xAxis.setSize(sf::Vector2f(glob::WIN_WIDTH, glob::AXIS_THICKNESS));
	yAxis.setSize(sf::Vector2f(glob::WIN_HEIGHT, glob::AXIS_THICKNESS));

	xAxis.setFillColor(sf::Color::Green);
	yAxis.setFillColor(sf::Color::Green);

	xAxis.setPosition(sf::Vector2f(0, glob::WIN_HEIGHT/2.0));
	yAxis.setPosition(sf::Vector2f(glob::WIN_WIDTH/2.0, 0));
	yAxis.setRotation(90.0);
}

std::vector<Slope> SlopeField::createSlopeField()
{
	std::vector<Slope> slope_field_array;
	double width_interval = (double)(glob::WIN_WIDTH)/(double)(glob::NUM_POINTS);
	double height_interval = (double)(glob::WIN_HEIGHT)/(double)(glob::NUM_POINTS);

	// traversing cartesian graph from top left to bottom right
	double currX = -glob::WIN_WIDTH/2.0;
	double currY = -glob::WIN_HEIGHT/2.0;

	double currSlope;

	for (int x=0; x < glob::NUM_POINTS; x++){
		currX += width_interval;
		
		currY = -glob::WIN_HEIGHT/2.0; // reset y after completing entire column of iteration
		for (int y=0; y < glob::NUM_POINTS; y++)
		{
			currY += height_interval;
			currSlope = eval_dydx(currX, currY);
			Slope slope_line(HelperFunc::convertCartesianToGame(sf::Vector2f(currX, currY)), currSlope);
			slope_field_array.push_back(slope_line);
		}
	}

	return slope_field_array;
}

void SlopeField::drawAxes(sf::RenderWindow& window)
{
	window.draw(xAxis);
	window.draw(yAxis);
}

// differential equation input
double SlopeField::eval_dydx(double x, double y)
{
	return pow(2.71, y);
}

void SlopeField::update(sf::RenderWindow& window)
{

	for (int i=0; i < slope_field_array.size(); i++){
		slope_field_array[i].update(window);
	}

	drawAxes(window);
}

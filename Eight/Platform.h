#include <SFML/Graphics.hpp>
#pragma once
class Platform
{
	float x;
	float y;
	int width;
	int height;

public:
	sf::RectangleShape shape;

	Platform(float x, float y, int width, int height) 
	{
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;

		sf::RectangleShape shape(sf::Vector2f(width, height));
		shape.setPosition(sf::Vector2f(x, y));

		this->shape = shape;
	}

	float GetX()
	{
		return x;
	}

	float GetY()
	{
		return y;
	}
};


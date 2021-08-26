#include <SFML/Graphics.hpp>
#pragma once
class DynamicPlatform
{
	float x;
	float y;
	int width;
	int height;
	float endx;
	float endy;
	//float timeofmove;
	float speed;
	int ix = 0;
	float knowx;

public:
	sf::RectangleShape shape;

	DynamicPlatform(float x, float y, int width, int height, float endx, float endy, float speed)
	{
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
		this->endx = endx;
		this->endy = endy;
		//this->timeofmove = timeofmove;
		this->speed = speed;

		sf::RectangleShape shape(sf::Vector2f(width, height));
		shape.setPosition(sf::Vector2f(x, y));

		this->shape = shape;
		this->knowx = x;
	}

	void MovingX(float step)
	{		
		if (x != endx) 
		{
			while ((x != endx))
			{
				x += step * speed;
				shape.setPosition(x, y);
				break;
			}
		}		
		if (x >= endx)
		{
			//
			while (x != knowx) 
			{
				sf::sleep(sf::milliseconds(10));
				x -= step * speed;
				shape.setPosition(x, y);
				//break;
			}
			//sf::sleep(sf::milliseconds(20));
			x = knowx;
		}
		
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


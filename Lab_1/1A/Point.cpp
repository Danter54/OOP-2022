#include "Header_Includer.h"

Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(int ValueX, int ValueY)
{
	x = ValueX;
	y = ValueY;
}
Point::Point(Point& obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

void Point::Set(int valueX, int valueY)
{
	this->x = valueX;
	this->y = valueY;
}

void Point::Sum_pow(int& sum, int& pow)
{
	sum = this->x + this->y;
	pow = x * y;
}



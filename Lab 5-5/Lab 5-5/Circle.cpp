#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double radius) : radius(radius)
{
}

double Circle::getArea() const
{
	return M_PI * pow(radius, 2);
}

#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double sideA, double sideB) : sideA(sideA), sideB(sideB)
{
}

double Rectangle::getArea() const
{
	return sideA * sideB;
}

#pragma once

#include "ObjectWithArea.h"

class Rectangle : public ObjectWithArea
{
	const double sideA = 0;
	const double sideB = 0;
public:
	Rectangle();
	Rectangle(double sideA, double sideB);
	virtual double getArea() const;
};


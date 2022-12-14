#pragma once

#define _USE_MATH_DEFINES

#include "ObjectWithArea.h"
#include <math.h>

class Circle : public ObjectWithArea
{
	const double radius = 0;
public:
	Circle();
	Circle(double radius);
	virtual double getArea() const;
};


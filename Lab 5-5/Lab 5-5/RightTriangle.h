#pragma once
#include "ObjectWithArea.h"
class RightTriangle : public ObjectWithArea
{
	const double catetA = 0;
	const double catetB = 0;

public:

	RightTriangle();
	RightTriangle(double catetA, double catetB);
	virtual double getArea() const;
};

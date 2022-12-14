#pragma once

#include "ObjectWithArea.h"

class Trapeze : public ObjectWithArea
{
	const double upperBase = 0;
	const double lowerBase = 0;
	const double height = 0;
public:
	Trapeze();
	Trapeze(double upperBase, double lowerBase, double height);
	virtual double getArea() const;
};


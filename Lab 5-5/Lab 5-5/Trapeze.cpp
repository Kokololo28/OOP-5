#include "Trapeze.h"

Trapeze::Trapeze()
{
}

Trapeze::Trapeze(double upperBase, double lowerBase, double height) : upperBase(upperBase), lowerBase(lowerBase), height(height)
{
}

double Trapeze::getArea() const
{
	return ((1./2)*(upperBase + lowerBase)) * height;
}

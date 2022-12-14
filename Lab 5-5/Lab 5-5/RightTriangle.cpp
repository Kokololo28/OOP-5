#include "RightTriangle.h"

RightTriangle::RightTriangle()
{
}

RightTriangle::RightTriangle(double catetA, double catetB) : catetA(catetA), catetB(catetB)
{
}

double RightTriangle::getArea() const
{
	return (1./2) * catetA * catetB;
}

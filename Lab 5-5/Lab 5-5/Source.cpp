#include <iostream>

#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapeze.h"

using namespace std;

int main() {
	const ObjectWithArea& rectangle = Rectangle(10, 20);
	const ObjectWithArea& circle = Circle(10);
	const ObjectWithArea& rightTrianble = RightTriangle(10, 10);
	const ObjectWithArea& trapeze = Trapeze(10, 20, 10);

	cout << "Rectangle area: " << rectangle.getArea() << endl;
	cout << "Circle area: " << circle.getArea() << endl;
	cout << "RightTriangle area: " << rightTrianble.getArea() << endl;
	cout << "Trapeze area: " << trapeze.getArea() << endl;

	return 0;
}

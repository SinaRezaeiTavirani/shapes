#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>


int main() {
	Circle cr1(3);
	Triangle tr1(3, 4);
	std::cout << cr1.getArea();
	Shape* shp1 = &tr1;
	std::cout << shp1->getArea();
	return 0;
}
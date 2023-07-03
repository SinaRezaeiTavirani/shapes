#include "Shape.h"
#include "Triangle.h"
#include <iostream>


int main() {
	Triangle tr1(3, 4);
	std::cout << tr1.getArea();
	Shape* shp1 = &tr1;
	std::cout << shp1->getArea();
	return 0;
}
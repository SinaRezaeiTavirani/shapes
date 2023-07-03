#include "Circle.h"


Circle::Circle(const double& radius) : radius(radius) {}

double Circle::getArea() const {

	return M_PI * radius * radius;
}
#include "Rectangle.h"
Rectangle::Rectangle(const double& height, const double& width) : height(height), width(width) {}
double Rectangle::getArea() const {
	return height * width;
}
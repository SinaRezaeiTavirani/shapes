#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
private:
	double height, base;
public:
	Triangle(const double& height, const double& base);
	double getArea() const override;
};


#endif // !TRIANGLE_H
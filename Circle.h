#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <cmath>


class Circle : public Shape 
{
private:
	double radius;
public:
	Circle(const double& radius);
	double getArea() const override;
};

#endif // !CIRCLE_H

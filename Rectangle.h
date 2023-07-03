#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle :  public Shape
{
private:
	double height, width;
public:
	Rectangle(const double& height, const double& width);
	double getArea() const override;
};

#endif // !RECTANGLE_H

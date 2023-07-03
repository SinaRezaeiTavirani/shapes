#include "Triangle.h"


Triangle::Triangle(const double& height, const double& base) : 
    height(height), base(base) {}


double Triangle::getArea() const
{
    return 0.5 * base * height;
}

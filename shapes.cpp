#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

#include <vector>

int main() {

    Rectangle rectangle(4.0, 10.0);
    Circle circle(3);
    Triangle triangle(5.0, 2.0);

    std::vector<Shape*> shapes;
    shapes.push_back(&rectangle);
    shapes.push_back(&circle);
    shapes.push_back(&triangle);

    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->getArea() << std::endl;
    }

    return 0;
}
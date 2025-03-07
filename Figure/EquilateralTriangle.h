#pragma once
#include "Figure.h"
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    FIGURE_API EquilateralTriangle(double a, double A);
    FIGURE_API void print();
};
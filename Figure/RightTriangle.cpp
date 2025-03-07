#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"

// Прямоугольный треугольник - треугольник у которого один угол = 90
RightTriangle::RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
        name = "Прямоугольный треугольник";
    }
    void RightTriangle::print() {
        print_info();
    }

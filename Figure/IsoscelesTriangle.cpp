#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "IsoscelesTriangle.h"

// Равнобедренный треугольник - треугольник у которого две стороны и два угла равны

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник";
    }
    void IsoscelesTriangle::print() {
        print_info();
    }
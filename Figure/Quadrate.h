#pragma once
#include "Figure.h"

class Quadrate : public Figure {
protected:
    double a{}, b{}, c{}, d{}; // Стороны
    double A{}, B{}, C{}, D{}; // Углы
public:
    FIGURE_API Quadrate(double a, double b, double c, double d, double A, double B, double C, double D);
    FIGURE_API void print_info();
};
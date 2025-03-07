#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
    double a{}, b{}, c{}; // �������
    double A{}, B{}, C{}; // ����
public:
    FIGURE_API Triangle(double a, double b, double c, double A, double B, double C);
    FIGURE_API void print_info();
};


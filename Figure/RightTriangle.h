#pragma once
#include "Figure.h"
#include "Triangle.h"

// ������������� ����������� - ����������� � �������� ���� ���� = 90
class RightTriangle : public Triangle {
public:
    FIGURE_API RightTriangle(double a, double b, double c, double A, double B, double C=90);
    FIGURE_API void print();
};
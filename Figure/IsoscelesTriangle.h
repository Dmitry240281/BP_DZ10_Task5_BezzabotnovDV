#pragma once
#include "Figure.h"
#include "Triangle.h"

// �������������� ����������� - ����������� � �������� ��� ������� � ��� ���� �����
class IsoscelesTriangle : public Triangle {
public:
    FIGURE_API IsoscelesTriangle(double a, double b, double A, double B);
    FIGURE_API void print();
};
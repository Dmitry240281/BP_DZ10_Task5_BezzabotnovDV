#pragma once
#include "Figure.h"
#include "Quadrate.h"

// ������������� (������� ������� �����, ���� = 90)
class Rectangle : public Quadrate {
public:
    FIGURE_API Rectangle(double a, double b, double A=90);
    FIGURE_API void print();
};
#pragma once
#include "Figure.h"
#include "Quadrate.h"

//����(��� ������� �����, ���� A, C � B, D ������� �����).
class Rhombus : public Quadrate {
public:
    FIGURE_API Rhombus(double a, double A, double B);
    FIGURE_API void print();
};
#pragma once
#include "Figure.h"
#include "Square.h"

// ������� - ��� ������� �����, ��� ���� �� 90 ��������
class Square : public Quadrate {
public:
    FIGURE_API Square(double a, double A = 90);
    FIGURE_API void print();
};
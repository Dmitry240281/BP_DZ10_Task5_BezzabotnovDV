#pragma once
#include "Figure.h"
#include "Quadrate.h"

// �������������� - ������� ������� �����, ���� �� ����� 90 �������� �� ������� �����
class Parallelogram : public Quadrate {
public:
    FIGURE_API Parallelogram(double a, double b, double A, double B);
    FIGURE_API void print();
};
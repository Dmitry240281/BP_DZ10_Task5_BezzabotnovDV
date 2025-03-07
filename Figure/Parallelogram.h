#pragma once
#include "Figure.h"
#include "Quadrate.h"

// Параллелограмм - стороны папарно равны, углы не равны 90 градусов но попарно равны
class Parallelogram : public Quadrate {
public:
    FIGURE_API Parallelogram(double a, double b, double A, double B);
    FIGURE_API void print();
};
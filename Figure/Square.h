#pragma once
#include "Figure.h"
#include "Square.h"

// Крабрат - все стороны равны, все углы по 90 градусов
class Square : public Quadrate {
public:
    FIGURE_API Square(double a, double A = 90);
    FIGURE_API void print();
};
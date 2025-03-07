#pragma once
#include "Figure.h"
#include "Quadrate.h"

//ромб(все стороны равны, углы A, C и B, D попарно равны).
class Rhombus : public Quadrate {
public:
    FIGURE_API Rhombus(double a, double A, double B);
    FIGURE_API void print();
};
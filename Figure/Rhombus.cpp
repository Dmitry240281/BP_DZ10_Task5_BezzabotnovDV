#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Rhombus.h"

//ромб(все стороны равны, углы A, C и B, D попарно равны).

Rhombus::Rhombus(double a, double A, double B) : Quadrate(a, a, a, a, A, B, A, B) {
        name = "Ромб";
    }
    void Rhombus::print() {
        print_info();
    }
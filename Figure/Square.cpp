#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Square.h"

//  рабрат - все стороны равны, все углы по 90 градусов
Square::Square(double a, double A) : Quadrate(a, a, a, a, A, A, A, A) {
        name = " вадрат";
    }
    void Square::print() {
        print_info();
    }
#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Rectangle.h"

// Прямоугольник (стороны попарно равны, углы = 90)

Rectangle::Rectangle(double a, double b, double A) : Quadrate(a, b, a, b, A, A, A, A) {
        name = "Прямоугольник";
    }
    void Rectangle::print() {
        print_info();
    }
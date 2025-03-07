#include <iostream>
#include "Figure.h"
#include "Quadrate.h"
#include "Parallelogram.h"

// Параллелограмм - стороны папарно равны, углы не равны 90 градусов но попарно равны

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrate(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм";
    }
    void Parallelogram::print() {
        print_info();
    }
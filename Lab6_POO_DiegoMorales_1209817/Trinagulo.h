#pragma once
#include "Poligono.h"
class Trinagulo :
    public Poligono
{
public:
    Trinagulo(double _ladoA) {
        ladoA = _ladoA;
        type = TRIANGULO;
    }
    double area() const override {
        return ladoA*ladoA*0.5;
    }
    double perimetro() const override {
        return ladoA*3;
    }
};


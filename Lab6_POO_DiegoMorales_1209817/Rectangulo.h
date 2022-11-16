#pragma once
#include "Poligono.h"
class Rectangulo :
    public Poligono
{
public:
    int ladoB;
    Rectangulo(double _ladoA,double _ladoB) {
        ladoA = _ladoA;
        ladoB = _ladoB;
        type = RECTANGULO;
    }
    double area() const override {
        return ladoA * ladoB;
    }
    double perimetro() const override {
        return (2 * ladoA) + (2 * ladoB);
    }
};


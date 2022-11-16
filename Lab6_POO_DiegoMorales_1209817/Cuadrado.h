#pragma once
#include "Rectangulo.h"
class Cuadrado :
    public Rectangulo
{
public:

    Cuadrado(double _ladoA) {
        ladoA = _ladoA;
        ladoB = _ladoA;
        type = CUADRADO;
    }
};


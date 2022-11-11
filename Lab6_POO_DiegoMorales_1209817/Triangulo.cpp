#include "pch.h"
#include "Triangulo.h"

double Poligono::area(double base, double alto) {
	return (0.5 * alto * base);
}

double Poligono::perimetro(double largo, double base) {
	return (2 * largo) + base;
}
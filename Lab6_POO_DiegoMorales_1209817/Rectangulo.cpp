#include "pch.h"
#include "Rectangulo.h"
#include "Poligono.h"

double Poligono::area(double base, double largo) {
	return base * largo;
}

double Poligono::perimetro(double base, double largo) {
	return (2 * largo) + (2 * base);
}
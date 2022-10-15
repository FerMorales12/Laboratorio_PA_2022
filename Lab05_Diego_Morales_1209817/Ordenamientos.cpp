#include "Ordenamientos.h"

using namespace System;

void Ordenamientos::Intercambio(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
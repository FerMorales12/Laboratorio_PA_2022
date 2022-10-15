#include "Ordenamientos.h"

using namespace System;

void Ordenamientos::Intercambio(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Quicksort(int arrNumeros[], int inf, int sup)
{
	int i = inf - 1;
	int j = sup;
	bool bandera = true;
	int temp = 0;

	if (inf >= sup)
		return;

	int elem_div = arrNumeros[sup];

	while (bandera)
	{
		while (arrNumeros[++i] < elem_div);
		while ((arrNumeros[--j] > elem_div) && (j > inf));

		if (i < j)
		{
			temp = arrNumeros[i];
			arrNumeros[i] = arrNumeros[j];
			arrNumeros[j] = temp;
		}
		else
		{
			bandera = false;
		}
	}

	temp = arrNumeros[i];
	arrNumeros[i] = arrNumeros[sup];
	arrNumeros[sup] = temp;
	Quicksort(arrNumeros, inf, i - 1);
	Quicksort(arrNumeros, i + 1, sup);

}//Fin de método Quicksort
#include "Ordenamientos.h"

using namespace System;

void Ordenamientos::Intercambio(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Ordenamientos::QuickSort(int arrNumeros[], int inf, int sup)
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
	QuickSort(arrNumeros, inf, i - 1);
	QuickSort(arrNumeros, i + 1, sup);

}//Fin de método Quicksort

void Ordenamientos::SelectSort(int vector[]) {
	int i, j, minimo;
	for ( i = 0; i < 79; i++)
	{
		minimo = i;
		for (j = i+1; j < 80; j++)
		{
			if (vector[j] < vector[minimo])
			{
				minimo = j;

			}
			Intercambio(&vector[j], &vector[minimo]);
		}
	}
}
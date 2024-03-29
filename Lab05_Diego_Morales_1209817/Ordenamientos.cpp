#include "Ordenamientos.h"
#include "DatosPokemon.h"
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

}//Fin de m�todo Quicksort

void Ordenamientos::SelectSort(DatosPokemon^,int) {
	int i, j, minimo;
	int vector[80];
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

void Ordenamientos::ShellSort(int vector[]) {
	int i, j,aux;
	int largo = sizeof(vector);
	int intervalo = largo / 2;
	while (intervalo>0)
	{
		for (i = intervalo + 1; i < largo; i++)
		{
			j = i - intervalo;
			while (j>0)
			{
				aux = j + intervalo;
				if (vector[j] > vector[aux])
					Intercambio(&vector[j], &vector[aux]);
				else
					j = -1;
				j -= intervalo;

			}
		}
		intervalo /= 2;
	}
}

void Ordenamientos::RecibirNumNacional(DatosPokemon^) {
	DatosPokemon^ nuevoPokemon = gcnew DatosPokemon();
	
	int vector[80];
	for (int i = 0; i < 80; i++)
	{
		vector[i] = nuevoPokemon->NumeroNacional;
	}
}
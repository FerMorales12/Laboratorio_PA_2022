#include "DatosPokemon.h"
#pragma once

ref class Ordenamientos
{
public:
	DatosPokemon^ newPokemon = gcnew DatosPokemon();
	
	void QuickSort(int array[], int, int);
	void ShellSort(int array[]);
	void SelectSort(DatosPokemon^, int);
	void Intercambio(int*, int*);
	//DatosPokemon^ bicho;
	void RecibirNumNacional(DatosPokemon^);
};

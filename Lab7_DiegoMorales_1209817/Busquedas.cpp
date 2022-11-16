#include "Busquedas.h"

using namespace System;

int Busquedas::Secuencial(array<int>^ vector, int search, int largoV) {
	int i;
	for (i = 0; i < largoV; i++) {
		//Si v[i]=search devuelve la posición donde lo encontró. De lo contrario, aumenta la i
		if (vector[i] == search) {
			
			return i;
			
		}
		else
			i++;
		//Si i=largoV, devuelve -1, lo que significa que no lo encontró
		if (i == largoV+1)
			return -1;
	}
		
}

bool Busquedas::Burbuja(array<int>^ vector,int largoV) {
	int aux, i, j;
	for (i = 0; i < largoV; i++) {
		for (j = i + 1; j < largoV; j++) {
			if (vector[i] > vector[j]) {
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
		return true;
	}
	return false;
}

int Busquedas::Binario(array<int>^ vector, int search, int largoV) {
	/*Hasta que vea como puedo llamar a la función burbuja para el if*/
	bool ordenado = true;
	
	int first = 0;
	int last = largoV - 1;
	int middle = (first + last) / 2;
	if (Burbuja(vector, largoV)) {
		while (first <= last) {
			if (search == vector[middle])
				return middle;
			else {
				if (vector[middle] > search)
					last = middle - 1;
				else
					first = middle + 1;
			}
		}
	}
	return -1;
}
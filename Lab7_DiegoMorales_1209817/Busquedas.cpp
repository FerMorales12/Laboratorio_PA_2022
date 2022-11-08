#include "Busquedas.h"

int Busquedas::Secuencial(int vector[], int search, int largoV) {
	int i;
	for (i = 0; i < largoV; i++) {
		//Si v[i]=search devuelve la posición donde lo encontró. De lo contrario, aumenta la i
		if (vector[i] == search)
			return i;
		else
			i++;
		//Si i=largoV, devuelve -1, lo que significa que no lo encontró
		if (i == largoV+1)
			return -1;
	}
		
}

bool Busquedas::Burbuja(int vector[],int largoV) {
	int i,j = 0;
}
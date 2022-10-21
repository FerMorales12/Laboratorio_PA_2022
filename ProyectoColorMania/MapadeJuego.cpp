#include "MapadeJuego.h"

void DePilaCola() {
	Pila^ miPila = gcnew Pila();
	Cola^ miCola = gcnew Cola();
	Node^ bloque = gcnew Node();
	bloque->valor;
	while (miPila->Count() != 0)
	{
		miPila->Pop();

		miCola->Agregar(bloque);
	}
}

void MapaDeJuego::Capacidad(int numCap) {
	capacidadMaxima = numCap;
}


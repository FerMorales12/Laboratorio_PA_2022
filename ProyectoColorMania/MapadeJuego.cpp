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

void MapadeJuego::Capacidad(int numCap) {
	capacidadMaxima = numCap;
}

bool MapadeJuego::Gano() {
	
	bool gano = true;
	if (esPila) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < MapaPila[i]->Count() - 1; j++) {
				if (MapaPila[i]->GetItem(j) != MapaPila[i]->GetItem(j + 1)) {
					gano = false;
					i = 5;
					j = MapaPila[i]->Count() + 1;
				}
			}
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < MapaCola[i]->Count() - 1; j++) {
				if (MapaCola[i]->GetItem(j) != MapaCola[i]->GetItem(j + 1)) {
					gano = false;
					i = 5;
					j = MapaCola[i]->Count() + 1;
				}
			}
		}
	}
	return gano;
}

bool MapadeJuego::Mover(int indiceOrigen, int indiceEntrada) {
	if (esPila) {
		if (MapaPila[indiceOrigen]->Count() >= capacidadMaxima || MapaPila[indiceEntrada]->Count() >= capacidadMaxima) {
			return false;
		}
		MapaPila[indiceEntrada]->Push(MapaPila[indiceOrigen]->Pop());
		if (ArchivoMovimientos != "") {
			StreamWriter^ movs = gcnew StreamWriter(ArchivoMovimientos);
			System::String^ mavx = "P" + indiceOrigen + ", P" + indiceEntrada;
			movs->WriteLine(mavx);
		}
		return true;
	}
	else {
		if (MapaCola[indiceOrigen].Count() >= capacidadMaxima || MapaCola[indiceEntrada].Count() >= capacidadMaxima) {
			return false;
		}
		MapaCola[indiceEntrada].Agregar(MapaCola[indiceOrigen].Sacar());
		if (ArchivoMovimientos != "") {
			StreamWriter^ movs = gcnew StreamWriter(ArchivoMovimientos);
			System::String^ mavx = "P" + indiceOrigen + ", P" + indiceEntrada;
			movs->WriteLine(mavx);
		}
		return true;
	}
}
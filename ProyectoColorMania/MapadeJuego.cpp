#include "MapadeJuego.h"

using namespace System;
using namespace System::IO;
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
			for (int j = 0; j < MapaCola[i]->getLength() - 1; j++) {
				if (MapaCola[i]->getItem(j) != MapaCola[i]->getItem(j + 1)) {
					gano = false;
					i = 5;
					j = MapaCola[i]->getLength() + 1;
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
			String^ mavx = "P" + indiceOrigen + ", P" + indiceEntrada;
			movs->WriteLine(mavx);
		}
		return true;
	}
	else {
		if (MapaCola[indiceOrigen]->getLength() >= capacidadMaxima || MapaCola[indiceEntrada]->getLength() >= capacidadMaxima) {
			return false;
		}
		MapaCola[indiceEntrada]->Agregar(MapaCola[indiceOrigen]->Sacar());
		if (ArchivoMovimientos != "") {
			StreamWriter^ movs = gcnew StreamWriter(ArchivoMovimientos);
			String^ mavx = "P" + indiceOrigen + ", P" + indiceEntrada;
			movs->WriteLine(mavx);
		}
		return true;
	}
}

bool MapadeJuego::CargaInicial(String^ archivo) {
	bool archivoValido = true;
	ArchivoEstado = archivo;
	StreamReader^ lector = gcnew StreamReader(archivo);
	String^ estadoInicial = lector->ReadLine();
	int jdx = 0;
	for (int i = 0; i < estadoInicial->Length; i++) {
		if (estadoInicial[i] == 'A' && jdx < 4 && MapaPila[jdx]->Count() < capacidadMaxima) {
			MapaPila[jdx]->Push("Amarillo");
		}
		else if (estadoInicial[i] == 'M' && jdx < 4 && MapaPila[jdx]->Count() < capacidadMaxima) {
			MapaPila[jdx]->Push("Morado");
		}
		else if (estadoInicial[i] == 'R' && jdx < 4 && MapaPila[jdx]->Count() < capacidadMaxima) {
			MapaPila[jdx]->Push("Rojo");
		}
		else if (estadoInicial[i] == 'V' && jdx < 4 && MapaPila[jdx]->Count() < capacidadMaxima) {
			MapaPila[jdx]->Push("Verde");
		}
		else if (estadoInicial[i] == 'X' && jdx < 4 && MapaPila[jdx]->Count() < capacidadMaxima) {
			jdx++;
		}
		else {
			archivoValido = false;
			i = estadoInicial->Length + 1;
		}
	}
	if (!archivoValido) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < MapaPila[i]->Count(); j++) {
				MapaPila[i]->Pop();
			}
		}
	}
	return archivoValido;
}
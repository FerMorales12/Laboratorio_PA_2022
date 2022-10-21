#include "Node.h"
#include "Pila.h"
#include "Cola.h"
#include "MyForm.h"
#pragma once
using namespace System;
ref class MapadeJuego
{
private:
	
	String^ ArchivoMovimientos = "";
	String^ ArchivoEstado;
	bool esPila = true;
	int capacidadMaxima;
public:
	Cola^ NuevaCola = gcnew Cola();
	array <Cola^>^ MapaCola = gcnew array<Cola^>(4);
	array<Pila^>^ MapaPila = gcnew array<Pila^>(4);
	bool Mover(int indiceOrigen, int indiceEntrada);
	bool Gano();
	void Capacidad(int numCap);
	bool CargaInicial(String^ archivo);
	void DefinirArchivoMovimientos(String^ archMov);
	void Resolver();
	void Guardar();
	void DePilaCola();
};


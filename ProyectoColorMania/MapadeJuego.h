#include "Node.h"
#include "Pila.h"
#include "Cola.h"
#include "MyForm.h"
#pragma once
ref class MapadeJuego
{
private:
	array<Cola^>^ MapaCola = gcnew array<Cola^>^(4);
	array<Pila^>^ MapaPila = gcnew array<Pila^>^(4);
	System::String^ ArchivoMovimientos;
	System::String^ ArchivoEstado;
	bool esPila = true;
	int capacidadMaxima;
public:
	bool Mover(int indiceOrigen, int indiceEntrada);
	bool Gano();
	void Capacidad(int numCap);
	void Apilar();
	void Pintar();
	void DePilaCola();
};


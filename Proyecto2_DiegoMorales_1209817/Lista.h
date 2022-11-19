#include "Node.h"
#pragma once
ref class Lista
{
	Node^ arriba;
	Node^ abajo;
	Node^ izq;
	Node^ left;
	Node^ Cabeza;
	Node^ Cola;
public:
	void Insertar(int value);
	bool Insert(int Value,int index);
	int Buscar(int value);
	bool Eliminar(int value);

};


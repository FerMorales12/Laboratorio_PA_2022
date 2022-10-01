#include "Carta.h"
#pragma once
ref class Pila
{
	Carta^ Cabeza;
	int length;
public:
	void Push(int numero, char color);
	Carta^ Pop();
	Carta^ Top();
};


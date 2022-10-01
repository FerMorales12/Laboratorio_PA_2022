#include "Pila.h"

using namespace System;

void Pila::Push(int numero, char color) {
	Carta^ Nueva = gcnew Carta();
	Nueva->numero = numero;
	Nueva->color = color;
	Nueva->Next = Cabeza;
	Cabeza = Nueva;
	length++;
}

Carta^ Pila::Pop() {
	if (length == 0)
		return nullptr;
	Carta^ Salida = gcnew Carta();//carta sacada del mazo
	Salida->color = Cabeza->color;
	Salida->numero = Cabeza->numero;
	Carta^ Borrar = Cabeza;
	delete Borrar;
	length--;
	return Salida;
}

Carta^ Pila::Top() {
	return Cabeza;
}

Pila^ Pila::Llenar() {
	Pila^ Mazo = gcnew Pila();
	int ListaCartas[52];
	for (int i = 0; i < 52; i++)
	{
		ListaCartas[i] = ((i + 1) % 25) + 1;
	}
	int cantidad = 0;
	while (cantidad<52)
	{
		Random rnd;
		int i=rnd.Next(0,53);
		if (ListaCartas[i] != 0)
		{
			Mazo->Push(i, "N" || "R");
			ListaCartas[i] = 0;
			cantidad++;
		}
	}
	return Mazo;
}
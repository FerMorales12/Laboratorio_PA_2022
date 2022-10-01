#include "Pila.h"

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
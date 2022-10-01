#include "Pila.h"

void Pila::Push(int numero, char color) {
	Carta^ Nueva = gcnew Carta();
	Nueva->numero = numero;
	Nueva->color = color;
	Nueva->Next = Cabeza;
	Cabeza = Nueva;
	length++;
}
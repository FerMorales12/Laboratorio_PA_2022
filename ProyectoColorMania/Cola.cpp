#include "Cola.h"

using namespace System;

bool Cola::isEmpty() {
	return contador == 0;
	Head = nullptr;
}

void Cola::Agregar(Node^ nodo) {
	Node^ nuevo = gcnew Node();
	if (isEmpty()) {
		Head = nodo;
		Tail = nodo;
	}
	else {
		Tail->Next = nodo;
		Tail = nodo;
	}
	contador++;
}

void Sacar() {

}
void Clear() {

}
int getLength() {

}
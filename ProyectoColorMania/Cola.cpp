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

Node^ Cola::Sacar() {
	Node^ temp = Tail;
	if (isEmpty())
		return Tail;
	if (largo == 1) {
		Tail = Tail->Next;
		Head = Tail;
	}
	else {
		Node^ pretemp = Head;
		temp = pretemp->Next;
		while (temp!=Tail)
		{
			pretemp = temp;
			temp = pretemp->Next;
		}
		pretemp->Next = temp->Next;
		Tail = pretemp;
		largo--;
	}
	return temp;
}
int Cola::Clear() {
	return -1;
}
int Cola::getLength() {
	return largo;
}
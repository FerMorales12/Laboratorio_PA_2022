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
void Cola::Clear() {
	while (!isEmpty())
	{
		Sacar();
	}
}
int Cola::getLength() {
	if (Head == nullptr)
		return largo=0;
	else {
		Node^ iterador = gcnew Node();
		Node^ iteradorcola = gcnew Node();
		iterador = Head;
		iteradorcola = Tail;
		largo = 1;
		while (iterador->Next!=nullptr)
		{
			iterador = iterador->Next;
			iteradorcola->Next = Tail;
			largo++;
		}
		return largo;
	}
	
}

void Cola::Print() {
	Node^ actual = Head;
	while (actual!=nullptr)
	{
		actual = actual->Next;
	}
}

String^ Cola::getItem(int index) {
	if (index < 0 || index > this->getLength()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node^ iterador = gcnew Node;
	iterador = Head;
	for (int i = 0; i < index; i++) {
		iterador = iterador->Next;
	}
	return iterador->Color;
}
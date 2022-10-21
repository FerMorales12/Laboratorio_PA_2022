#include "Pila.h"
using namespace System;

void Pila::Push(String^ color) {
	Node^ nuevo = gcnew Node;
	if (header == nullptr) {
		nuevo->Color = color;
		nuevo->Next = nullptr;
		header = nuevo;
	}
	else {
		nuevo->Color = color;
		nuevo->Next = header;
		header = nuevo;
	}
}

String^ Pila::Pop() {
	Node^ iterador = gcnew Node;
	if (header == nullptr) {
		return "";
	}
	else {
		iterador = header;
		header = header->Next;
		return iterador->Color;
	}
}

int Pila::IndexOf(String^ color) {
	int indice = -1;
	Node^ iterador = gcnew Node;
	iterador = header;
	for (int i = 0; i < this->Count(); i++) {
		if (iterador->Color == color) {
			indice = i;
			i = this->Count() + 1;
		}
		iterador = iterador->Next;
	}
	return indice;
}

int Pila::Count() {
	if (header == nullptr) {
		return 0;
	}
	else {
		Node^ iterador = gcnew Node;
		iterador = header;
		int contador = 1;
		while (iterador->Next != nullptr) {
			iterador = iterador->Next;
			contador++;
		}
		return contador;
	}
}

String^ Pila::GetItem(int index) {
	if (index < 0 || index > this->Count()) {
		throw gcnew System::IndexOutOfRangeException();
	}
	Node^ iterador = gcnew Node;
	iterador = header;
	for (int i = 0; i < index; i++) {
		iterador = iterador->Next;
	}
	return iterador->Color;
}
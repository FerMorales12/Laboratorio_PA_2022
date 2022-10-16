#include "Pila.h"
void Pila::Push(System::String^ color) {
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

System::String^ Pila::Pop() {
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

int Pila::IndexOf(System::String^ color) {
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
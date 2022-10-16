#include "Pila.h"
void Pila::Push(System::String^ color) {
	Node^ nuevo = new Node;
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
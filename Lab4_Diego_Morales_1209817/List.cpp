#include "List.h"


//Insertar al inicio de la lista
void List::AddStart(int item) {
	Node* lista = nullptr;
	Node* nuevoNodo = new Node();
	nuevoNodo->data = item;
	Node* aux1 = lista;
	Node* aux2;
	
	//lista ordenada
	while ((aux1!=nullptr)&&(aux1->data<item))
	{
		aux2 = aux1;
		aux1 = aux1->next;
	}
	if (lista == aux1) {
		lista = nuevoNodo;
		
	}
	else {
		aux2->next = nuevoNodo;
		
	}
	nuevoNodo->next = aux1;
}

void List::Insert(int index, int item) {

}
#include "pch.h"
#include "Lista.h"

//Insertar al inicio de la lista
void Lista::Insertar(int value) {
	
	Node^ New = gcnew Node();
	New->Value = value;
	New->next = Cabeza;
	if (Cola == nullptr)
		Cola = New;
}

//Insertar en cualquier posición de la lista

bool Lista::Insert(int value, int index) {
	if (Cabeza == nullptr) {
		Insertar(value);
		return true;
	}
	int i = 0;
	Node^ Current = Cabeza;
	while (i<(index-1)&&Current!=nullptr)
	{
		i++;
		Current = Current->next;
	}
	if (Current == nullptr)
		return false;
	Node^ New = gcnew Node();
	New->Value = value;
	New->next = Current->next;
	Current->next = New;
	return true;
}

//Buscar un valor en la lista. Búsqueda secuencial

int Lista::Buscar(int value) {
	int index = 0;
	Node^ Current=Cabeza;
	while (Current->Value != value && Current != nullptr)
	{
		Current = Current->next;
		index++;
	}
	if (Current == nullptr)
	{
		return -1;
	}
	else
		return index;
}

bool Lista::Eliminar(int value) {
	int index = Buscar(value);
	if (Buscar(value) == -1)
	{
		return false;
	}
	Node^ Anterior = Cabeza;
	int i = 0;
	while (i < index - 1)
	{
		Anterior = Anterior->next;
		i++;
	}
	Node^ ToDelete = Anterior->next;
	Anterior->next = ToDelete->next;
	delete ToDelete;
}
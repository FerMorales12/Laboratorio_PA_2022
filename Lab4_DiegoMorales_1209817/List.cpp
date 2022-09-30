#include "List.h"



void List::Add(int item) {
	Node^ newNode = gcnew Node();
	newNode->data = item;
	if (Count()==0) {//la lista está vacía 
		start = newNode;
		end = newNode;
	}
	else {//La lista no está vacía
		newNode->next = start;
		start = newNode;
	}
	count++;
	
}

void List::Clear() {
	Node^ aux = gcnew Node();
	while (start->next != nullptr) /*mientras la cabeza apunte hacia un elemento, se raliza el while
		y lo que hace es asignar el valor del siguiente nodo a aux, y eliminar aux*/
	{start = start->next;
		start->next = aux;
		delete &aux;
	}
}

int List::Count() {
	return count;
}

bool List::Contains(int item) {

}

int List::IndexOf(int item) {

}

void List::Insert(int index, int item) {

}

int List::GetItem(int index) {
	int counter = 0;
	Node^ temp = gcnew Node();
	while ((temp)&& counter <=index)
	{
		if (counter < index)
			return temp->data;
		counter++;
	}
}

void List::SetItem(int index, int item) {

}

int List::LastIndexOf(int item) {

}

bool List::Remove(int item) {

}

void List::RemoveAt(int index) {

}


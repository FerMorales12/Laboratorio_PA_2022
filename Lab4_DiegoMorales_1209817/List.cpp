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
	return false;
}

int List::IndexOf(int item) {
	return -1;
}

void List::Insert(int index, int item) {//Inserta en una posición arbitraria en la lista
	Node^ newNode = gcnew Node();
	newNode->data = item;
	if (Count() || index == 0) {
		Add(item);
	}
	else {
		if (index >= count) {
			Add(item);
		}
		else {
			Node^ pretemp = gcnew Node();
			Node^ temp = gcnew Node();
			int index_intern = 1;
			while ((temp)&&index_intern<index)
			{
				pretemp = temp;
				temp = temp->next;
				index_intern++;
			}
			newNode->next = temp;
			pretemp->next = newNode;
		}
	}
	count++;
}

int List::GetItem(int index) {
	int counter = 0;
	Node^ temp = gcnew Node();//el nodo temporal almacenará el dato con el indice n
	temp->next = start;
	while ((temp)&& counter <=index)
	{
		if (counter < index)
			return temp->data;
		counter++;
	}
	temp = temp->next;
	return -1;//Indica que no lo encontró
}

void List::SetItem(int index, int item) {//Si el elemento está en 7, moverlo a 4

}

int List::LastIndexOf(int item) {
	return -1;
}

bool List::Remove(int item) {
	return true;
}

void List::RemoveAt(int index) {

}


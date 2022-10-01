#include "List.h"



void List::Add(int item) {
	Node^ newNode = gcnew Node();
	newNode->data = item;
	if (Count(count)==0) {//la lista est� vac�a 
		start = newNode;
		end = newNode;
	}
	else {//La lista no est� vac�a
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

int List::Count(int count) {
	return count;
}

bool List::Contains(int item) {
	return false;
}

int List::IndexOf(int item) {
	return -1;
}

void List::Insert(int index, int item) {//Inserta en una posici�n arbitraria en la lista
	Node^ newNode = gcnew Node();
	newNode->data = item;
	if (Count(count) || index == 0) {
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
	Node^ temp = gcnew Node();//el nodo temporal almacenar� el dato con el indice n
	temp->next = start;
	while ((temp)&& counter <=index)
	{
		if (counter < index)
			return temp->data;
		counter++;
	}
	temp = temp->next;
	return -1;//Indica que no lo encontr�
}

void List::SetItem(int index, int item) {//Si el elemento est� en 7, moverlo a 4
	Node^ temp = gcnew Node();
	Node^ pretemp = gcnew Node();
	Node^ actual = gcnew Node();//apuntador del elemento a mover
	actual->data = item;
	if (actual == nullptr) {
		pretemp->next = actual;
		actual->next = temp;
		count++;
	}
	else {
		actual = pretemp;
		actual->next = pretemp;
		pretemp->next = temp;
		
	}
}

int List::LastIndexOf(int item) {
	Node^ last = gcnew Node();
	Node^ temp = gcnew Node();
	temp->next = last;
	if (last->next = nullptr) {
		return last->data;
	}
	else
		return -1;
}

bool List::Remove(int item) {
	Node^ temp = gcnew Node();
	
	if (start->next != nullptr) {
		start->next = temp;
		temp = start;
		return true;
		count--;
	}
	else
		return false;
}

void List::RemoveAt(int index) {
	Node^ temp = gcnew Node();
	Node^ pretemp = gcnew Node();
	Node^ borrar = gcnew Node();
	borrar->next = temp;
	if (borrar->next != nullptr) {
		pretemp->next = borrar;
		borrar->next = nullptr;
		pretemp->next = temp;
		delete borrar;
		count--;
	}
}


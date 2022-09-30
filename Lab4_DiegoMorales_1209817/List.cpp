#include "List.h"



void List::Add(int item) {
	Node^ newNode = gcnew Node();
	newNode->data = item;
	if (IsEmpty()) {//lo inserta al final de la lista
		start = newNode;
		end = newNode;
	}
	count++;
	
}

void List::Clear() {

}

int List::Count() {

}

bool List::Contains(int item) {

}

int List::IndexOf(int item) {

}

void List::Insert(int index, int item) {

}

int List::GetItem(int index) {

}

void List::SetItem(int index, int item) {

}

int List::LastIndexOf(int item) {

}

bool List::Remove(int item) {

}

void List::RemoveAt(int index) {

}


#include "List.h"


//Insertar al inicio de la lista
void List::Insert(int index, int item) {
	Node New;
	New->Next = data;
	New->header = index;
}
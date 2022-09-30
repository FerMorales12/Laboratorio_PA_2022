#include "List.h"

void List::Insert(int index, int item) {
	if (header == nullptr) {
		Insert(index, item);
	}
}
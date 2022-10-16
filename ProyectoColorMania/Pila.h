#pragma once
#include "Node.h"
ref class Pila
{
private:
	Node* header = nullptr;
public:
	void Push(System::String^ color);
	System::String^ Pop();
	int IndexOf(System::String^ color );
	int Count();
	System::String^ GetItem(int index);
};


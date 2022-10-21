#pragma once
#include "Node.h"

using namespace System;

ref class Pila
{
private:
	Node^ header;
public:
	void Push(System::String^ color);
	String^ Pop();
	int IndexOf(String^ color );
	int Count();
	String^ GetItem(int index);
};


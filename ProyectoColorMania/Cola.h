#include "Node.h"
#pragma once
using namespace System;
ref class Cola
{
	Node^ Head;
	Node^ Tail;
	int Length;
public:
	void Agregar(Node^ nodo);
	void Sacar();
	void Clear();
	int getLength();
	bool isEmpty();
	int contador;
};


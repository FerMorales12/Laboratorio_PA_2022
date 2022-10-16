#include "Node.h"
#pragma once
using namespace System;
ref class Cola
{
	Node^ Head;
	Node^ Tail;
	
public:
	void Agregar(Node^ nodo);
	void Sacar();
	void Clear();
	int getLength();
	bool isEmpty();
	int contador;
	int largo;
};


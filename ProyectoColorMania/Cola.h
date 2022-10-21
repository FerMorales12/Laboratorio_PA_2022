#include "Node.h"
#pragma once
using namespace System;
ref class Cola
{
	Node^ Head;
	Node^ Tail;
	int largo;
public:
	void Agregar(Node^ nodo);
	Node^ Sacar();
	void Clear();
	int getLength();
	bool isEmpty();
	int contador;
	void Print();
	String^ getItem(int index);
};


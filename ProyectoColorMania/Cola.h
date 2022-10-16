#include "Node.h"
#pragma once
using namespace System;
ref class Cola
{
	Node^ Head;
	Node^ Tail;
	int Length;
public:
	void Agregar();
	void Sacar();
	void Clear();
	int getLength();
	bool isEmpty();
};


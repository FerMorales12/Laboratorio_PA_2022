#include "Node.h"
#include "Lista.h"

#pragma once

using namespace System;

ref class Bahia
{
	void CrearBahia(String^ fila,int columna);
	int pesomax;
	void AlmacenarProd(int id);
	bool RetirarProd();
	void EliminarBahia();
};


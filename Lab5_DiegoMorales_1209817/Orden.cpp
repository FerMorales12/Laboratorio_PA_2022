#include "pch.h"
#include "Orden.h"

using namespace System;
using namespace System::IO;
void Orden::Lectura() {
	try
	{
		String* textFile = String::Concat(S"\\Pokedex.csv");
		StreamReader* reader = new  StreamReader(textFile);
	}	
	catch (System::Exception ^e)
	{

	}
}

void Orden::QuickSort() {

}

void Orden::SelectSort() {

}

void Orden::ShellSort() {

}
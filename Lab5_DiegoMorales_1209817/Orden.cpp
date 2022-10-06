#include "pch.h"
#include "Orden.h"

using namespace System;
using namespace System::IO;
void Orden::Lectura() {
	try
	{
		String^ textFile = String::Concat(("\\Pokedex.csv"));
		StreamReader^ reader = gcnew  StreamReader(textFile);
		do
		{
			Console::WriteLine(reader->ReadLine());
		} while (reader->Peek() != -1);
	}	
	catch (System::Exception ^e)
	{
		Console::WriteLine("Archivo inválido");
	}
}

void Orden::QuickSort(int arrNumeros[], int inf, int sup) {
	int i = inf - 1;
	int j = sup;
	bool bandera = true;
	int temp = 0;

	if (inf >= sup)
		return;
}

void Orden::SelectSort() {

}

void Orden::ShellSort() {

}
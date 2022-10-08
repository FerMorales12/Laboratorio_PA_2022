#include "pch.h"
#include "Orden.h"
#include <fstream>
#include <string>


using namespace System;
using namespace System::IO;

void Orden::Lectura() { //Lee el archivo csv
	try
	{	
		String^ textFile = String::Concat(("Pokedex.csv"));
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
	int elem_div = arrNumeros[sup];

	while (bandera)
	{
		while (arrNumeros[++i] < elem_div);
		while ((arrNumeros[--j] > elem_div) && (j > inf));

		if (i < j)
		{
			temp = arrNumeros[i];
			arrNumeros[i] = arrNumeros[j];
			arrNumeros[j] = temp;
		}
		else
		{
			bandera = false;
		}
	}

	temp = arrNumeros[i];
	arrNumeros[i] = arrNumeros[sup];
	arrNumeros[sup] = temp;
	QuickSort(arrNumeros, inf, i - 1);
	QuickSort(arrNumeros, i + 1, sup);
	Console::WriteLine("Arreglo ordenado exitosamente");
}


void Orden::SelectSort() {

}

void Orden::ShellSort() {

}
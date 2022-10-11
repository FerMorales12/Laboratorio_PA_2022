#include "pch.h"
#include "Orden.h"
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <sstream>

using namespace System;
using namespace System::IO;
using namespace std;
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
	
}


void Orden::SelectSort(int arreglo[]) {
	int i = 0;
	int j = 0;
	//int arreglo[8];
	int largo = sizeof(arreglo);
	int menor;
	for (i = 0; i < largo-1; i++)
	{
		menor = i;
		for ( j = i+1; j < largo; j++)
		{
			if (arreglo[j] < arreglo[menor]) {
				menor = j;
				cambio(&arreglo[menor], &arreglo[j]);
			}
		}
	}
}

void Orden::ShellSort(int arreglo[]) {
	int i, j, k;
	int intervalo = sizeof(arreglo) / 2;
	while (intervalo>0)
	{
		for (i = intervalo; i <= sizeof(arreglo); i++)
			j = i - intervalo;
			while (j >= 0) {
				k = j + intervalo;
				if (arreglo[j] <= arreglo[k])
					j = -1;
				else
					cambio(&arreglo[j], &arreglo[k]);
			}
	}
}

void Orden::GuardarArchivo() {
	String^ textfile = String::Concat(("PokedexOrdenada.csv"));
	StreamWriter^ escritor = gcnew StreamWriter(textfile);
	escritor->Close();
	
	Console::WriteLine("Archivo Guardado");

}

void Orden::LecturaC() {
	ifstream infile("Pokedex.csv");
	string line = "";
	vector<string>Pokedex_csv;
	
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ','))
		{
			Pokedex_csv.push_back(word);
		}
	}
	
}

void Orden::cambio(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
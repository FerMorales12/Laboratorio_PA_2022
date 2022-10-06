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

	}
}

void Orden::QuickSort() {

}

void Orden::SelectSort() {

}

void Orden::ShellSort() {

}
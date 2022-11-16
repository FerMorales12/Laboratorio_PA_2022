#include "pch.h"
#include "Triangulo.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("Ingrese cantidad de lados para el polígono. ");
    int lados = Convert::ToInt32(Console::ReadLine());
    Console::WriteLine("Ingrese valor de la base: ");
    double base = Convert::ToDouble(Console::ReadLine());
    Console::WriteLine("Ingrese altura: ");
    double altura = Convert::ToDouble(Console::ReadLine());
    Console::WriteLine("Su figura tiene una base de: " + base + " unidades y una altura de: " + altura + " unidades");


    return 0;
}

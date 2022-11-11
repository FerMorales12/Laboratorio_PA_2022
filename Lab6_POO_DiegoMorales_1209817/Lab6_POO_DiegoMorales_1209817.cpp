#include "pch.h"
#include "Triangulo.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Triangulo^ T1 = gcnew Triangulo();
    Poligono^ miPoligono1 = gcnew Poligono();
    Console::WriteLine("Ingrese longitud del triangulo");
    int longitud = Convert::ToDouble(Console::ReadLine());
    T1->lados = longitud;
    
    return 0;
}

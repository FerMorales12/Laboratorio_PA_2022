#include "pch.h"
#include "Orden.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    Orden^ Leer = gcnew Orden();
    Leer->Lectura();
    Orden^ ordenar = gcnew Orden();
    int opcion = 0;
    Console::WriteLine("Seleccione una opción: ");
    
    
        Console::WriteLine("1. Método Quick Sort ");
        Console::WriteLine("2. Método Shell Sort ");
        Console::WriteLine("3. Método Selection Sort ");
    opcion = int::Parse(Console::ReadLine());
        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default: Console::WriteLine("Adios");
            break;
        }
            
    
    return 0;
}

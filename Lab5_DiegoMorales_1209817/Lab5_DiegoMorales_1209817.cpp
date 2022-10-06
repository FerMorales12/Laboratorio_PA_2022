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
    
    
   
        
        do
        {
            Console::WriteLine("1. Método Quick Sort ");
            Console::WriteLine("2. Método Shell Sort ");
            Console::WriteLine("3. Método Selection Sort ");
            Console::WriteLine("0. Salir");

            opcion = int::Parse(Console::ReadLine());
            switch (opcion)
            {
            case 1:
                Console::WriteLine("Vamos a ordenar con el método shell");
                break;
            case 2:
                ordenar->ShellSort();
                break;
            case 3:
                ordenar->SelectSort();
                break;
            case 0:
                Console::WriteLine("Adiós");
                break;
            default: Console::WriteLine("Elija una opción válida");
                break;
            }
        } while (opcion!=0);
        
            
    
    return 0;
}

#include "pch.h"
#include "Orden.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    Orden^ Leer = gcnew Orden();
    Leer->Lectura();
    Orden^ ordenar = gcnew Orden();
    int opcion = 0;
    Console::WriteLine("Seleccione una opci�n: ");
    
    
   
        
        do
        {
            Console::WriteLine("1. M�todo Quick Sort ");
            Console::WriteLine("2. M�todo Shell Sort ");
            Console::WriteLine("3. M�todo Selection Sort ");
            Console::WriteLine("0. Salir");

            opcion = int::Parse(Console::ReadLine());
            switch (opcion)
            {
            case 1:
                Console::WriteLine("Vamos a ordenar con el m�todo shell");
                break;
            case 2:
                ordenar->ShellSort();
                break;
            case 3:
                ordenar->SelectSort();
                break;
            case 0:
                Console::WriteLine("Adi�s");
                break;
            default: Console::WriteLine("Elija una opci�n v�lida");
                break;
            }
        } while (opcion!=0);
        
            
    
    return 0;
}

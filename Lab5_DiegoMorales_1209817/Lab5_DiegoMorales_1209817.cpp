#include "pch.h"
#include "Orden.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    Orden^ Leer = gcnew Orden();
   
    Orden^ ordenar = gcnew Orden();
    int opcion = 0;
    Console::WriteLine("Seleccione una opci�n: ");
    
    int vector[8] = { 2,5,0,8,-1,6,0,10 };
    
        
        do
        {
            Console::WriteLine("1. M�todo Quick Sort ");
            Console::WriteLine("2. M�todo Shell Sort ");
            Console::WriteLine("3. M�todo Selection Sort ");
            Console::WriteLine("4. Limpiar pantalla ");
            Console::WriteLine("0. Salir\b");
            

            opcion = int::Parse(Console::ReadLine());
            switch (opcion)
            {
            case 1:
                Console::WriteLine("Vamos a ordenar con el m�todo Quick");
                Leer->Lectura();
                Console::WriteLine("\b");
                break;
            case 2:
                ordenar->ShellSort(vector);
                Console::WriteLine("Vamos a ordenar con el m�todo Shell");
                Leer->Lectura();
                Console::WriteLine("\b");
                break;
            case 3:
                
                ordenar->SelectSort(vector);
                Console::WriteLine("Vamos a ordenar con el m�todo selecci�n");
                Leer->Lectura();
                Console::WriteLine("\b");
                break;
            case 0:
                Console::WriteLine("Adios");
                
                break;
            case 4:
                Console::Clear();
                break;
            case 5:
                Leer->Lectura();
                Leer->GuardarArchivoC();
                break;
            default: Console::WriteLine("Elija una opci�n v�lida");
                break;
            }
        } while (opcion!=0);
        
            
    
    return 0;
}

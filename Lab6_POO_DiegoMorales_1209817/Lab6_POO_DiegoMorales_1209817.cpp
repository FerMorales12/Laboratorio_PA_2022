#include "pch.h"
#include "Poligono.h"
#include "Rectangulo.h"
#include "Trinagulo.h"
#include "Cuadrado.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Poligono** lista = new Poligono*[5];
    Console::WriteLine("Ingrese 5 polígonos");
    for (int i = 0; i < 5; i++)
    {
        Console::WriteLine("Seleccione el tipo de figura");
        Console::WriteLine("1. Triangulo");
        Console::WriteLine("2. Rectangulo");
        Console::WriteLine("3. Cuadrado");
        int opcion=Convert::ToInt32( Console::ReadLine());
        switch (opcion)
        {
        case 1:
            Console::WriteLine("Ingrese el lado del triángulo");
            double lado = Convert::ToDouble(Console::ReadLine());
            lista[i] = new Trinagulo(lado);
            break;
        case 2: 
            Console::WriteLine("Ingrese el lado A del rectángulo");
            double ladoA = Convert::ToDouble(Console::ReadLine());
            Console::WriteLine("Ingrese el ladoB del rectángulo");
            double ladoB = Convert::ToDouble(Console::ReadLine());
            lista[i] = new Rectangulo(ladoA,ladoB);
            
            break;
        case 3:
            Console::WriteLine("Ingrese el lado del cuadrado");
            double ladoA = Convert::ToDouble(Console::ReadLine());
            lista[i] = new Cuadrado(ladoA);
            break;
        default:
            Console::WriteLine("Seleccione una opción válida");
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        Console::WriteLine("Figura en "+i+" area "+lista[i]->area());
        Console::WriteLine("Figura en " + i + " perímetro " + lista[i]->perimetro());
    }

    Console::ReadKey();
    return 0;
}

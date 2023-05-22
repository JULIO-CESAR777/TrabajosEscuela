// 22_05_2023-Punteros-Apunte.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>

int main()
{
    system("pause");
    system("CLS");

    Sleep(100);

    int edad = 0;
    int* apuntador = &edad;
        
    std::cout << "El valor de la edad: " << edad << std::endl;

    std::cout << "El valor de la direccion puntero: " <<apuntador <<std::endl;

    std::cout << "El valor de la variable apuntada: " << *apuntador << std::endl;

    std::cout << "El valor de la direccion apuntada: " << &apuntador << std::endl;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

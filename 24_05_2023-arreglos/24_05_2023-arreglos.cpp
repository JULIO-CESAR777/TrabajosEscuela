// 24_05_2023-arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <string>

int main()
{
    //pARA CREAR ARREGLOS DINAMICOS necesitamos memoria no estatica.
    //Esto se logra un con punterois.
    //Creamos la variable puntro y la inicializamos en NULL
    std::string* titulos = NULL;
    std::string* autores = NULL;
    std::string libros [10]; 
    
    //Memoria estatica
    int size;
    std::cout << "Cuantas pelis quieres registrar?" << std::endl;
    std::cin >> size;
    
    //crear arreglos dinamicos
    titulos = new std::string[size];
    autores = new std::string[size];

    //Recuerda siempre destruir la memoria dinamica
    delete[]titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;

    //Ahora solicita la informacion
    for (int i = 0; i < size; i++)
    {
        std::cout << "Titulo " << i << "\n";
        getline(std::cin, titulos[i]);
    }
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

// 24_05_2023- 018 Matriz dinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int numfilas;
    int numcolumnas;
    
    std::string* filas = NULL;
    std::string* columnas = NULL;
    
    int mat[10][10];

    std::cout << "Cuantas filas quieres registrar?" << std::endl;
 
    std::cin >> numfilas;

    std::cout << "Cuantas columnas quieres registrar?" << std::endl;
    std::cin >> numcolumnas;
    
    filas = new std::string [numfilas];
    columnas = new std::string [numcolumnas];

    if (numcolumnas > 3 || numfilas > 3)
    {
        for (int i = 0; i < numfilas; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < numcolumnas; j++) //ciclo para acceder columnas
            {

                mat[i][j] = rand() % (10);


            }
        }
        for (int i = 0; i < numfilas; i++)
        {
            for (int j = 0; j < numcolumnas; j++)
            {
                std::cout << j + 1 << ".- " << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        int numeros = 1;
        for (int i = 0; i < numfilas; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < numcolumnas; j++) //ciclo para acceder columnas
            {


                std::cout << "Ingresa el numero " <<numeros <<" de fila " << i + 1 << std::endl;
                std::cin >> mat[i][j];

                numeros = numeros + 1;
                if (numeros > numcolumnas)
                {
                    numeros = 1;
                }
            }
        }
        for (int i = 0; i < numfilas; i++)
        {
            for (int j = 0; j < numcolumnas; j++)
            {
                std::cout << j + 1 << ".- " << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
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

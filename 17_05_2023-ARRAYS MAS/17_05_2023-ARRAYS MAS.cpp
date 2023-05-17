// 17_05_2023-ARRAYS MAS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int edades[5][7];
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "Filas: " << filas << std::endl;
    int columnas = (sizeof(edades)[0]) / sizeof(edades[0][0]);
    std::cout << "Columnas:" << columnas <<std::endl;

    std::cout << sizeof(edades) << std::endl;
    std::cout << sizeof(edades)[0] << std::endl;
    std::cout << sizeof(edades[0][0]) << std::endl;
    
    //imprimir apendice de cada sizeof
    //Sizeof edades, edades[], edades [][]
    int mat[3][3];

    for (int i = 0; i < 3; i++) //ciclo para acceder filas
    {
        for (int j = 0; j < 3; j++) //ciclo para acceder columnas
        {

            mat[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
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

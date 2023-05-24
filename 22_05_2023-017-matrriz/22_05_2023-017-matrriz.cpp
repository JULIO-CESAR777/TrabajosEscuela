// 22_05_2023-017-matrriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    
    int mat[10][10];
    int opc = 1;
    int opc2 = 1;
    
    std::cout << "De cuanto quieres la tablita de numeros randoms? 1)3x3  2)5x5 3)10x10" << std::endl;
    std::cin >> opc;
    switch (opc)
    {
    case 1:

        for (int i = 0; i < 3; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 3; j++) //ciclo para acceder columnas
            {

                mat[i][j] = rand() % (10);


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
        break;
    case 2:
        
        for (int i = 0; i < 5; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 5; j++) //ciclo para acceder columnas
            {

                mat[i][j] = rand() % (10);


            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    case 3:
        for (int i = 0; i < 10; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 10; j++) //ciclo para acceder columnas
            {

                mat[i][j] = rand() % (10);


            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    }
    
    
    std::cout << "Ahora haciendo que tu escribas los numeros OOWOWOWWWOWOWWOWO, pos de nuevo que tipo de matriz quieres 1)3x3  2)5x5 3)10x10 " << std::endl;
    std::cin >> opc2;
    switch (opc2)
    {
    case 1:

        for (int i = 0; i < 3; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 3; j++) //ciclo para acceder columnas
            {
                
                std::cout << "El numero de fila " << i + 1 << std::endl;
                std::cin >> mat[i][j];


            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << j + 1 << ".- " << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    case 2:

        for (int i = 0; i < 5; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 5; j++) //ciclo para acceder columnas
            {

                std::cout << "El numero de fila " << i + 1 << std::endl;
                std::cin >> mat[i][j];


            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << j + 1 << ".- " << mat[i][j] << " ";
                 
            }
            std::cout << std::endl;
        }
        break;
    case 3:
        for (int i = 0; i < 10; i++) //ciclo para acceder filas
        {
            for (int j = 0; j < 10; j++) //ciclo para acceder columnas
            {

                std::cout << "El numero de fila " << i + 1 << std::endl;
                std::cin >> mat[i][j];


            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << j + 1 << ".- " << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
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

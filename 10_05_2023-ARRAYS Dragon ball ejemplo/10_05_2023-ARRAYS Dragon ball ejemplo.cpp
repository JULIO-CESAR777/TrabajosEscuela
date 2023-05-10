// 10_05_2023-ARRAYS Dragon ball ejemplo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
int main()
{
    std::string nombre[5] = { "Kokunazo","Vegeta","Picolo","Bilss","Cell" };
    std::string procedencia[5] = { "Saya/humano","Sayayin","Namekian","Dios de las destruccion","Androide" };
    int ki[5] = { 5,4,3,2,1 };

    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Nombre del personaje" << i << ":" << nombre[i] << std::endl;
    }


    std::string nombres[5];
    int edad[5];
    for (int i = 0; i <= 4; i++)
    {

        std::cout << "Hola! Me puedes dar tu nombre y edad?" << std::endl;
        getline(std::cin, nombres[i]);
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

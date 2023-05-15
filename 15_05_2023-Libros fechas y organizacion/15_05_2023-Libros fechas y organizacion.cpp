// 15_05_2023-Libros fechas y organizacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int main()
{
    std::string Libros[5];
    std::string Autor[5];
    int Fecha[5];
    std::string fecha[5];

    std::cout << "Hola Usuario regristra tus libro favoritos WAZAAAAAAAAA\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ingresa el ltitulo del libro" << i + 1 << std::endl;

        if (i > 0)
        {
            std::cin.ignore();
        }

        getline(std::cin, Libros[i]);

        std::cout << "Ingresa el autor del libro" << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        
        std::cout << "Ingresa el la fecha del libro aaaammdd" << i + 1 << std::endl;
       std::cin, fecha[i];
    }
    //  Funcion para mostrar la informacion wazaaaaaaaaaaaaa
    std::cout << "Ya veo tus libros son \n";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".- " << Libros[j] << "\n El autor es: " << Autor[j]  << "\n Publicado el dia " <<Fecha[j]  << std::endl;
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

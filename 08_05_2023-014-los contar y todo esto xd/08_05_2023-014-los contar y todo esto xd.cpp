// 08_05_2023-014-los contar y todo esto xd.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<windows.h>

int main()
{
    int opc = 1;
    bool credito = true;
    int aux = 1;
    std::cout << "Sup bro, vamos a contar del 1 al 1000, que metodo deseas?(realmente ni lo veras pero me obligan a preguntarte, por favor ayudame esto no es un meme\n 1)While \n 2)Do While \n 3)For\n";
    std::cin >> opc;

    switch (opc)
    {
    case 1:
      
        while (credito)
        {
            std::cout << "Va   " <<aux <<std::endl;
            aux = aux + 1;
            if (aux == 1001)
            {
                credito = false;
            }
        }



        break;
    case 2:
        if (aux <= 1000)
        {
            do {
                std::cout << "Quieres continuar?\n 0.- No 1.- si\n";
                std::cin >> credito;
                aux = aux + 1;
                std::cout << "Va   " << aux << std::endl;
            } while (credito);
        }

        break;
    case 3:
        for (int i = 0; i < 1001; i++)  
        {
            std::cout << "El contador va en: " << i << std::endl;
        }


        
        break;
    default:

        std::cout << "Esa no existe che";
        break;
    }
    
    
    
    
   
    
    
    
    std::cout << "Ahora vamos a contar lento uwu jijijija WAZAAAAA";

    credito = true;
    aux = 0;

    while (credito)
    {
        Sleep(1000);
        
        std::cout << "Va   " << aux << std::endl;
        aux = aux + 1;
        if (aux == 1001)
        {
            credito = false;
        }
    }
    
   
    return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

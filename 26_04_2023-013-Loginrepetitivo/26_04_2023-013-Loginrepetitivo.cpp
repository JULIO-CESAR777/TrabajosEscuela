// 26_04_2023-013-Loginrepetitivo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    bool datos = true;
    std::string nameU = "1";
    std::string contraU = "2";
    std::string name;
    std::string contra;
  
    
    




    while (datos)
    {
        std::cout << "Sup bro, bienvenido a Sword Art Online, ingresa tus datos para iniciar sesion!\n";
        std::cout << "Nombre de usuario o correo elecronico \n";
        std::cin >> name ;
        
        std::cout << "Ahora dime tu contraseña\n";
        std::cin >> contra;


        if (name == nameU && contra == contraU)
        {
            std::cout << "Bien hecho bro \ninsertar musica de liSA* \n \n Ahora como lo hiciste bien hay que volverlo a hacer :)\n ";
            std::cout << "Nombre de usuario o correo elecronico \n";
            std::cin >> name;
            std::cout << "Ahora dime tu contraseña\n";
            std::cin >> contra;

            
        }
        else
        {
            std::cout << "Nah bro tu no existes wazaaa" <<std::endl;
            system("pause");
        }
        system("cls");

    }

    


  











    
    ////////////////////////////////////////////
    
}




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

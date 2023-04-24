// 24_04_2023-010LLoginJuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


int main()
{

    std::string primerdato  = "hola";
    std::string contra  = "hola";
    std::cout << "Sup bro, bienvenido a Sword Art Online, ingresa tus datos para iniciar sesion!\n";
    std::cout << "Nombre de usuario o correo elecronico \n";
    std::cin >> primerdato;
    std::cout << "Ahora dime tu contraseña\n";
    std::cin >> contra;
    
    if (primerdato == "crickoso7000" )
    {
        if (contra == "jijijija")
        {
            std::cout << "Bien hecho bro \ninsertar musica de liSA*";
        }
        else
        {
            std::cout << "No bro, ya no te creo";
        }
    }
    else
    {
        if (primerdato == "vegetta777@hotmail.com")
        {
            if (contra == "jijijija")
            {
                std::cout << "Bien hecho bro \n insertar musica de liSA*";
            }
            else
            {
                std::cout << "No bro, ya no te creo";
            }
        }
        else
        {
            std::cout << "Ese nombre de usuario o correo electronico no existe, reintente crack, WAZAAAAAAAAAAAAAAAAAAAAAAAA";
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

// 24_04_2023-011Adivinartema.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//adivinar deporte

#include <iostream>

int main()
{

    int res1 = 1;
    int res11 = 1;
    int res12 = 1;
    int res13 = 1;
    int res21 = 1;
    int res22 = 1;
    int res31 = 1;
    int res32 = 1;
    int res33 = 1;
    int res34 = 1;
    int res35 = 1;
    int res36 = 1;
   

    std::cout << "Wazaaaa, este es un adivinador de deportes (Sal con algo sencillo no con algo que ni el mundo conoce XD)\n";
    std::cout << "Vamos a empezar\n";
    std::cout << "Para responder es asi: 1=Si 2=No\n";
     
    std::cout << "En tu deporte se usa balon? \n";
    std::cin >> res1;

    if (res1 == 1)
    {
        std::cout << "En tu deporte se patea la bola?\n";
        std::cin >> res11;
        if (res11 == 1)
        {
            std::cout << "Tu deporte se jugo el mundial en QATAR?\n";
            std::cin >> res12;
            if (res12 == 1)
            {
                std::cout << "Tu deporte lo juega un tipo guapo llamado messi?\n";
                std::cin >> res13;
                if (res13 == 1)
                {
                    std::cout << "Tu deporte es el futbol WAZAAAA\n";
                }
            }
        }
        else
        {
            std::cout << "Se lanza a un aro con las manos?\n";
            std::cin >> res21;
            if (res21 == 1)
            {
                std::cout << "Lo juega alguien llamado Michael Jordan\n";
                std::cin >> res22;
                if (res22 == 1)
                {
                    std::cout << "Dale bro tu deporte es el basketball\n";
                }
            }
            else
            {
                std::cout << "Se le pega con un bate?\n";
                std::cin >> res31;
                if (res31 == 1)
                {
                    std::cout << "Es el beisbol bro gg ez\n";

                }
                else
                {
                    std::cout << "La tienes que lanzar por arriba de una red?\n";
                    std::cin >> res32;
                    if (res32 == 1)
                    {
                        std::cout << "Dale bro es el voleybol";
                    }
                    else
                    {
                        std::cout << "Se le pega con un palo de golf ? xd\n";
                        std::cin >> res33;
                        if (res33 == 1)
                        {
                            std::cout << "Pos es golf xd";
                        }
                        else
                        {
                            std::cout << "Se juega con una raqueta?\n";
                            std::cin >> res35;

                            if (res35 == 1)
                            {
                                std::cout << "Pos es el tenis xd";
                            }
                            else
                            {

                                std::cout << "Se juega en el agua?\n";

                                std::cin >> res34;

                                if (res34 == 1)

                                {

                                    std::cout << "Es el waterpolo";

                                }
                                else
                                {

                               

                                    std::cout << "Es el rugby";

                                }
                            }
                        }
                    }



                }
            }
        }
    }
    else
    {
        std::cout << "En el deporte se golpean?\n";
        std::cin >> res36;
        if (res36 == 1)
        {
            std::cout << "Es boxeo";
        }
        else
        {
            std::cout << "No pos no se, ya se me acabo el tiempo de hacer el programa, mejor intentalo con deportes con pelotas.";
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

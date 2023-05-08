// 08_05_2023-015-POKEMON.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <time.h>
#include<iostream>

int main()
{
    srand(time(NULL));

    int num = 1;

    std::string nombrepokemon1 = "Pikachu";
    std::string nombrepokemon2 = "Metapod";
    int vida1 = 35;
    int ataque1 = 55;
    int defensa1 = 40;
    int sanacion1 = 10;
    int velocidad = 90;

    int vida2 = 50;
    int ataque2 = 20;
    int defensa2 = 55;
    int sanacion2 = 10;
    int velocidad2 = 30;

    int opc = 1;
    std::string pokemonelegido = "222";


    std::string habilidad = "aña";

    std::cout << "Bienvenido entrenador pokemon, te dare a elegir a 2 pokemones, y pelearas con el contrario. 1)Pikachu 2)Metapod";
    std::cin >> opc;

    if (opc == 1)
    {
        pokemonelegido = "Pikachu";
        habilidad = "Impact trueno";
        int vida1 = 35;
        int ataque1 = 55;
        int defensa1 = 40;
        int sanacion1 = 10;
        int velocidad = 90;
    }
    else
    {
        pokemonelegido = "Metapod";
        habilidad = "Endurecer";
        int vida2 = 50;
        int ataque2 = 20;
        int defensa2 = 55;
        int sanacion2 = 10;
        int velocidad2 = 30;
    }
   
    while (vida1 >= 0 || vida2 >= 0)
    {
        std::cout << "Pos ahora toca pelear owowowowowoowowowo que diras que haga tu " << pokemonelegido << "?\n 1)Ataque \n 2)Habilidad (" << habilidad << ")\n 3)Sanarse (Solamente tiene 3 potis y te sana 30)";

    }

    //generador numero aleatorio 
   
    num = rand() % (3);
    num = num + 1;
    std::cout << num;
    std::cout << num << " ";
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

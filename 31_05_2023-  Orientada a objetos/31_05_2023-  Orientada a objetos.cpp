// 31_05_2023-  Orientada a objetos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

struct Juego_Mesa
{
    std::string Nommbre;
    std::string Autor;
    int num_jug=1;
}Guardados[10];

enum Armas {shorty,knife, shotgun, sniper};
enum Charizar { Envite_Igneo = 150, Vuelo = 80, Terremoto = 100, Lanzallamas = 100 };

int main()
{

    //
    //Juego_Mesa Guardados[10];
    //Guardados[0].Nommbre = "Dodos Riding Dinos";
   // Guardados[0].Autor = "Caravana GameLab";
    //Guardados[0].num_jug = 6;
    //std::cout << Guardados[0].Nommbre << std::endl;
    //std::cout << Guardados[0].Autor << std::endl;
    //std::cout << Guardados[0].num_jug << std::endl;
    //

    Armas Arma1 = shorty;
    std::cout << Arma1 << std::endl;



    Charizar Ataque1 = Envite_Igneo;
    Charizar Ataque2 = Vuelo;
    Charizar Ataque3 = Terremoto;
    Charizar Ataque4 = Lanzallamas;
    
    std::cout << Ataque1 << std::endl;
    std::cout << Ataque2 << std::endl;
    std::cout << Ataque3 << std::endl;
    std::cout << Ataque4 << std::endl;
  


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

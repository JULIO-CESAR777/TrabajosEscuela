// 29_05_2023-Listas Enlazadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo
{
public:
    std::string nombre;
    int vida;
    int ataque;
    int defensa;
    int edad;
    nodo* next;

};

int main()
{
    
    nodo* cabeza = NULL;
    nodo* Cuello = NULL;
    nodo* Pecho = NULL;
    nodo* Abdomen = NULL;
    nodo* Brazos = NULL;
    nodo* Piernas = NULL;
    nodo* Pies = NULL;

   
    cabeza = new nodo();
  
    Cuello = new nodo();
    Pecho = new nodo();
    Abdomen = new nodo();
    Brazos = new nodo();
    Piernas = new nodo();
    Pies = new nodo();

   
    
 
    cabeza->nombre = "Pepito";
    cabeza->edad = 18;
    cabeza->vida = 60;
    cabeza->ataque = 50;
    cabeza->defensa = 40;


    
    
    cabeza->nombre = "Pepito Gonzalez, Estadisticas totales.";
    cabeza->edad = 18;
    cabeza->vida = 75;
    cabeza->ataque = 50;
    cabeza->defensa = 90;
    cabeza->next = Cuello;


    Cuello->nombre = "Cuello";
    Cuello->edad = 18;
    Cuello->vida = 5;
    Cuello->ataque = 5;
    Cuello->defensa = 5;
    Cuello->next = Pecho;

    Pecho->nombre = "Pecho";
    Pecho->edad = 18;
    Pecho->vida = 25;
    Pecho->ataque = 10;
    Pecho->defensa = 35;
    Pecho->next = Abdomen;

    Abdomen->nombre = "Abdomen";
    Abdomen->edad = 18;
    Abdomen->vida = 20;
    Abdomen->ataque = 5;
    Abdomen->defensa = 25;
    Abdomen->next = Brazos;

    Brazos->nombre = "Brazos";
    Brazos->edad = 18;
    Brazos->vida = 10;
    Brazos->ataque = 20;
    Brazos->defensa = 10;
    Brazos->next = Piernas;

    Piernas->nombre = "Piernas";
    Piernas->edad = 18;
    Piernas->vida = 10;
    Piernas->ataque = 5;
    Piernas->defensa = 10;
    Piernas->next = Pies;

    Pies->nombre = "Pies";
    Pies->edad = 18;
    Pies->vida = 5;
    Pies->ataque = 5;
    Pies->defensa = 5;
    Pies->next = NULL;


    //Imprimir la lista enlazada

    while (cabeza != NULL)
    {
        std::cout << std::endl;

        std::cout << "Es el " <<cabeza->nombre << std::endl;
        
        std::cout << "La edad es " << cabeza->edad  << std::endl;     
        std::cout << "La vida es " << cabeza->vida  << std::endl;
        std::cout << "El ataque es " << cabeza->ataque  << std::endl;
        std::cout << "La defensa es " << cabeza->defensa  << std::endl;
        std::cout << std::endl;
        cabeza = cabeza->next;

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

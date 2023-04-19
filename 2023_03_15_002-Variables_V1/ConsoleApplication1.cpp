// 2023_03_15_002_HolaMundo_Variables_Operaciones_Aritmeticos_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Julio Cesar Medellin Gonzalez
// HolaMundo, Variables, Operadores aritmeticos

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    //CON cout comunicar al usuario
    //con \n y std::endl (ele) doy un salto de linea
    std::cout << "Aña y Ji Ji JI ja, \nPAN CAKES" << std::endl;
    // en Visual hay tipos de variables: bool, int, float, char, string
    //sintaxys para nombrar variables
    
    // tipo de variable- nombre de la variable- Inicalizacion
    
    //------------------------------Solo dividir------------------------------------
    //bool es verdadero o falso
    // int es entero
    // float escon decimal
    // char alfa numerico
    bool continuar = true; 
    int vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Julio UwU";
    std::string namertag = "El pepe1";

    // COUT ES ESCRIBIR
    // el << es para sumar textos
    std::cout << "Hola Mr." << nombre << "\nBienvenido al Valhalla " << namertag << "\n\n";

    //-----------------------------------------------------------------------------------------------
    //Operadores Aritmeticos
    // + - * / al cuadrado raiz
    vida = vida - ataque;
    std::cout << "Tu vida restante es: " << vida << std::endl;
    float vida_aux = 0;
    vida_aux = vida - ataque;
    std::cout << "Tu vida auxiliar restante es: " << vida_aux << std::endl;

} 
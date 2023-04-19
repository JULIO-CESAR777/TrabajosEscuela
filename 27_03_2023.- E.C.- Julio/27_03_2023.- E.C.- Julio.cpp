// 27_03_2023.- E.C.- Julio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Repaso de temas In/Out
//Agregaremos sintaxys a las estructuras de contro.

#include <iostream>
#include "string"
using namespace std;
int main()
{

    std::string nombre = "papa";
    char sexo [15] = "papa";
    float peso = 90.55;
    bool preguntahigiene = false;
    float altura = 50.55;
    bool preguntacronica = false;
    bool chucherias = false;
    int meses = 5;
    int comidas = 3;
    std::string apellidos = "aña";
    float IMC = 11;
 
    std::cout << "Hola buenas tardes/dias! " << std::endl;
    std::cout << "Cual es su nombre?  " << std::endl;
    getline(cin, nombre);

    std::cout << "Cuales son sus apellidos? " << std::endl;
    getline(cin, apellidos);

    std::cout << "Oh bienvenid@ " << nombre << " " << apellidos << " Dime, para no ser misogino, que sexo eres? " << std::endl;
    std::cin >> sexo;
    
    std::cout << "Para empezar con el expediente, Cuanto pesas? (En KG porfis) " << std::endl;
    std::cin >> peso;

    std::cout << "Cual es tu altura? (En Metros) " << std::endl;
    std::cin >> altura;

    std::cout << "Hace cuantos meses no vas al medico? " << std::endl;
    std::cin >> meses;

    std::cout << "Cuantas veces comes al dia? " << std::endl;
    std::cin >> comidas;

    std::cout << "Tienes alguna enfermedad cronica? 0)No 1)Si " << std::endl;
    std::cin >> preguntacronica;

    std::cout << "Si has tenido buena higiene? 0)No 1)Si " << std::endl;
    std::cin >> preguntahigiene;

    std::cout << "Comes o tomas muchas chucherias?  0)No 1)Si " << std::endl;
    std::cin >> chucherias;

    IMC = peso / (altura * altura);

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Namas por que me caiste bien te dire tu IMC " << std::endl;
    std::cout << IMC << std::endl;

    std::cout << std::endl;

    std::cout << "Ahora segun tu IMC y la regulacion nacional de la salud estas:... " << std::endl;

    

    if (IMC> 18.5 && IMC< 24.9)
    {
        std::cout << "bien, por tu IMC, eres saludable";
    }

    else;
    {
        if (IMC > 24.91 && IMC < 29.9)
        {
            std::cout << "algo pasadito che";

        }
        else
        {
            std::cout << "obeso UwU ";

        }
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;



    
    

   














}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

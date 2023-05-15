// 22_03_2023-InOut.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Julio Cesar Medellin
//Aprendere a usa bibliotecas
//Reforzar hablar con el usuario
//Recibiremos datos del usuario
// Añadir librerias (la ñ bro ez pici)

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    
    float numero1 = 1;
    float numero2 = 2;

    float suma = 1;
    float resta = 1;
    float multiplicacion = 1;
    float division = 1;

    float angulo = 0;

    std::string nombreshavo = "dw";
    std::string nombrepro = "papa as";

    bool pregunta = false;
    char angulostotales = 50;

    std::cout << "Hola bienvenido aña!\n";

   


    

    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche hiciste un mortal de 360 en una feria turka? 0)No 1) Si" << std::endl;
    //Recibir respuesta del usuario
    //COUT- C OUT- Tipo texto afuera
    //CIN- C IN- Recibir texto
    std::cin >> pregunta;

    std::cin.ignore();

    std::cout << "Ya veo entonces es " << pregunta << " que hiciste un 360 en una feria turka" << std::endl;

     int n_vueltas = 0;

    std::cout << "Cuantos 360 hiciste weonao?????" << std::endl;

    std::cin >> n_vueltas;

    std::cout << "Bro wtf hiciste " << n_vueltas << " vueltas, bro tas loco... lo mea*" << std::endl;

    

    std::cout << "Y a cuantos grados angulares universal lo hiciste weon?(Angulo)" << std::endl;

    std::cin >> angulo;


    std::cout << "Eso es legal? wow que lo hayas hecho a " << angulo << ", epico, insertar emoji de cara piola" << std::endl;

    

    std::cout << "Como llamarias tu truco en una sola palaba?" << std::endl;
    getline(std::cin, nombrepro);
    getline(std::cin, nombrepro);

    std::cout << "Wow bro radical, el " << nombrepro << " es insano, wazaaaaa" << std::endl;


    

    std::cout << "Bro y cual es tu nombre radical de una palabra??" << std::endl;

   getline(std::cin, nombreshavo);


    std::cout << "wow " << nombreshavo << " ese nombre tan radical bro, jijijija, pancakes \n";

    std::cout << "Dime 2 numeros nada mas por que quiero (que sean distintos) \n";
    std::cin >> numero1;
    std::cout << "Dime el otro numero nada mas por que quiero \n";
    std::cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;

    division = numero1 / numero2;

    if (numero1 > numero2)
    {
        std::cout << "El digito mayor es " << numero1;

    }
    else
    {
        std::cout << "El digito mayor es " << numero2;
    }
    std::cout << "Tu suma es: " << suma <<std::endl;
    std::cout << "Tu resta es : " << resta << std::endl;
    std::cout << "Tu division es: " << suma << std::endl;




    angulostotales = (n_vueltas * angulo);
    std::cout << "Hiciste" << angulostotales << "grados celcius bro WAZAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";





}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
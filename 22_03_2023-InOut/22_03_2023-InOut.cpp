// 22_03_2023-InOut.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Julio Cesar Medellin
//Aprendere a usa bibliotecas
//Reforzar hablar con el usuario
//Recibiremos datos del usuario
// Añadir librerias (la ñ bro ez pici)

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Hola bienvenido aña!\n";


    bool pregunta = false;
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche hiciste un mortal de 360 en una feria turka? 0)No 1) Si" << std::endl;
    //Recibir respuesta del usuario
    //COUT- C OUT- Tipo texto afuera
    //CIN- C IN- Recibir texto
    std::cin >> pregunta;

    std::cout << "Ya veo entonces es " << pregunta << " que hiciste un 360 en una feria turka" <<

        std::endl;

    int n_vueltas = 0;

    std::cout << "Cuantos 360 hiciste weonao?????" << std::endl;

    std::cin >> n_vueltas;

    std::cout << "Bro wtf hiciste " << n_vueltas << " vueltas, bro tas loco... lo mea*" << std::endl;

    float angulo = 0;

    std::cout << "Y a cuantos grados angulares universal lo hiciste weon?(Angulo)" << std::endl;

    std::cin >> angulo;


    std::cout << "Eso es legal? wow que lo hayas hecho a " << angulo << ", epico, insertar emoji de cara piola" << std::endl;

    char nombrepro[15] = "papa as";

    std::cout << "Como llamarias tu truco en una sola palaba?" << std::endl;
    std::cin >> nombrepro;

    std::cout << "Wow bro radical, el " << nombrepro << " es insano, wazaaaaa" << std::endl;


    std::string nombreshavo = "aña";

    std::cout << "Bro y cual es tu nombre?" << std::endl;

    std::cin >> nombreshavo;


    std::cout << "wow " << nombreshavo << " ese nombre tan radical bro, aña jijijija, pancakes";

     


    



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

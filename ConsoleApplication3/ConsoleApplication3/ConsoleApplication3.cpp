// 17-04-2023_Practica7-Pelea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Vamo a darle al sistema OwO
// Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//1. - Royal Rumble
//2. - Eliminatoria directa
//3. - Grupos, semifinal y final

#include <iostream>

int main()
{
    int peleadorestotal = 10;

    int peleadores = 15;
    int grupo = 0;
    int peleas = 1;
    int duelo1 = 1;
    bool peleasn = true;
    int cruces = 1;
    int grupos = 0;
    int tilin = 1;
    int pelexgrup = 1;

    int fase = 1;
    int extras = 1;
    int eliminaciondirecta = 1;
    int sobrantes = 1;

    int opc = 0;
    std::cout << "Hola shavo este sera cuantas peleas habra dependiendo el tipo de batalla que eligas y peleadores.\n" << std::endl;

    std::cout << "Cuantos peleadores quieres pponer a pelear? Mayor a 4 y menor a 16 \n";
    std::cin >> peleadores;

    std::cout << "Presiona una tecla del 1 al 3 para seleccionar tu tipo de batalla\n" << std::endl;

    std::cout << "1= Royal Rumble \n" << std::endl;
    std::cout << "2= Eliminacion Directa \n" << std::endl;
    std::cout << "3= Grupos, semifinal y final\n" << std::endl;
    std::cin >> opc;

    switch (opc)
    {
    case 1:
        std::cout << "Bienvenido bro, esta sera una Royal Rumble!\n" << std::endl;

        while (peleasn)
        {
            std::cout << "Va " << peleas << " Peleas " << " con " << peleadores << " peleadores" << std::endl;;
            peleadorestotal += peleadores;
            peleadores = peleadores - 1;
            peleas = peleas + 1;

            if (peleadores == 0)
            {
                peleasn = false;
            }
        }
        peleas = peleas - 1;
        std::cout << "Fueron al final " << peleas << " peledores OwO y quedo 1 " << " ganador con enfrentamientos de " << peleadorestotal << " peleas" << std::endl;



        break;


    case 2:
        std::cout << "Entonces será por eliminación directa\n" << std::endl;
        for (int n = 1; n < peleadores; ) {
            n = n * 2;
            tilin = n;
        }
        if (tilin == peleadores)
        {
            eliminaciondirecta = (tilin - 1);
            std::cout << "Entonces el número de batallas será de " << eliminaciondirecta << " batallas." << std::endl;
        }
        else
        {
            duelo1 = (tilin / 2);
            eliminaciondirecta = (peleadores - 1);
            std::cout << "Entonces el número de batallas será de " << eliminaciondirecta << " batallas. Aunque recomendaría hacerla de " << duelo1 << " peleadores." << std::endl;
        }
        break;

    case 3:


        if (peleadores < 4) {
            std::cout << "Se necesitan mas de 4 che, por algo es por grupos, si no no seria por grupo, JiJiJiJa";
        }
        else {
            cruces = (peleadores / 4);
            for (int g = 1; g < cruces; g++) {
                grupo = (cruces - g) + grupo;
            }
            fase = grupo * 4;
            sobrantes = peleadores % 4;
            extras = sobrantes * cruces;
            peleas = fase + extras + 3;


            std::cout << "Entonces será por grupos, semifinal y final" << std::endl;
            std::cout << "Entonces el número de batallas será de " << peleas << " enfrentamientos." << std::endl;
            if (sobrantes == 0)
            {
                std::cout << "Los grupos serían de " << cruces << " peleadores. Los mejores de cada grupo pasan a las semifinales :)";
            }
            else
            {
                std::cout << "Los grupos serían de " << cruces << " peleadores. Aunque habría " << sobrantes << " grupos con un peleador más.";
            }
        }

        break;




    default:
        std::cout << "Te comiste payaso no??\n";
        break;
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
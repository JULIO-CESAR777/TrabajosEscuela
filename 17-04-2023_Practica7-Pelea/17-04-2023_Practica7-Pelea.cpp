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

    int peleas =1;

    bool peleasn = true;

    int grupos = 1;

    int pelexgrup = 1;

    int opc = 0;
    std::cout << "Hola shavo este sera cuantas peleas habra dependiendo el tipo de batalla que eligas y peleadores.\n" << std::endl;

    std::cout << "Cuantos peleadores quieres pponer a pelear?  \n" << std::endl;
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
            peleadorestotal +=  peleadores;
            peleadores = peleadores - 1;
                peleas = peleas + 1;
            
            if (peleadores == 0)
            {
                peleasn = false;
            }
        }
        peleas = peleas - 1;
        std::cout << "Fueron al final " << peleas << " peleas OwO y quedo 1 " << " ganador con enfrentamientos de " <<peleadorestotal <<" personas" << std::endl;

         

        break;

        
    case 2:
        std::cout << "Bienvenido bro, esta sera una etapa de 1 vs 1 como tipico torneo de eliminacion directa!\n" << std::endl;


        while (peleasn)
        {
            std::cout << "Va " << peleas << " Peleas \n";
            peleadores = peleadores / 2;
            peleas = peleas + 1;

            if (peleadores <= 1)
            {
                peleasn = false;
            }
        }

        peleas = peleas - 1;
        std::cout << "Fueron en total " << peleas << " peleas OwO";

        break;

    case 3:
        
        std::cout << "Bienvenido bro, esta sera una de Grupos, semifinal y final!\n" << std::endl;
        std::cout << "Sera en grupos de 2 \n" << std::endl;      
        
        pelexgrup = peleadores / 2;

        while (peleasn)
        {
            std::cout << "Va " << peleas << " Peleas con " <<pelexgrup <<" peleadores " << std::endl;
            
            peleadorestotal += peleadores;
            pelexgrup = pelexgrup - 1;
            peleas = peleas + 1;

            if (pelexgrup == 0)
            {
                peleasn = false;
            }
        }


        ////////// SE ME CANSO EL CERERBRO ASI LO DEJO  :(:(76   (&(%&/(%/(%&)))) CREO QUE ESTUVI BIEN YA QUE :(
      
        std::cout << std::endl;
        peleas = peleas - 1;

        std::cout << "Habra " << peleas << " peleas en grupo  " << std::endl;

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

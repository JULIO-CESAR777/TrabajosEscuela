// 26_04_2023-012-Ciclo infinitoycontar100.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{

    int listo = 1;
    int quierejugar = 1;
    bool vida = true;
    std::cout << "Quieres jugar? 0)si 1)no\n";
    std::cin >> quierejugar;
    std::string res1 = "aña";
    int vidas = 3;
    bool decision = true;
    if (quierejugar == 0)
    {
        
        while (vida)
        {



            if (vidas > 0)
            {
                while (vidas > 0)
                {
                    std::cout << "Apreta le tecla v para perder 1 vida owo ";
                    std::cin >> res1;
                    if (res1 == "v")
                    {
                        vidas = vidas - 1;
                        std::cout << "Tienes " << vidas;  std::cout << " Vidas ";
                        decision = true;

                    }
                }
            }


            while (decision)
            {
                std::cout << "Quieres seguir jugando? 0)si 1)no \n";
                std::cin >> quierejugar;
                if (quierejugar == 0)
                {
                    decision = false;
                    vidas = vidas + 3;
                }
                else
                {
                    decision = false;
                    vida = false;
                }
            }
        }

        std::cout << "Bien, ahora vamos a contar hasta el 100,listo? 0)si 1)no ";
        std::cin >> listo;
        if (listo == 0)
        {

            for (int i = 0; i < 101; i++) //i++ significa avance de 1 en 1. 

            {

                std::cout << "El contador va en: " << i << std::endl;

            }
        }
        else
        {
            std::cout << "Ta bien";
        }


             
           
        
    }   
    else
    {
        std::cout << "Ta bien";
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

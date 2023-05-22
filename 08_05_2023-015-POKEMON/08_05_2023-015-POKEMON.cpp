// 08_05_2023-015-POKEMON.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdlib.h>
#include <time.h>
#include<iostream>
#include <conio.h>
#include <windows.h>

int main()
{
    srand(time(NULL));

    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);



    int num = 1;

    bool player = true;
    bool ia = true;
    std::string nombrepokemon1 = "Pikachu";
    std::string nombrepokemon2 = "Metapod";
    int decision = 1;
    int vida1 = 35;
    int ataque1 = 50;
    int defensa1 = 20;
    int sanacion1 = 10;
    int velocidad = 90;
    int vidarestante1 = 1;
    int pocionesvida1 = 3;

    int pocionesvida2 = 3;
    int vidarestante2 = 1;
    int vida2 = 50;
    int ataque2 =35;
    int defensa2 = 35;
    int sanacion2 = 10;
    int velocidad2 = 30;

    int opc = 1;
    std::string pokemonelegido = "222";


    std::string habilidad = "aña";

    
     
    std::cout << "        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠆⠀⠀       \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠔⠒⠉⠉⠁⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠗⠋⠁⠀⠀⠀⠀⠀⠀⣸⠁⠀⠀⠀⢀⣀⣀⠤⠴⠒⠚⠉⠁⠀⠈⠑⢤⡀⢠⠀⠀⠀⠀⠀⠁⠀ \n";
    std::cout << "           ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣤⠤⢤⡧⠤⠖⠒⠊⠉⠉⠉⠁⠈⠁⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠉⢺⠀⠀⠀⠀⠀⠈⡀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠘⢆⣠⣷⣤⣤⡀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢄⡀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠃ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⣴⡿⠛⢉⣉⡛⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠈⠑⠢⢤⣄⠀⡇⠀⠀⠀⠀⠀⢰ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢸⠏⠀⣴⣿⠁⢹⡆⠹⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⡿⠷⢶⣦⠊⢈⠽⡇⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢰⠃⢹⣶⠋⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢡⠖⠑⣆⠹⣏⠁⠀⡇⠀⠀⠀⠀⠀⠀ \n",
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠸⡄⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢀⣿⠃⣸⠀⠈⠀⠀⡇⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡀⠀⠀⠈⠓⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠘⠋⢁⡇⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢄⣠⠞⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⡀⠀⠀⠀⢠⠀⠀⠀⠀⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⠀⡇⠀⠀⠀⢸⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⠇⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⢇⠀⠀⠀⠹⡀⠀⠀⠘⡆⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⢸⠀⠀⠀⠀⠀⠀⠀⠀ \n";
    std::cout << "            ⠸⡄⠀⠀⠀⠉⠒⠤⣄⣃⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠃⡇⠀⠀⠀⡇⠀⠀⠀⠀ \n",
    std::cout << "            ⠀⠳⡀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠓⠒⢶⠦⠗⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏⢸⠁⠀⠀⠸⠁⠀⠀⡠⠀ \n";
    std::cout << "            ⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠛⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠔⠁⠀⡏⠀⠀⢀⣇⣤⠴⠎⣁⣀ \n";
    std::cout << "            ⠀⠀⠀⠀⠑⣄⣀⣀⡀⠀⠀⠀⠀⢀⣏⣀⡀⠀⢙⡗⠢⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠔⠊⠁⠀⠀⠀⠘⠓⠒⡾⠉⠀⢹⠀⠀⠀⠀ \n";
    std::cout << "            ⠀⠀⠀⢀⡜⠁⠀⠀⠈⠳⡄⠀⠀⡜⠉⠀⠉⢲⣸⠇⠀⠀⠈⠙⠒⠤⢤⣤⠔⠚⠉⠀⢸⡄⠀⠀⠀⠀⠀⠀⢀⡜⠁⠀⠀⠘⣆⣀⡀⠀ \n";
    std::cout << "            ⠀⠀⠀⢸⡁⠀⠀⠀⠀⠀⠘⣆⠞⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⢰⣇⡀⠀⣰⠊⠉⠙⢆⠀⠀⣠⠖⠊⠉⠙⠢⡀⠀⠀⢻⣿⣿⣿ \n";
    std::cout << "            ⠀⠀⠀⢰⢷⡀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⢰⡟⠀⠀⠀⠀⠀⠀⠀⣾⠀⠙⣦⡇⠀⠀⠀⠈⠆⠊⠁⠀⠀⠀⠀⠀⡇⠀⠀⠈⣿⣿⣿\n";
    std::cout << "            ⠀⠀⢠⠋⠙⢿⠢⣄⠀⠀⠀⠀⠁⠀⠀⠀⢠⠏⢱⣄⠀⠀⠀⢀⣀⠴⡟⢢⣀⠈⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠀⠸⣿⡿ \n";
    std::cout << "            ⠀⠀⠃⠀⠀⠀⠱⣄⣙⣦⣀⡀⠀⠀⠀⡰⠿⣴⡏⠈⢻⣏⣉⠉⠀⠀⠁⠀⣹⠀⠀⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⢿⡟ \n";
    std::cout << "            ⠀⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠓⢄⣠⠇⢀⡟⠀⠀⠘⠓⢄⡑⠀⠀⠚⠉⡏⡰⠋⠀⠀⠙⢦⣄⡀⠐⠊⠁⠙⠆⠀⠀⠀⠀⠀⠀⠈⣿ \n";
   

    std::cout << "Bienvenido entrenador pokemon, te dare a elegir a 2 pokemones, y pelearas con el contrario. 1)Pikachu 2)Metapod \n";
    std::cin >> opc;

    if (opc == 1)
    {
        pokemonelegido = "Pikachu";
        habilidad = "Potenciacion UwU";
       
    }
    else
    {
        pokemonelegido = "Metapod";
        habilidad = "Endurecer";
      
    }
   
    /////agregar algo y repararlo checarlo

    if (opc == 1)
    {
        while (vida1 > 0 && vida2 > 0)
        {

            while (player)
            {

                std::cout << "⠸⣷⣦⠤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⠀⠀\n";
                std::cout << "⠀⠙⣿⡄⠈⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠔⠊⠉⣿⡿⠁⠀⠀⠀\n";
                std::cout << "⠀⠀⠈⠣⡀⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠊⠁⠀⠀⣰⠟⠀⠀⠀⣀⣀\n";
                std::cout << "⠀⠀⠀⠀⠈⠢⣄⠀⡈⠒⠊⠉⠁⠀⠈⠉⠑⠚⠀⠀⣀⠔⢊⣠⠤⠒⠊⠉⠀⡜\n";
                std::cout << "⠀⠀⠀⠀⠀⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠩⡔⠊⠁⠀⠀⠀⠀⠀⠀⠇\n";
                std::cout << "    ⠀⡇⢠⡤⢄⠀⠀⠀⠀⠀⡠⢤⣄⠀⡇⠀⠀⠀⠀⠀⠀⠀⢰⠀\n";
                std::cout << "    ⢀⠇⠹⠿⠟⠀⠀⠤⠀⠀⠻⠿⠟⠀⣇⠀⠀⡀⠠⠄⠒⠊⠁⠀\n";
                std::cout << "    ⢸⣿⣿⡆⠀⠰⠤⠖⠦⠴⠀⢀⣶⣿⣿⠀⠙⢄⠀⠀⠀⠀⠀⠀\n";
                std::cout << "    ⠀⢻⣿⠃⠀⠀⠀⠀⠀⠀⠀⠈⠿⡿⠛⢄⠀⠀⠱⣄⠀⠀⠀⠀\n";
                std::cout << "      ⢸⠈⠓⠦⠀⣀⣀⣀⠀⡠⠴⠊⠹⡞⣁⠤⠒⠉⠀⠀⠀⠀⠀\n";
                std::cout << "     ⠀⣠⠃⠀⠀⠀⠀⡌⠉⠉⡤⠀⠀⠀⠀⢻⠿⠆⠀⠀⠀⠀⠀⠀⠀\n";
                std::cout << "     ⠰⠁⡀⠀⠀⠀⠀⢸⠀⢰⠃⠀⠀⠀⢠⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀\n";
                std::cout << "  ⠀⢶⣗⠧⡀⢳⠀⠀⠀⠀⢸⣀⣸⠀⠀⠀⢀⡜⠀⣸⢤⣶⠀⠀⠀⠀⠀⠀\n";
                std::cout << "   ⠈⠻⣿⣦⣈⣧⡀⠀⠀⢸⣿⣿⠀⠀⢀⣼⡀⣨⣿⡿⠁⠀⠀⠀⠀⠀⠀\n";
                std::cout << "     ⠈⠻⠿⠿⠓⠄⠤⠘⠉⠙⠤⢀⠾⠿⣿⠟⠋ \n";
                
                std::cout <<std::endl;

                std::cout << "Pos ahora toca pelear owowowowowoowowowo que diras que haga tu " << pokemonelegido << "?\n 1)Ataque \n 2)Habilidad (" << habilidad << ")\n 3)Sanarse (Solamente tiene 3 potis y te sana 15)\n 4)rendirte xd\n";
                std::cin >> decision;

                std::cout << " \n";

                switch (decision)
                {
                case 1:

                    vidarestante2 = ataque1 - defensa2;
                    
                    if (vidarestante2 < 0)
                    {
                        std::cout << "El ataque de tu pokemon no fue efectivo gracias a la defensa del enemigo, su vida restante es= " << vida2 << std::endl;
                    }
                    else
                    {
                        vida2 = vida2 - vidarestante2;
                        std::cout << "Tu pokemon hace un ataque basico y se queda a" << vida2 << "de vida \n";
                        
                    }
                    if (vida1 < 0 && vida2 <
                        0)
                    {
                        goto stop;
                    }

                    player = false;
                    ia = true;
                    break;
                case 2:
                    ataque1 = ataque1 + 7;
                    std::cout << "Tu pokemon se fortalece y gana 7 puntos de ataque, ahora tienes= " << ataque1 << " puntos de ataque \n";

                    player = false;
                    ia = true;
                    break;
                case 3:

                    pocionesvida1 = pocionesvida1 - 1;
                    if (pocionesvida1 < 0)
                    {
                        std::cout << " ya no tienes potis crack\n";
                    }
                    else
                    {
                        vida1 = vida1 + 15;

                        if (vida1 > 35)
                        {

                            std::cout << "Te tomas una poti y recuperas 15 puntos de vida, vida actual= 35 \n";
                            vida1 = 35;

                        }
                        else
                        {
                            std::cout << "Te tomas una poti y recuperas 15 puntos de vida, vida actual=" << vida1 << std::endl;
                        }
                    }
                    player = false;
                    ia = true;
                    break;
                case 4:

                    std::cout << "Pos te rindes xd";
                    exit(-1);
                default:
                    std::cout << "⠄⠄⠄⢰⣧⣼⣯⠄⣸⣠⣶⣶⣦⣾⠄⠄⠄⠄⡀⠄⢀⣿⣿⠄⠄⠄⢸⡇⠄⠄\n";
                    std::cout << "⠄⠄⠄⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄⠄⠸⢀⣿⠄\n";
                    std::cout << "⠄⠄⢀⡋⣡⣴⣶⣶⡀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣴⣿⣿⣿⢃⣤⣄⣀⣥⣿⣿⠄\n";
                    std::cout << "⠄⠄⢸⣇⠻⣿⣿⣿⣧⣀⢀⣠⡌⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⠄\n";
                    std::cout << "⠄⢀⢸⣿⣷⣤⣤⣤⣬⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⣿⣿⡍⠄⠄⢀⣤⣄⠉⠋⣰\n";
                    std::cout << "⠄⣼⣖⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⢇⣿⣿⡷⠶⠶⢿⣿⣿⠇⢀⣤\n";
                    std::cout << "⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣷⣶⣥⣴⣿⡗\n";
                    std::cout << "⢀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠄\n";
                    std::cout << "⢸⣿⣦⣌⣛⣻⣿⣿⣧⠙⠛⠛⡭⠅⠒⠦⠭⣭⡻⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠄\n";
                    std::cout << "⠘⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄⠄⠄⠹⠈⢋⣽⣿⣿⣿⣿⣵⣾⠃⠄\n";
                    std::cout << "⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⠄⣴⣿⣶⣄⠄⣴⣶⠄⢀⣾⣿⣿⣿⣿⣿⣿⠃⠄⠄\n";
                    std::cout << "⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⠄⣿⣿⡀⣾⣿⣿⣿⣿⣛⠛⠁⠄⠄⠄\n";
                    std::cout << "⠄⠄⠄⠄⠈⠛⢿⣿⣿⣿⠁⠞⢿⣿⣿⡄⢿⣿⡇⣸⣿⣿⠿⠛⠁⠄⠄⠄⠄⠄\n";
                    std::cout << "⠄⠄⠄⠄⠄⠄⠄⠉⠻⣿⣿⣾⣦⡙⠻⣷⣾⣿⠃⠿⠋⠁⠄⠄⠄⠄⠄⢀⣠⣴\n";
                    std::cout << "⣿⣿⣿⣶⣶⣮⣥⣒⠲⢮⣝⡿⣿⣿⡆⣿⡿⠃⠄⠄⠄⠄⠄⠄⠄⣠⣴⣿⣿⣿.\n";
                    break;
                }

            }
            while (ia)
            {
                num = rand() % (4);
                num = num + 1;



                switch (num)
                {
                case 1:

                    vidarestante1 = ataque2 - defensa1;
                   
                    if (vidarestante1 < 0)
                    {
                        std::cout << "El ataque del pokemon enemigo no fue efectivo gracias a tu defensa, tu vida restante sigue siendo= " << vida1 << std::endl;
                    }
                    else
                    {
                        vida1 = vida1 - vidarestante1;
                        std::cout << "El pokemon enemigo hace un ataque basico y te quedas a" << vida1 << "de vida \n \n \n";
                    }
                    if (vida1 < 0 && vida2 < 0)
                    {
                        goto stop;
                    }
                    player = true;
                    ia = false;
                    break;
                case 2:
                    defensa2 = defensa2 + 10;
                    std::cout << "El pokemon enemigo se fortalece y gana 10 puntos de defensa, ahora tiene= " << defensa2 << " puntos de defensa \n \n \n";

                    player = true;
                    ia = false;
                    break;
                case 3:
                    pocionesvida2 = pocionesvida2 - 1;
                    if (pocionesvida2 < 0)
                    {
                        std::cout << " ya no tiene potis el crack ta bien sonso JiJiJija\n \n \n";
                    }
                    else
                    {
                        vida2 = vida2 + 15;
                        if (vida2 > 50)
                        {

                            std::cout << "El pokemon enemigo se toma una poti y recupera 15 puntos de vida, vida actual= 50 \n \n \n";
                            vida2 = 50;

                        }
                        else
                        {
                            std::cout << "El pokemon enemigo se toma una poti y recupera 15 puntos de vida, vida actual=" << vida2 << std::endl;
                        }
                    }
                    player = true;
                    ia = false;
                    break;


                }
            }
        } 
    }
    else
    {
        while (vida1 > 0 && vida2 > 0)
        {

            while (player)
            {
                std::cout << "Pos ahora toca pelear owowowowowoowowowo que diras que haga tu " << pokemonelegido << "?\n 1)Ataque \n 2)Habilidad (" << habilidad << ")\n 3)Sanarse (Solamente tiene 3 potis y te sana 15)\n 4)rendirte xd\n";
                std::cin >> decision;
                switch (decision)
                {
                case 1:

                    vidarestante1 = ataque2 - defensa1;
                   
                    if (vidarestante1 < 0)
                    {
                        std::cout << "Elataque de tu pokemon no fue efectivo gracias a la defensa del enemigo, su vida restante es= " << vida1 << std::endl;
                    }
                    else
                    {
                        vida1 = vida1 - vidarestante1;
                        std::cout << "Tu pokemon hace un ataque basico y se queda a" << vida1 << "de vida \n \n \n";
                    }
                    if (vida1 < 0 && vida2 < 0)
                    {
                        goto stop;
                    }
                    player = false;
                    ia = true;
                    break;
                case 2:
                    defensa2 = defensa2 + 10;
                    std::cout << "Tu pokemon se fortalece y gana 10 puntos de defensa, ahora tiene= " << defensa2 << " puntos de defensa \n \n \n";

                    player = false;
                    ia = true;
                    break;
                case 3:
                    pocionesvida2 = pocionesvida2 - 1;
                    if (pocionesvida2 < 0)
                    {
                        std::cout << " ya no tienes potis crack\n \n \n";
                    }
                    else
                    {
                        vida2 = vida2 + 15;
                        if (vida2 > 50)
                        {

                            std::cout << "Te tomas una poti y recuperas 15 puntos de vida, vida actual= 50 \n \n \n";
                            vida2 = 50;

                        }
                        else
                        {
                            std::cout << "Te tomas una poti y recuperas 15 puntos de vida, vida actual=" << vida2 << std::endl;
                        }
                    }
                    player = false;
                    ia = true;
                    break;
                case 4:

                    std::cout << "Pos te rindes xd";
                    exit(-1);
                default:
                    std::cout << "⠄⠄⠄⢰⣧⣼⣯⠄⣸⣠⣶⣶⣦⣾⠄⠄⠄⠄⡀⠄⢀⣿⣿⠄⠄⠄⢸⡇⠄⠄\n";
                    std::cout << "⠄⠄⠄⣾⣿⠿⠿⠶⠿⢿⣿⣿⣿⣿⣦⣤⣄⢀⡅⢠⣾⣛⡉⠄⠄⠄⠸⢀⣿⠄\n";
                    std::cout << "⠄⠄⢀⡋⣡⣴⣶⣶⡀⠄⠄⠙⢿⣿⣿⣿⣿⣿⣴⣿⣿⣿⢃⣤⣄⣀⣥⣿⣿⠄\n";
                    std::cout << "⠄⠄⢸⣇⠻⣿⣿⣿⣧⣀⢀⣠⡌⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⠄\n";
                    std::cout << "⠄⢀⢸⣿⣷⣤⣤⣤⣬⣙⣛⢿⣿⣿⣿⣿⣿⣿⡿⣿⣿⡍⠄⠄⢀⣤⣄⠉⠋⣰\n";
                    std::cout << "⠄⣼⣖⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⢇⣿⣿⡷⠶⠶⢿⣿⣿⠇⢀⣤\n";
                    std::cout << "⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣷⣶⣥⣴⣿⡗\n";
                    std::cout << "⢀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠄\n";
                    std::cout << "⢸⣿⣦⣌⣛⣻⣿⣿⣧⠙⠛⠛⡭⠅⠒⠦⠭⣭⡻⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠄\n";
                    std::cout << "⠘⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄⠄⠄⠹⠈⢋⣽⣿⣿⣿⣿⣵⣾⠃⠄\n";
                    std::cout << "⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⠄⣴⣿⣶⣄⠄⣴⣶⠄⢀⣾⣿⣿⣿⣿⣿⣿⠃⠄⠄\n";
                    std::cout << "⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⠄⣿⣿⡀⣾⣿⣿⣿⣿⣛⠛⠁⠄⠄⠄\n";
                    std::cout << "⠄⠄⠄⠄⠈⠛⢿⣿⣿⣿⠁⠞⢿⣿⣿⡄⢿⣿⡇⣸⣿⣿⠿⠛⠁⠄⠄⠄⠄⠄\n";
                    std::cout << "⠄⠄⠄⠄⠄⠄⠄⠉⠻⣿⣿⣾⣦⡙⠻⣷⣾⣿⠃⠿⠋⠁⠄⠄⠄⠄⠄⢀⣠⣴\n";
                    std::cout << "⣿⣿⣿⣶⣶⣮⣥⣒⠲⢮⣝⡿⣿⣿⡆⣿⡿⠃⠄⠄⠄⠄⠄⠄⠄⣠⣴⣿⣿⣿.\n";
                    break;

                }

            }
            while (ia)
            {
                num = rand() % (4);
                num = num + 1;



                switch (num)
                {
                case 1:

                    vidarestante2 = ataque1 - defensa2;
                   
                    if (vidarestante2 < 0)
                    {
                        std::cout << "El ataque del pokemon enemigo no fue efectivo gracias a tu defensa, tu vida restante sigue siendo= " << vida2 << std::endl;
                    }
                    else
                    {
                        vida2 = vida2 - vidarestante2;
                        std::cout << "El pokemon enemigo hace un ataque basico y te quedas a" << vida2 << "de vida \n \n \n ";
                    }
                    if (vida1 < 0 && vida2 < 0)
                    {
                        goto stop;
                    }
                    player = true;
                    ia = false;
                    break;
                case 2:
                    
                    ataque1 = ataque1 + 7;
                    std::cout << "El pokemon enemigo se fortalece y gana 7 puntos de ataque, ahora tiene= " << ataque1 << " puntos de ataque \n \n \n";

                    player = true;
                    ia = false;
                    break;
                case 3:
                    pocionesvida1 = pocionesvida1 - 1;
                    if (pocionesvida1 < 0)
                    {
                        std::cout << " ya no tiene potis el crack\n \n \n";
                    }
                    else
                    {
                        vida1 = vida1 + 15;
                        if (vida2 >= 35)
                        {

                            std::cout << "El pokemon enemigo se toma una poti y recupera 15 puntos de vida, vida actual= 35 \n \n \n";
                            vida1 = 35;

                        }
                        else
                        {
                            std::cout << "El pokemon enemigo se toma una poti y recupera 15 puntos de vida, vida actual=" << vida1 << std::endl << std::endl << std::endl;
                        }
                    }
                    player = true;
                    ia = false;
                    break;


                }
            }
        }
    }
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";

    stop:
    if (vida1 <= 0)
    {
        std::cout << "Pikachu ha morido, gana motapod \n";

        std::cout << " ⣀⣠⣾⢿⣻⣿⣿⣿⣿⣟⣿⣻⣟⣿⣻⣟⣿⣻⣟⣿⣻⢧⠀⠀⠀⠀⡀⢤⠰⣴ ⠀\n";
        std::cout << "⣿⢿⣽⣻⣷⣻⣿⣿⣿⣾⣳⢿⣞⡷⣟⣾⢷⣻⣾⣳⢿⡧⠀⠀⠀⢂⠘⢦⣟⣿ ⠀\n";
        std::cout << "⣿⣻⢾⣳⣿⡯⣳⢏⡿⣷⢿⣯⢿⣽⣻⣽⣻⢷⣯⣟⣯⣷⡁⠄⡈⢄⠚⡴⣹⢾ ⠀\n";
        std::cout << "⣿⣽⣻⡟⢻⡇⠀⠉⠘⠿⣿⣞⣯⣟⣷⢯⣟⡿⣾⣽⣳⣿⣽⣾⣵⣮⡷⠾⠑⣿ ⠀\n";
        std::cout << "⣿⢾⣽⡘⢦⣻⡄⠀⠀⠀⠈⠻⣽⢾⣯⣟⣯⢿⣳⣯⡷⣯⠿⠟⠋⠁⠀⠀⢠⣿ ⠀\n";
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣧⡤⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡔⣏⢽⣻ ⠀\n";
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⢠⢤⡀⠀⠀⠀⠀⠀⢀⡤⣄⠀⠀⠀⢻⣾⡼⣯⣿ ⠀\n";
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠘⠛⠃⠀⢀⡀⠀⠀⠈⠻⠋⠀⠀⠀⠈⢿⣿⣿⣿ ⠀\n";
        std::cout << "⣿⣿⣿⣿⣿⣿⣿⣳⡴⣶⢦⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⢠⣞⡶⣆⠀⢹⣿⢿⣿⠀\n";
        std::cout << "⣿⣏⠟⡭⢛⡜⢲⢹⠈⠈⠁⠀⠀⠀⠰⣋⠥⢛⠀⠀⠀⠀⠙⠚⠁⠀⠀⡫⣞⣿⠀\n";
        std::cout << "⣿⣜⣣⢜⡡⢎⡱⢎⣧⠀⠀⠀⠀⠀⠀⠈⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⢮⣿ ⠀\n";
        std::cout << "⡿⣞⣷⣯⣽⣾⣽⣻⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿ ⠀\n";
        std::cout << "⡿⣞⣷⣯⣽⣾⣽⣻⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⠀\n";
    }
    else
    {
        std::cout << "Motapod ha muerto, gana pikachu \n";
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

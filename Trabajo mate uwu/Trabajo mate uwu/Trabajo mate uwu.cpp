// Trabajo mate uwu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <complex>

int main()
{
    int linea1 = 1;
    int linea2 = 1;
    int dec2 = 1;
    int dec3 = 1;
    int dec4 = 1;
    int dec5 = 1;
    int dec6 = 1;

    

    int combinaciones = 1;
    long combinacionresta = 1;

    int combinacionresta2 = 1;
    int combinaciones2 = 1;

    int permutacion2 = 1;

    int totalcombinaciones = 1;
    int  totalcombinacionesmulti = 1;
    int  totalcombinacionesfor = 1;
    int  totalcombinacionestot = 0;
    int  totalcombinacioneslim = 0;



    int totallimite = 5;
    int  totallimitemulti = 1;
    int   totalimitesfor = 1;
    int  totallimitetot = 0;
    int  totalfaclim = 0;

    int totalelementos = 1;
    int  totalelementosmulti = 1;
    int totalfactorial = 0;
    int  totalfactorialtot = 0;
    int  totalelementosfor = 1;

    
    std::string soportes[3] = { "Pyke","Thresh daddy","Renata Glasc Mommy" };
    std::string Adc[3] = { "JHIN","KAISA", "Ezreal" };
    std::string Top[2] = { "Fiora","Darius" };
    std::string Medios[2] = { "Ahri","Veigar" };
    std::string Junglas[2] = { "VI","Kesha (Nunu)" };
    std::string champelegido = "";
    std::string champelegido2 = "";
    std::string champelegido3 = "";

    int permu = 1;

    int dec1 = 1;
    totalelementos = 12;
    totalelementosmulti = 12;

    totalelementosfor = totalelementos - 1;
    for (int j = 0; j <= (totalelementosfor - 1); j++)
    {
        if (j == 0)
        {
            totalfactorial = totalelementosmulti * (totalelementosmulti - 1);

            totalelementosmulti = totalelementosmulti - 1;



            totalfactorialtot = totalfactorial + totalfactorialtot;

        }
        else
        {
            totalfactorial = totalfactorialtot * (totalelementosmulti - 1);

            totalelementosmulti = totalelementosmulti - 1;

            totalfactorialtot = totalfactorial;

        }
    } //factorial elementos totales
    //factorial elementos

    totalimitesfor = totallimite - 1;

    totallimite = 5;
    totallimitemulti = 5;
    totalfaclim = 1;


    for (int j = 0; j <= (totalimitesfor - 1); j++)
    {
        if (j == 0)
        {
            totalfaclim = totallimitemulti * (totallimitemulti - 1);

            totallimitemulti = totallimitemulti - 1;



            totallimitetot = totalfaclim + totallimitetot;

        }
        else
        {
            totalfaclim = totallimitetot * (totallimitemulti - 1);

            totallimitemulti = totallimitemulti - 1;

            totallimitetot = totalfaclim;

        }
    }//factorial limites
    //factorial resta

    totalcombinacionesfor = totalcombinaciones;

    totalcombinaciones = 7;
    totalcombinacionesmulti = 7;
    totalcombinacioneslim = 1;


    for (int j = 0; j <= (totalimitesfor); j++)
    {
        if (j == 0)
        {
            totalcombinacioneslim = totalcombinacionesmulti * (totalcombinacionesmulti - 1);

            totalcombinacionesmulti = totalcombinacionesmulti - 1;



            totalcombinacionestot = totalcombinacioneslim + totalcombinacionestot;

        }
        else
        {
            totalcombinacioneslim = totalcombinacionestot * (totalcombinacionesmulti - 1);

            totalcombinacionesmulti = totalcombinacionesmulti - 1;

            totalcombinacionestot = totalcombinacioneslim;

        }
    }//
    //factorial limite de objetos


    int totalpermutaciones = 1;
    int  totalpermutacionesmulti = 1;
    int  totalpermutacionesfor = 1;
    int  totalpermutacionestot = 0;
    int  totalpermutacioneslim = 0;

    totalpermutaciones = 5;

    totalpermutacionesmulti = 5;
    totalpermutacioneslim = 1;

    totalpermutacionesfor = 3;

    for (int j = 0; j <= (totalpermutacionesfor); j++)
    {
        if (j == 0)
        {
            totalpermutaciones = totalpermutacionesmulti * (totalpermutacionesmulti - 1);

            totalpermutacionesmulti = totalpermutacionesmulti - 1;



            totalpermutacionestot = totalpermutaciones + totalpermutacionestot;

        }
        else
        {
            totalpermutaciones = totalpermutacionestot * (totalpermutacionesmulti - 1);

            totalpermutacionesmulti = totalpermutacionesmulti - 1;

            totalpermutacionestot = totalpermutaciones;

        }
    }
    //factorial permutaciones



    int totalpermutacioneselementos = 1;
    int  totalpermutacioneselementosmulti = 1;
    int  totalpermutacioneselementosfor = 1;
    int  totalpermutacioneselementostot = 0;
    int  totalpermutacioneselementoslim = 0;

    totalpermutacioneselementos = 10;

    totalpermutacioneselementosmulti = 10;
    totalpermutacioneselementoslim = 1;

    totalpermutacioneselementosfor = 9;

    for (int j = 0; j <= (totalpermutacioneselementosfor - 1); j++)
    {
        if (j == 0)
        {
            totalpermutacioneselementos = totalpermutacioneselementosmulti * (totalpermutacioneselementosmulti - 1);

            totalpermutacioneselementosmulti = totalpermutacioneselementosmulti - 1;



            totalpermutacioneselementostot = totalpermutacioneselementos + totalpermutacioneselementostot;

        }
        else
        {
            totalpermutacioneselementos = totalpermutacioneselementostot * (totalpermutacioneselementosmulti - 1);

            totalpermutacioneselementosmulti = totalpermutacioneselementosmulti - 1;

            totalpermutacioneselementostot = totalpermutacioneselementos;

        }
    }
    //factorial de los elementos totales de las permutaciones


    int totalpermutacioneselementosde2 = 1;
    int  totalpermutacioneselementosmultide2 = 1;
    int  totalpermutacioneselementosforde2 = 1;
    int  totalpermutacioneselementostotde2 = 0;
    int  totalpermutacioneselementoslimde2 = 0;

    totalpermutacioneselementosde2 = 11;

    totalpermutacioneselementosmultide2 = 11;
    totalpermutacioneselementoslimde2 = 1;

    totalpermutacioneselementosforde2 = 10;

    for (int j = 0; j <= (totalpermutacioneselementosforde2 - 1); j++)
    {
        if (j == 0)
        {
            totalpermutacioneselementosde2 = totalpermutacioneselementosmultide2 * (totalpermutacioneselementosmultide2 - 1);

            totalpermutacioneselementosmultide2 = totalpermutacioneselementosmultide2 - 1;



            totalpermutacioneselementostotde2 = totalpermutacioneselementosde2 + totalpermutacioneselementostotde2;

        }
        else
        {
            totalpermutacioneselementosde2 = totalpermutacioneselementostotde2 * (totalpermutacioneselementosmultide2 - 1);

            totalpermutacioneselementosmultide2 = totalpermutacioneselementosmultide2 - 1;

            totalpermutacioneselementostotde2 = totalpermutacioneselementosde2;

        }
    }
    //factorial elementos totales pero de 2


    int permutacion = 1;
    int restapermutacion = 1;
    permutacion = totalelementos;
    restapermutacion = totallimite;



    combinacionresta = totallimitetot * totalcombinacionestot;
    combinaciones = totalfactorialtot / combinacionresta;

    std::cout << std::endl;

    //sd

    std::cout << " \nSup bro, programa god que te dice que compo puedes usar, para empezar tenemos 12 champs, 2 de cada linea \n(excepto supp y  adc) pero el limite debe tener 5 maximo, en total podrias tener hasta " << combinaciones << " combinaciones \n sin orden aparente,\n Quisieras elegir alguna linea en particular para que sepas cuantas permutaciones con determinado champ?? \n1)Supp \n2)Adc \n3)Mid \n4)Jg \n5)Top\n ";
    std::cin >> dec1;
    switch (dec1)
    {
    case 1:
        for (int j = 0; j < 3; j++)
        {
            std::cout << "\n Soportes hay: " << soportes[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
        std::cin >> dec2;
        permutacion = totalpermutacioneselementostot / totalpermutacionestot + 1;
        switch (dec2)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Con pyke puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Pyke";
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Con Thresh Daddy puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Thresh Daddy ";
            break;
        case 3:
            std::cout << std::endl;
            std::cout << "Con Renata Mommy puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Renata Mommy  ";
            break;
        }

        break;
    case 2:
        for (int j = 0; j < 3; j++)
        {
            std::cout << "\n De ADCs hay: " << Adc[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
        std::cin >> dec2;
        permutacion = totalpermutacioneselementostot / totalpermutacionestot + 1;
        switch (dec2)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Con Jhin puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Jhin";
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Con Kaisa puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Kaisa";
            break;
        case 3:
            std::cout << std::endl;
            std::cout << "Con Ezreal puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Ezreal";
            break;
        }

        break;
    case 3:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De Medios hay: " << Medios[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec2;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec2)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Con Ahri puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Ahri";
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Con Veigar puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Veigar";
            break;

        }
        break;
    case 4:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De junglas hay: " << Junglas[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec2;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec2)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Con Vi puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Vi";
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Con Kesha(Nunu) puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Kesha(Nunu)";
            break;

        }
        break;
    case 5:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De Top hay: " << Top[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec2;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec2)
        {
        case 1:
            std::cout << std::endl;
            std::cout << "Con Fiora puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = " Fiora";
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "Como Darius puedes tener hasta: " << permutacion << " composiciones distintas que lo contengan";
            std::cout << std::endl;
            champelegido = "Darius";
            break;

        }
        break;
    default:
        std::cout << "Esa no existe crack owowowowoowowwooowowowowowoow";
        break;
    }
    //hacer elegir cual quiere primero y mostrarle sus respectivas permutaciones
    std::cout << std::endl;

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    int total = 12;
   
    
    std::cout << "Bueno ahora quisieras alguna linea extra?\n 1)Si \b2)No \n" ;
    std::cin >> dec3;  //si o no
   if (dec3==1)
   { 

    std::cout << std::endl;
    std::cout << "Que linea quieres? (Excepto la que elegiste anteriormente) \n1)Supp \n2)Adc \n3)Mid \n4)Jg \n5)Top\n \n";
    std::cin >> linea1;
    //decidir champ por esa linea
    switch (linea1)
    {
    case 1:
        for (int j = 0; j < 3; j++)
        {
            std::cout << "\n Soportes hay: " << soportes[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
        std::cin >> dec5;
       
        switch (dec5)
        {
        case 1:
            
            champelegido2 = "Pyke";
            break;
        case 2:
           
            champelegido2 = "Thresh Daddy ";
            break;
        case 3:
            
            champelegido2 = "Renata Mommy  ";
            break;
        }

        break;
    case 2:
        for (int j = 0; j < 3; j++)
        {
            std::cout << "\n De ADCs hay: " << Adc[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
        std::cin >> dec5;
        permutacion = totalpermutacioneselementostot / totalpermutacionestot + 1;
        switch (dec5)
        {
        case 1:
            
            champelegido2 = "Jhin";
            break;
        case 2:
            
            champelegido2 = "Kaisa";
            break;
        case 3:
            
            champelegido2 = "Ezreal";
            break;
        }

        break;
    case 3:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De Medios hay: " << Medios[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec5;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec5)
        {
        case 1:
            
            champelegido2 = "Ahri";
            break;
        case 2:
           
            champelegido2 = "Veigar";
            break;

        }
        break;
    case 4:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De junglas hay: " << Junglas[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec5;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec5)
        {
        case 1:
           
            champelegido2 = "Vi";
            break;
        case 2:
           
            champelegido2 = "Kesha(Nunu)";
            break;

        }
        break;
    case 5:
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\n De Top hay: " << Top[j];

        }
        std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
        std::cin >> dec5;
        permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
        switch (dec5)
        {
        case 1:
           
            champelegido2 = " Fiora";
            break;
        case 2:
           
            champelegido2 = "Darius";
            break;

        }
        break;
    default:
        std::cout << "Esa no existe crack owowowowoowowwooowowowowowoow";
        break;
    }

    
    std::cout << std::endl;
    std::cout << "Quieres alguna otra linea extra?"  <<std::endl;
    std::cin >> dec4;
        if (dec4 == 1)
        {
            std::cout << std::endl;
            std::cout << "Que linea quieres? (Excepto la que elegiste anteriormente) \n1)Supp \n2)Adc \n3)Mid \n4)Jg \n5)Top\n \n";
            std::cin >> linea2;

            switch (linea2)
            {
            case 1:
                for (int j = 0; j < 3; j++)
                {
                    std::cout << "\n Soportes hay: " << soportes[j];

                }
                std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
                std::cin >> dec6;

                switch (dec6)
                {
                case 1:
                    
                    champelegido3 = "Pyke";
                    break;
                case 2:
                   
                    champelegido3 = "Thresh Daddy ";
                    break;
                case 3:
                  
                    champelegido3 = "Renata Mommy  ";
                    break;
                }

                break;
            case 2:
                for (int j = 0; j < 3; j++)
                {
                    std::cout << "\n De ADCs hay: " << Adc[j];

                }
                std::cout << "\n Cual quisieras elegir? (1 al 3 de arriba para abajo)";
                std::cin >> dec6;
                permutacion = totalpermutacioneselementostot / totalpermutacionestot + 1;
                switch (dec6)
                {
                case 1:
                  
                    champelegido3 = "Jhin";
                    break;
                case 2:
                    
                    champelegido3 = "Kaisa";
                    break;
                case 3:
                   
                    champelegido3 = "Ezreal";
                    break;
                }

                break;
            case 3:
                for (int j = 0; j < 2; j++)
                {
                    std::cout << "\n De Medios hay: " << Medios[j];

                }
                std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
                std::cin >> dec6;
                permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
                switch (dec6)
                {
                case 1:
                   
                    champelegido3 = "Ahri";
                    break;
                case 2:
                    
                    champelegido3 = "Veigar";
                    break;

                }
                break;
            case 4:
                for (int j = 0; j < 2; j++)
                {
                    std::cout << "\n De junglas hay: " << Junglas[j];

                }
                std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
                std::cin >> dec6;
                permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
                switch (dec6)
                {
                case 1:
                   
                    champelegido3 = "Vi";
                    break;
                case 2:
                    
                    champelegido3 = "Kesha(Nunu)";
                    break;

                }
                break;
            case 5:
                for (int j = 0; j < 2; j++)
                {
                    std::cout << "\n De Top hay: " << Top[j];

                }
                std::cout << "\n Cual quisieras elegir? (1 al 2 de arriba para abajo)";
                std::cin >> dec6;
                permutacion = totalpermutacioneselementostotde2 / totalpermutacionestot + 1;
                switch (dec6)
                {
                case 1:
                   
                    champelegido3 = " Fiora";
                    break;
                case 2:
                    
                    champelegido3 = "Darius";
                    break;

                }
                break;
            default:
                std::cout << "Esa no existe crack owowowowoowowwooowowowowowoow";
                break;
            }
            if (linea2 == 1)
            {
                total = total - 2;
            }
            if (linea2 == 2)
            {
                total = total - 2;
            }
            if (linea2 == 3)
            {
                total = total - 1;
            }
            if (linea2 == 4)
            {
                total = total - 1;
            }
            if (linea2 == 5)
            {
                total = total - 1;
            }


        }
    
    
   }
   
  


   // calculo cosas 

   //calculo primera decision
   if (dec1 == 1)
   {
       total = total - 2;
   }
   if (dec1 == 2)
   {
       total = total - 2;
   }
   if (dec1 == 3)
   {
       total = total - 1;
   }
   if (dec1 == 4)
   {
       total = total - 1;
   }
   if (dec1 == 5)
   {
       total = total - 1;
   }
   //calculo linea despues de la primera
   if (linea1 == 1)
   {
       total = total - 2;
   }
   if (linea1 == 2)
   {
       total = total - 2;
   }
   if (linea1 == 3)
   {
       total = total - 1;
   }
   if (linea1 == 4)
   {
       total = total - 1;
   }
   if (linea1 == 5)
   {
       total = total - 1;
   }
   //calculo linea 2
 

  //FORMULA COMBINACIONES
   std::cout << std::endl;
   
   //objetois totalest
 
   int totalcombinaciones2 = 1;
   int  totalcombinacionesmulti2 = 1;
   int  totalcombinacionesfor2 = 1;
   int  totalcombinacionestot2 = 0;
   int  totalcombinacioneslim2 = 0;

   totalcombinaciones2 = total;

   totalcombinacionesmulti2 = total;
   totalcombinacioneslim2 = 1;

   totalcombinacionesfor2 = totalcombinaciones2;

   for (int j = 0; j <= (totalcombinacionesfor2-2); j++)
   {
       if (j == 0)
       {
           totalcombinaciones2 = totalcombinacionesmulti2 * (totalcombinacionesmulti2 - 1);

           totalcombinacionesmulti2 = totalcombinacionesmulti2 - 1;



           totalcombinacionestot2 = totalcombinaciones2 + totalcombinacionestot2;

       }
       else
       {
           totalcombinaciones2 = totalcombinacionestot2 * (totalcombinacionesmulti2 - 1);

           totalcombinacionesmulti2 = totalcombinacionesmulti2 - 1;

           totalcombinacionestot2 = totalcombinaciones2;

       }
   }
   std::cout << totalcombinacionestot2 <<std::endl;

   int totalcombinacionesresta = 1;
   int  totalcombinacionesmultiresta = 1;
   int  totalcombinacionesforresta = 1;
   int  totalcombinacionestotresta = 0;
   int  totalcombinacioneslimresta = 0;

   totalcombinacionesresta = total-5;

   totalcombinacionesmultiresta = total-5;
   totalcombinacioneslimresta = 1;

   totalcombinacionesforresta = totalcombinacionesresta;


   for (int j = 0; j <= (totalcombinacionesforresta-2); j++)
   {
       if (j == 0)
       {
           totalcombinacionesresta = totalcombinacionesmultiresta * (totalcombinacionesmultiresta - 1);

           totalcombinacionesmultiresta = totalcombinacionesmultiresta - 1;



           totalcombinacionestotresta = totalcombinacionesresta + totalcombinacionestotresta;

       }
       else
       {
           totalcombinacionesresta = totalcombinacionestotresta * (totalcombinacionesmultiresta - 1);

           totalcombinacionesmultiresta = totalcombinacionesmultiresta - 1;

           totalcombinacionestotresta = totalcombinacionesresta;

       }
   }
   std::cout << totalcombinacionestotresta << std::endl;
   int totalcombinacioneslimite = 1;
   int  totalcombinacionesmultilimite = 1;
   int  totalcombinacionesforlimite = 1;
   int  totalcombinacionestotlimite = 0;
   int  totalcombinacioneslimlimite = 0;

   totalcombinacioneslimite = 5;

   totalcombinacionesmultilimite = 5;
   totalcombinacioneslimlimite = 1;

   totalcombinacionesforlimite = totalcombinacioneslimite ;


   for (int j = 0; j <= (totalcombinacionesforlimite-2); j++)
   {
       if (j == 0)
       {
           totalcombinacioneslimite = totalcombinacionesmultilimite * (totalcombinacionesmultilimite - 1);

           totalcombinacionesmultilimite = totalcombinacionesmultilimite - 1;



           totalcombinacionestotlimite = totalcombinacioneslimite + totalcombinacionestotlimite;

       }
       else
       {
           totalcombinacioneslimite = totalcombinacionestotlimite * (totalcombinacionesmultilimite - 1);

           totalcombinacionesmultilimite = totalcombinacionesmultilimite - 1;

           totalcombinacionestotlimite = totalcombinacioneslimite;

       }
   }
   std::cout <<totalcombinacionestotlimite<< std::endl;




       combinacionresta2 = totalcombinacionestotlimite *totalcombinacionestotresta;
       combinaciones = totalcombinacionestot2 / combinacionresta2;




   //FORMULA PERMUTACIONES

       int restacalcupermutaciones = total - 5;

       int totalcalcupermutaciones = 1;
       int  totalcalcumultipermutaciones = 1;
       int  totalcalcuforpermutaciones = 1;
       int  totalcalcutotpermutaciones = 0;
       int  totalcalculimpermutaciones = 0;

       totalcalcupermutaciones = total;

       totalcalcumultipermutaciones = total;
       totalcalculimpermutaciones = 1;

       totalcalcuforpermutaciones = total - 1;

       for (int j = 0; j <= (totalcalcuforpermutaciones - 1); j++)
       {
           if (j == 0)
           {
               totalcalcupermutaciones = totalcalcumultipermutaciones * (totalcalcumultipermutaciones - 1);

               totalcalcumultipermutaciones = totalcalcumultipermutaciones - 1;



               totalcalcutotpermutaciones = totalcalcupermutaciones + totalcalcutotpermutaciones;

           }
           else
           {
               totalcalcupermutaciones = totalcalcutotpermutaciones * (totalcalcumultipermutaciones - 1);

               totalcalcumultipermutaciones = totalcalcumultipermutaciones - 1;

               totalcalcutotpermutaciones = totalcalcupermutaciones;

           }
       }
       int totalfinalpermutacion = 1;

      
       int totalrestacalcupermutaciones = 1;
       int  totalrestacalcumultipermutaciones = 1;
       int  totalrestacalcuforpermutaciones = 1;
       int  totalrestacalcutotpermutaciones = 0;
       int  totalrestacalculimpermutaciones = 0;

       totalrestacalcupermutaciones = restacalcupermutaciones;

       totalrestacalcumultipermutaciones = restacalcupermutaciones;
       totalrestacalculimpermutaciones = 1;

       totalrestacalcuforpermutaciones = restacalcupermutaciones - 1;

       for (int j = 0; j <= (totalrestacalcuforpermutaciones - 1); j++)
       {
           if (j == 0)
           {
               totalrestacalcupermutaciones = totalrestacalcumultipermutaciones * (totalrestacalcumultipermutaciones - 1);

               totalrestacalcumultipermutaciones = totalrestacalcumultipermutaciones - 1;



               totalrestacalcutotpermutaciones = totalrestacalcupermutaciones + totalrestacalcutotpermutaciones;

           }
           else
           {
               totalrestacalcupermutaciones = totalrestacalcutotpermutaciones * (totalrestacalcumultipermutaciones - 1);

               totalrestacalcumultipermutaciones = totalrestacalcumultipermutaciones - 1;

               totalrestacalcutotpermutaciones = totalrestacalcupermutaciones;

           }
       }
       std::cout << std::endl;

    
       permutacion2 = totalcalcutotpermutaciones / totalrestacalcutotpermutaciones;
    

       std::cout << "El total de combinaciones posibles con " << champelegido <<"-" <<champelegido2 <<"-" <<champelegido3  << " son:" << combinaciones << std::endl;
       std::cout << std::endl;
      

       std::cout << "El total de compos posibles con " << champelegido << "-" << champelegido2 << "-" << champelegido3 << permutacion2 << std::endl;
       std::cout << std::endl;

       std::cout << "Me quiero matar, ayuda por favor esto no es un chiste :( " << std::endl;
   

   
    
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

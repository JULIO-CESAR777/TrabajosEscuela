// 009-24_04_23- Julio OwO- CALCU.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//CALCULADORA VALOR ABSOLUTO
//Menor y mayor que

#include <iostream>

int main()
{
    float digito1 = 0;
    float digito2 = 0;
    int opc = 0;
    float resultado = 0;
    std::cout << "Sup bro, bienvenido a la calculadora pro tryhard X24x de 2 digitos xd, dime, que es lo que quisieras calcular: \n 1) Suma \n 2) Resta \n 3) Multiplicacion \n 4) Division\n 5) Valor absoluto \n 6) Mayor y menor que \n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Bien, dime el primer digito\n";
        std::cin >> digito1;
        std::cout << "Bien, dime el segundo digito\n";
        std::cin >> digito2;

        resultado = digito1 + digito2;

        std::cout << "Tu resultado es: " << resultado;
           
        break;
    case 2:
        std::cout << "Bien, dime el primer digito\n";
        std::cin >> digito1;
        std::cout << "Bien, dime el segundo digito\n";
        std::cin >> digito2;

        resultado = digito1 - digito2;

        std::cout << "Tu resultado es: " << resultado;
        break;

    case 3:
        std::cout << "Bien, dime el primer digito\n";
        std::cin >> digito1;
        std::cout << "Bien, dime el segundo digito\n";
        std::cin >> digito2;

        resultado = digito1 * digito2;

        std::cout << "Tu resultado es: " << resultado;
        break;
    case 4:
        std::cout << "Bien, dime el primer digito\n";
        std::cin >> digito1;
        std::cout << "Bien, dime el segundo digito\n";
        std::cin >> digito2;

        resultado = digito1 / digito2;

        std::cout << "Tu resultado es: " << resultado;
        break;
    case 5:
        std::cout << "Bien, dime el digito que quieres absolutiar\n";
        std::cin >> digito1;
        
        if (digito1 < -1)
        {
            resultado = (digito1 * ( - 1));
            std::cout << "Tu resultado es: " << resultado;
        }
        else
        {
            resultado = digito1;
            std::cout << "Tu resultado es: " << resultado;
        }

        break;
    case 6:
        std::cout << "Bien, dime el primer digito\n";
        std::cin >> digito1;
        std::cout << "Bien, dime el segundo digito\n";
        std::cin >> digito2;

        if (digito1 > digito2)
        {
            std::cout << "El digito mayor es " << digito1;

        }
       
        if (digito1< digito2)
        {
            std::cout << "El digito mayor es " << digito2;
        }
        if (digito1 == digito2)
        {
            std::cout << "SON IGUALES EL DIGITO  " << digito2;
        }
        break;

    default:
        std::cout << "Eso no existe che, son los papas\n";
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

// 24_05_2023-arreglos.cpp 

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    // Para crear arreglos dinamicos necesitamos memoria no estatica.
    // Esto se logra un con punterois.
    // Creamos la variable puntro y la inicializamos en NULL
    string* titulos = NULL;
    string* autores = NULL;
    string libros [10]; 
    
    // Memoria estatica
    int size;
    cout << "Cuantas pelis quieres registrar?" << endl;
    cin >> size;
    
    // Crear arreglos dinamicos
    titulos = new string[size];
    autores = new string[size];

    // Ahora solicita la informacion
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cin.ignore();
        }

        cout << "Echale el nombre de la peli #: " << i + 1 << endl;
        getline(cin, titulos[i]);
        cout << "Quien hizo la peli #: " << i + 1 << endl;
        getline(cin, autores[i]);
    }
    // Imprimir la informacion

    for (int i = 0; i < size; i++)
    {
        cout << "El Titulo de la peli: " << i + 1 << " es: " << titulos[i] << endl;
        cout << "El Autor de la peli: " << i + 1 << " es: " << autores[i] << endl;
    }

    // Recuerda siempre destruir la memoria dinamica
    delete[] titulos;
    delete[] autores;
    titulos =  NULL;
    autores =  NULL;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
/* 
Lab3: Tres numero aleatorios 
Eduardo Torres
801-24-6862
Colaboraciones:
Lillian A. Gonzales Albino
Gabriel A. Santiago Plaza
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    srand(time(0));

    // Creacion de las variables
    int numeroAleatorio1 = rand() % (100 - 0 +1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 +1) + 0;
    int numeroAleatorio3= rand() % (100 - 0 +1) + 0;

    // desplegar los numeros aleatorios generados y luego la version en orden de descendencia

    cout<< " Números aleatorios generados: "<< numeroAleatorio1 << ", " << numeroAleatorio2<< ", "<< numeroAleatorio3<< endl;
    cout<< "Orden descendiente: ";

    // crear el orden de descendencia

    // Caso #1:
    
    if ( numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)
    { 

    // numeroAleatorio 1 es el mayor:
        cout<< numeroAleatorio1 << ", ";

    // numeroAleatorio3 es el menor:

        if (numeroAleatorio2>= numeroAleatorio3)
            cout<< numeroAleatorio2 << ", " <<numeroAleatorio3 << endl;
    // numeroAlearorio 2 es el menor:
        else 
            cout<< numeroAleatorio3 << ", " <<numeroAleatorio2 << endl;
    }
    // Caso #2

    else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio2 >= numeroAleatorio3) 
    { 

    // numeroAleatorio2 es el mayor:
        cout << numeroAleatorio2 << ", ";

    // numeroAleatorio3 es el menor:

        if ( numeroAleatorio1 >= numeroAleatorio3)
            cout << numeroAleatorio1 << ", " << numeroAleatorio3 << endl;
    // numeroAleatorio1 es el menor:
        else 
            cout << numeroAleatorio3 << ", " << numeroAleatorio1 << endl;

    }
    //Caso #3
    else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio3 >= numeroAleatorio1)
    {
    // numeroAleatorio3 es el mayor:

        cout << numeroAleatorio3 << ", ";
    // numeroAleatorio 1 es el menor: 

        if ( numeroAleatorio2 >= numeroAleatorio1)
            cout << numeroAleatorio2 << ", " << numeroAleatorio1 << endl;

    // numeroAleatorio2 es el menor

        else 
            cout << numeroAleatorio1 << ", " << numeroAleatorio2 << endl;

    }

    return 0; 
}


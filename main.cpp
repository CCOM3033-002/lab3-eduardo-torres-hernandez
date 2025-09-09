/* 
Lab3: Tres numero aleatorios 
Eduardo Torres
801-24-6862
Colaboraciones:

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

    cout<< " Números aleatorios generados: "<< numeroAleatorio1 << ", " << numeroAleatorio2<< ", "<< numeroAleatorio3<< endl;
    
    cout<< "Orden descendiente:";
    // crear el orden de descendencia 
    if ( numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)
    { 
        cout<< numeroAleatorio1 << ' ';
        if (numeroAleatorio2>= numeroAleatorio3)
            cout<< numeroAleatorio2 << ' ' <<numeroAleatorio3 << endl;
        else 
            cout<< numeroAleatorio3 << ' ' <<numeroAleatorio2 << endl;
    }
    else if 
}


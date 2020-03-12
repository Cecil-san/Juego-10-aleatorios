#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    /**4.- El juego funciona de la siguiente manera: se genera un array
    con 10 números aleatorios y el usuario tiene que adivinar uno de esos
    números en un máximo de 3 intentos.**/

    srand(time(NULL));
    int arr[10], n;

    for (int i=0; i<10; i++)
    {
        arr[i] = rand();
    }

    cout << "Adivina uno de los 10 numeros aleatorios." << endl;

    for (int i=0; i<3; i++)
    {
        cout << endl << "(" << i+1 << " intento(s) de 3) ";
        cin >> n;

        for (int i=0; i<10; i++)
        {
            if(arr[i]!=n){continue;}

            cout << "Acierto. El numero era " << n << "." << endl;
            return 0;
        }
    }
    cout << endl << "Intentos terminados. La serie de numeros era";

    for (int i=0; i<10; i++)
    {
        cout << " " << arr[i];
    }

    cout << ". " << endl;

    return 0;
}

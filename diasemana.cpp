#include <iostream>
// Pide un número del 1 al 7 e imprime el día de la semana correspondiente (1 = Lunes, 2 = Martes, etc.).
using namespace std;

int main()
{
    // Declaramos variables.
    int day_of_the_week;

    cout << "Please enter a number between 1 and 7 to determine your day of the week" << endl;
    cin >> day_of_the_week;

    // Segun el numero y cada dia de la semana asignamos un respectivo caso.
    switch (day_of_the_week)
    {
    case 1:
        day_of_the_week == 1;
        cout << "Your day of the week is monday" << endl;
        break;
    case 2:
        day_of_the_week == 2;
        cout << "Your day of the week is thursday" << endl;
        break;
    case 3:
        day_of_the_week == 3;
        cout << "Your day of the week is wednesday" << endl;
        break;
    case 4:
        day_of_the_week == 4;
        cout << "Your day of the week is tuesday" << endl;
        break;
    case 5:
        day_of_the_week == 5;
        cout << "Your day of the week is friday" << endl;
        break;
    case 6:
        day_of_the_week == 6;
        cout << "Your day of the week is saturday" << endl;
        break;
    case 7:
        day_of_the_week == 7;
        cout << "Your day of the week is sunday" << endl;
        break;
        //Dado caso el ususario no ingrese un caracter valido, se le pide que ingrese uno valido.
    default:
        cout << "Enter a valid caracter between 1 and 7" << endl;
    }

    return 0;
}

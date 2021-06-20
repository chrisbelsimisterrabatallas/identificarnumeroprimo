#include <iostream>
#include "conio.h"
using namespace std;

/*Se ingresa un entero por teclado. Se desea determinar
 si el número ingresado es primo o no. Utilice bucles "while".
 */

int main() {
    int entero, x=2;
    bool N= true;

    cout<<"Introduzca el entero: ";cin>>entero;

    while (N && x < entero){

        if(entero % x == 0)
            N = false;
        else
            x = x + 1;
    }

    if(N)
        cout<<"El entero es primo";
    else
        cout<<"El entero No es primo";

    return 0;
}

#include <iostream>
#include "S2.h"
#include "Complejo.h"
using namespace std;

int main()
{
    Complejo* a = new Complejo(5, 9);
    Complejo* b = new Complejo(6, 7);

    Complejo resultado = *(a) + *(b); // Suma
    Complejo resultadomin = *(a) - *(b); // Resta

    resultado.print(); // Imprime resultado de la suma
    // Reasigna resultado con la resta
    resultado.print(); 

    // Comparación con ==
    if (resultado == resultadomin) {
        cout << "SON iguales" << endl;
    } else {
        cout << "F" << endl;
    }

    // Comparación con !=
    if (resultado != resultadomin) {
        cout << "f" << endl;
    } else {
        cout << "SON iguales" << endl;
    }
    cout<<resultado;
    cin>>resultado;
    cout<<resultado;
    delete a, b; // Libera memoria
    return 0;
}

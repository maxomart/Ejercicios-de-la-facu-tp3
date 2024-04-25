#include <iostream>

using namespace std;
/***Armar un programa en el que se ingrese un número entero decimal (base diez) y convertirlo a binario.
*/



int main() {
    int num;

    cout << "Ingrese un número entero decimal: ";
    cin >> num;



    int binary = 0, placeValue = 1;


    while (num > 0) {
        binary += (num % 2) * placeValue;
        num /= 2;
        placeValue *= 10;
    }

    cout << "El número en binario es: " << binary << endl;

    return 0;
}

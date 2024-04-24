#include <iostream>

using namespace std;

/***Realizar un programa que reciba una cantidad indefinida de números enteros positivos hasta que se ingresa el 0.
 A continuación el programa debe indicar cuál fue el mayor,
cuál el menor y el promedio general de valores ingresados (no incluir el 0 de finalización).
Considerar la posibilidad de que no se ingresen números (lo primero que se ingresa es 0).**/


int main() {
    int num, mayor, menor;

    cout << "Ingrese un numero entero (al poner 0 termina la ejecucion): ";
    cin >> num;

    mayor = num;
    menor = num;

    while (num != 0) {
        cout << "Ingrese un numero entero (al poner 0 termina la ejecucion): ";
        cin >> num;

        if (num != 0) {
            if (mayor < num) {
                mayor = num;
            }
            if (menor > num) {
                menor = num;
            }
        } else {
            break;
        }
    }

    cout << "El numero mayor es " << mayor << endl;
    cout << "El numero menor es " << menor << endl;

    return 0;
}



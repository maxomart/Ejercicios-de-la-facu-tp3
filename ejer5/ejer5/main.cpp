#include <iostream>

using namespace std;

/***Elaborar un programa que solicite al usuario que ingrese un número entero
(de cualquier cantidad de dígitos) y determine si el mismo es un número capicúa.
*/



int main()
{
    int num;

    cout<< "Ingrese un numero entero (de cualquier cantidad de digitos): ";
    cin>> num;

    int numero_original= num;
    int numero_invertido= 0;

    while (num > 0){
        numero_invertido = numero_invertido * 10 + num % 10;
        num /= 10;
    }

    if (numero_original==numero_invertido){
        cout<< "Su numero es capicua";
    }else{
        cout<< "Su numero no tiene capicua";
    }


    return 0;
}

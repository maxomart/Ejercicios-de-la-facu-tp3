#include <iostream>

using namespace std;

/**
Elaborar un programa que calcule el factorial de un n�mero entero.  El programa principal debe solicitar el
ingreso de un n�mero entero positivo (validarlo), calcular y luego mostrar por pantalla su factorial.  Ejemplo:

Ingrese un n�mero entero: 5
El factorial de 5 es: 120
for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

*/


int main()
{
    unsigned int num, factorial=1;
    int i;


    cout<< "Ingrese un numero entero: ";
    cin>>num;

    while (num<0){

        cout<< "Numero invalido. Ingrese  otro numero entero positivo: ";
        cin>>num;
    }
    for (i =1; i<=num;++i){
        factorial*=i;
    }


    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}

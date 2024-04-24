#include <iostream>

using namespace std;
/***Construir un programa  en el que se ingresen números enteros hasta que se hayan
ingresado 5 números pares e informar si alguno de ellos es también múltiplo de cuatro. */


int main()
{
    int num;
    unsigned int num_pares;
    bool multiplo;

    do {
        cout<< "Ingrese un numero entero: ";
        cin >>num;

        if (num%2==0){
                num_pares++;

            if(num%4==0){
                multiplo=true;
            }
        }

    }
    while (num_pares<5);{
        if (multiplo){
            cout<< "Se ingreso al menos un numero multiplo de 4";
        }
        else{
            cout<< "No se ingreso un multiplo de 4 ";
        }
    }






    return 0;
}

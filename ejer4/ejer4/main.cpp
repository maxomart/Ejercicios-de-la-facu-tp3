#include <iostream>

using namespace std;

/***
Escribir un programa que reciba una cantidad indefinida de números enteros positivos hasta que se ingresa el 0.
A continuación el programa debe indicar cuáles fueron los 2 mayores. Considerar la posibilidad de que no se ingresen
 números (lo primero que se ingresa es 0) o se ingresen menos de 2 números.
*/


int main()
{
    int num, mayor, mayor2;


    cout<< "Ingrese un numero entero (aprete 0 para terminar): ";
    cin>> num;

    mayor= num;
    mayor2= 0;

    while (num!=0){
        cout<< "Ingrese un numero entero (aprete 0 para terminar): ";
        cin>> num;

        if (num!=0){
            if (num > mayor){
                mayor2=mayor;
                mayor= num;
            }
            else if (num > mayor2){
                mayor2= num;
            }


        }

    }








    cout<< "Los dos numero mayores son "<< mayor << " y " << mayor2;



    return 0;
}

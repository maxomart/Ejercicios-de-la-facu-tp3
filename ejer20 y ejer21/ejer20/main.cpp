#include <iostream>

using namespace std;

/**Efectuar un programa que solicite al usuario que ingrese un número entero impar (validar el valor ingresado).
El programa tendrá que dibujar en la pantalla un triángulo de asteriscos cuya base sea el valor ingresado. Ejemplo:

Ingrese número: 8
Número no válido. Ingrese número: 11

     *
    ***
   *****
  *******
 *********
***********

y

     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *

**/


int main()
{
    int base, i, j;

    cout<< "Ingrese la base impar: ";
    cin>>base;

    while(base%2==0){
        cout<< "Numero invalido. ";
        cout<< "Ingrese otro numero: ";
        cin>>base;
    }

   for (i=1; i<=base; i+=2){
        for(j=0; j<= (base-i)/2; j++){
            cout<< " ";
        }for (j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
   }
   for (i=base-2; i>=1; i-=2){
        for(j=0; j<= (base-i)/2; j++){
            cout<< " ";
        }for (j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
   }



    return 0;
}

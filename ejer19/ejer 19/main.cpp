#include <iostream>

using namespace std;

/***Efectuar un programa que solicite al usuario que ingrese la base de un triángulo rectángulo.
Luego dibujar en la pantalla dicho triángulo como se muestra en el siguiente ejemplo:

Ingrese base: 4

*
**
***
****


y

*
**
***
****
***
**
*
*/


int main() {
    int base, i, j;

    cout << "Ingrese la base del triángulo: ";
    cin >> base;

    for (i=1; i<=base;i++){
        for(j=1;j<=i;j++){
            cout<< "*";
        }
        cout<<endl;

    }
     for (i=base-1; i>=1;i--){
        for(j=1;j<=i;j++){
            cout<< "*";
        }
        cout<<endl;

    }

    return 0;
}

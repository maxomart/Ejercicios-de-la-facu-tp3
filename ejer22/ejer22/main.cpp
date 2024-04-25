#include <iostream>

using namespace std;
/**Efectuar un programa que solicite al usuario que ingrese la base y la altura de un rectángulo.
 Luego deberá dibujar en la pantalla el rectángulo hueco. Ejemplo:

Ingrese base: 10
Ingrese altura: 4

**********
*        *
*        *
**********
**/


int main()
{
    int base, altura, i, j;

    cout<< "Ingrese la base: ";
    cin>>base;
    cout<< "Ingrese la altura: ";
    cin>> altura;



    for (i=1; i<=altura;i++){
        for(j=1;j <=base;j++){
            if (i==1 || i==altura || j==1 || j==base){
                cout<< "*";
            }else{
                cout<< " ";
            }
        }
        cout<<endl;
    }


    return 0;
}

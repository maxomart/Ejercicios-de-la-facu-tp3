#include <iostream>

using namespace std;

/**Hacer un programa por cada dibujo que se ejemplifica tal que se solicite al usuario el ingreso del tamaño de la figura (validar que sea impar).
Luego deberá mostrar por pantalla el dibujo en cuestión. Los dibujos que cada programa debe hacer deben respetar las proporciones del ejemplo.

(f==0; f < base; f++)

for (c=0, c < base; c++){
        if (f==0 || f==base-1 || c==0 || c==base-1){
            cout<< "*";
        }
        else {
            cout<< " ";
        }
        cout<<endl;
}



**/


int main()
{
    int base, i, j;

    cout<< "Ingrese la base (impar): ";
    cin>>base;


    for(i=0;i<base;i++){
        for(j=0;j<base;j++){
            if (i==0 || i==base-1 || j==0 || j==base-1 || i==base/2 || j==base/2 || i>=base/2 && j<=base/2 || i<base/2 && j> base/2){
                cout<< "*";
            }else{
                cout<< " ";
            }

        }
        cout<<endl;
    }


    return 0;
}

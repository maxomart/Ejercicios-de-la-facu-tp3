#include <iostream>

using namespace std;
/***Hacer un programa que
 permita ingresar una cantidad indefinida de n�meros reales. La carga finaliza cuando se ingresa 0 (cero).
 A continuaci�n, debe informarse cu�ntos n�meros ingresados fueron n�meros enteros.**/


int main()
{
    int num, enteros;

    cout<< "Inrgese un numero real (la operacin termina al apretar 0): ";
    cin>> num;

    enteros= num;


    while (num!=0){
        cout<< "Inrgese un numero real (la operacin termina al apretar 0): ";
        cin>>num;

        if(num>0){
            enteros++;
        }
    }


    cout<< "La cantidad de numero enteros que ingreso fueron de "<< enteros<< endl;

    return 0;
}

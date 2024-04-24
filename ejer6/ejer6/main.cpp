#include <iostream>

using namespace std;
/***si a = 2366 y b=273, se divide a por b y el resto es 182; como no es cero, se divide el nuevo a que será 273
por el nuevo b que será 182 y da como resto 91; como no es cero se divide 182 por 91 y da como resto cero;
se concluye entonces que 91 es el MCD entre 2366 y 273.
*/


int main()
{
    int numa, numb, divisor;

    cout<< "Ingrese a: ";
    cin>> numa;
    cout<< "Ingrese b: ";
    cin>> numb;




    while (divisor!=0){
        divisor= numa%numb;
        numa==numb;
        numb== divisor;
    }

    cout<< numb << " es el MCD entre " << numa << " y "<< numb ;

    return 0;
}

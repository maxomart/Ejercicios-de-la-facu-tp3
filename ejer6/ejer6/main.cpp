#include <iostream>

using namespace std;
/***si a = 2366 y b=273, se divide a por b y el resto es 182; como no es cero, se divide el nuevo a que será 273
por el nuevo b que será 182 y da como resto 91; como no es cero se divide 182 por 91 y da como resto cero;
se concluye entonces que 91 es el MCD entre 2366 y 273.
 while (numa % numb != 0) {
        // Calcular el resto de la división
        resto = numa % numb;

        // Actualizar los valores de numa y numb
        numa = numb;
        numb = resto;
    }
*/


int main()
{
    int numa, numb, resto;

    cout<< "Ingrese a: ";
    cin>> numa;
    cout<< "Ingrese b: ";
    cin>> numb;



    while (numa % numb!=0){
            resto= numa%numb;
            numa=numb;
            numb=resto;

    }



    cout<< numb << " es el MCD entre " << numa << " y "<< numb ;

    return 0;
}

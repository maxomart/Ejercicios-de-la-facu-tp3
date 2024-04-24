#include <iostream>

using namespace std;
/**Confeccionar un programa en el que se ingresa una letra a buscar y luego un texto de tamaño indefinido
(hasta ingresar ENTER). Luego, el programa debe informar cuántas apariciones de la letra hay en ese texto.  Ejemplo:

Ingrese la letra a contar: a
Ingrese el texto: La bella y graciosa moza, marchose a lavar la ropa.
La letra "a" aparece 11 veces.

**/


int main()
{
    char letra, texto;
    int suma=0;


    cout<< "Ingrese la letra a contar: ";
    cin>> letra;
    cout<< "Ingrese un texto(Terminar el texto con un .): ";
    while (cin>> texto && texto != '.'){
        if (letra==texto){
        suma++;
            }
    }






    cout<< suma;


    return 0;
}

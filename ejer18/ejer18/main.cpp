#include <iostream>

using namespace std;

/***Confeccionar un programa que permita el ingreso de letras en min�scula y que brinde al usuario tres operaciones
posibles a trav�s de un men� de opciones. La primera opci�n devolver� la may�scula correspondiente. La segunda opci�n
devolver� la letra siguiente en el alfabeto (si la letra ingresada fuera �z� se debe informar que es la �ltima).
La tercera opci�n devolver� la letra anterior en el alfabeto siempre que la letra ingresada no sea �a�. Validar que efectivamente el
car�cter ingresado sea una letra min�scula o * (este �ltimo determina el final de la serie de opciones). Ejemplo:


Ingrese letra: f
1 � Convertir a may�scula
2 � Obtener la siguiente
3 � Obtener la anterior
Escoja una operaci�n (1 � 3): 1
La may�scula es F.
**/

int main()
{
    char letra, mayuscula, siguiente, anterior;
    int operacion;

    cout<< "Ingrese una letra minuscula: ";
    cin>> letra;

    cout<< "1 - Convierte a mayuscula" << endl;
    cout<< "2 - Obten la siguiente" << endl;
    cout<< "3 - Obten el anterior" << endl;

    cout << " Ingrese una opcion(1 - 3): ";
        cin>> operacion;



    switch (operacion){

        case 1 :
                mayuscula= letra - ('a'-'A');
                cout<< "Su letra mayuscula es " << mayuscula<< endl;
        break;

        case 2:
                if (letra>= 'a' && letra< 'z'){
                    siguiente= letra+1;
                    cout<< "Su siguiente es "<< siguiente;
                } else if (letra == 'z'){
                    cout<< letra << " no tiene siguiente";
                }

        break;

        case 3:
                if (letra> 'a' && letra<= 'z'){
                    anterior=letra-1;
                    cout<< "Su anterior es " << anterior;
                }else if (letra == 'a'){
                        cout << letra << " no tiene anterior";
                    }

        break;






    }




    return 0;
}

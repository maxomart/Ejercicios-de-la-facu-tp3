#include <iostream>

using namespace std;

/**
Realizar un programa en el que se ingresa un texto de longitud indefinida (hasta ingresar ENTER).
Luego debe informarse por pantalla cu�ntas de sus letras fueron may�sculas y cu�ntas fueron min�sculas.
 Por ejemplo, para el texto �Hola Mundo� debe obtenerse 2 may�sculas y 7 min�sculas


**/


int main()
{
    char texto;
    int mayuscula=0, minuscula=0;


    cout<< "Ingrese un texto de longitud indefinida: ";
    while (cin >> texto && texto!='.' ){
            if (texto>= 'a' && texto <= 'z'){
                    minuscula++;
            }else if (texto>='A' && texto <= 'Z'){
                    mayuscula++;
            }
    }

    cout<< "Se ingresaron "<< mayuscula << " mayuscula y "<< minuscula<< " minuscula"<< endl;


    return 0;
}

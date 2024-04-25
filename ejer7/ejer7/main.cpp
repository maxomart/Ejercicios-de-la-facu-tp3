#include <iostream>

using namespace std;

/***Hacer un programa que encuentre e imprima un listado con todos los n�meros de 4 cifras que cumplan
la condici�n de que la suma de los d�gitos de orden impar es igual a la suma de los d�gitos de orden par.
Por ejemplo, el n�mero 7821 cumple esta condici�n ya que 7 + 2 = 8 + 1.*/

int main() {
    cout << "Listado de numeros de 4 cifras que cumplen la condicion:" << endl;


    for (int num=1000; num<=9999; num++){
        int primer_digito= num/1000;
        int segundo_digito= (num%100)/ 100;
        int tercer_digito= (num%100)/10;
        int ultimo_digito= num%10;

        int suma_impares = primer_digito + tercer_digito;
        int suma_pares = segundo_digito + ultimo_digito;

        if (suma_impares== suma_pares){
            cout<< num <<  " ";
        }
    }

    cout << endl;

    return 0;
}


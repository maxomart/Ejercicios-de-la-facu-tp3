#include <iostream>

using namespace std;

/***Hacer un programa que encuentre e imprima un listado con todos los números de 4 cifras que cumplan
la condición de que la suma de los dígitos de orden impar es igual a la suma de los dígitos de orden par.
Por ejemplo, el número 7821 cumple esta condición ya que 7 + 2 = 8 + 1.*/

int main() {
    cout << "Listado de numeros de 4 cifras que cumplen la condicion:" << endl;

    // Iterar sobre todos los números de cuatro dígitos
    for (int num = 1000; num < 10000; ++num) {
        // Extraer los dígitos del número
        int primer_digito = num / 1000;
        int segundo_digito = (num % 1000) / 100;
        int tercer_digito = (num % 100) / 10;
        int ultimo_digito = num % 10;

        // Calcular la suma de los dígitos de orden par e impar
        int suma_pares = segundo_digito + ultimo_digito;
        int suma_impares = primer_digito + tercer_digito;

        // Verificar si la suma de los dígitos de orden impar es igual a la suma de los dígitos de orden par
        if (suma_impares == suma_pares) {
            // Imprimir el número que cumple con la condición
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}


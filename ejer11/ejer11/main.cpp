#include <iostream>

using namespace std;


int main() {
    int num;
    bool es_primo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    // Verificar si el número es menor o igual a 1
    if (num <= 1) {
        es_primo = false;
    } else {
        // Iterar desde 2 hasta la mitad del número
        for (int i = 2; i <= num / 2; ++i) {
            // Si el número es divisible por i, entonces no es primo
            if (num % i == 0) {
                es_primo = false;
                break;
            }
        }
    }

    if (es_primo) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0;
}

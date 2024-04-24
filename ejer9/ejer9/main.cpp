#include <iostream>

using namespace std;

/**Confeccionar un programa en el cual se ingrese una cantidad indefinida de números enteros positivos,
hasta ingresar 0 (cero). Finalizada la carga, el programa debe informar si los números ingresados (excluido el 0)
se ingresaron en orden ascendente y, si éste fuera el caso, también indicar si fueron números consecutivos o no.
Por ejemplo, si se ingresa 13, 14 y 15 se indicará que fueron ingresados en orden ascendente y consecutivo. Si se ingresa
13, 14, 16 y 17 se indicará que fueron ingresados en orden ascendente y no consecutivo. Considerar la posibilidad de que
no se ingresen números (lo primero que se ingresa es 0).
**/


int main() {
    int num, ultimo_num = -1, anterior = -1;

    cout << "Ingrese una serie de numeros enteros positivos (0 para terminar):" << endl;

    do {
        cout << "Ingrese un numero entero positivo (0 para terminar): ";
        cin >> num;

        if (num != 0) {
            if (ultimo_num == -1) {
                ultimo_num = num;
            } else {
                if (num < anterior || num == ultimo_num) {
                    cout << "Los numeros ingresados no estan en orden ascendente." << endl;
                    return 0;
                }
                anterior = ultimo_num;
                ultimo_num = num;
            }
        }
    } while (num != 0);

    if (ultimo_num == -1) {
        cout << "No se ingresaron numeros." << endl;
    } else {
        cout << "Los numeros ingresados estan en orden ascendente.";
        if (anterior == ultimo_num - 1) {
            cout << " Son consecutivos." << endl;
        } else {
            cout << " No son consecutivos." << endl;
        }
    }

    return 0;
}

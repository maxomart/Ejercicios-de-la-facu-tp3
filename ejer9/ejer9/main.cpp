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
    int num, anterior = -1;
    bool orden_ascendente = true, consecutivo = true;

    cout << "Ingrese una serie de números enteros positivos (0 para terminar): ";

    cin >> num;

    while (num != 0) {
        if (anterior != -1) {
            if (num <= anterior) {
                orden_ascendente = false;
            }
            if (num != anterior + 1) {
                consecutivo = false;
            }
        }
        anterior = num;

        cout << "Ingrese otro número (0 para terminar): ";
        cin >> num;
    }

    if (orden_ascendente) {
        cout << "Los números ingresados están en orden ascendente.";
        if (consecutivo) {
            cout << " Son consecutivos." << endl;
        } else {
            cout << " No son consecutivos." << endl;
        }
    } else {
        cout << "Los números ingresados no están en orden ascendente." << endl;
    }

    return 0;
}

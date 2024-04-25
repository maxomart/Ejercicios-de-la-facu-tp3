#include <iostream>

using namespace std;

/**Confeccionar un programa en el cual se ingrese una cantidad indefinida de n�meros enteros positivos,
hasta ingresar 0 (cero). Finalizada la carga, el programa debe informar si los n�meros ingresados (excluido el 0)
se ingresaron en orden ascendente y, si �ste fuera el caso, tambi�n indicar si fueron n�meros consecutivos o no.
Por ejemplo, si se ingresa 13, 14 y 15 se indicar� que fueron ingresados en orden ascendente y consecutivo. Si se ingresa
13, 14, 16 y 17 se indicar� que fueron ingresados en orden ascendente y no consecutivo. Considerar la posibilidad de que
no se ingresen n�meros (lo primero que se ingresa es 0).
**/


int main() {
    int num, anterior = -1;
    bool orden_ascendente = true, consecutivo = true;

    cout << "Ingrese una serie de n�meros enteros positivos (0 para terminar): ";

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

        cout << "Ingrese otro n�mero (0 para terminar): ";
        cin >> num;
    }

    if (orden_ascendente) {
        cout << "Los n�meros ingresados est�n en orden ascendente.";
        if (consecutivo) {
            cout << " Son consecutivos." << endl;
        } else {
            cout << " No son consecutivos." << endl;
        }
    } else {
        cout << "Los n�meros ingresados no est�n en orden ascendente." << endl;
    }

    return 0;
}

#include <iostream>

/*
1. Los nombres de las variables deben indicar para que sirve la misma,
escribir las variables con el formato camelCase.
2. Hay que tratar que el código sea legible usando correctamente los
espacios y las tabulaciones
*/

using namespace std;

int main() {
    // Declaracion de variables
    bool existeMayor = false; // Tipo de varible lógica
    int num_1, num_2, mayor;

    cin >> num_1;
    cin >> num_2;

    if (num_1 > num_2) {
        // num_1 es mayor
        mayor = num_1;
        existeMayor = true;
    } else if (num_2 > num_1) {
        // num_2 es mayor
        mayor = num_2;
        existeMayor = true;
    }

    if (existeMayor) {
        cout << "El número mayor es: " << mayor << endl;
    } else {
        cout << "Los dos números son iguales" << endl;
    }

    return 0;
}

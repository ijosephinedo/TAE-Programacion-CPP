#include <iostream>

using namespace std;

int main() {
    char grupo; // Tipo de variable char es solo un caracter

    cout << "Dime en que grupo estas: ";
    cin >> grupo;

    cout << "Tu profe de mate es: ";
    switch (grupo) {
    case 'A':
        cout << "Alfredo Capuchino" << endl;
        break;

    case 'B':
        cout << "Victor Oyoque" << endl;
        break;

    case 'C':
        cout << "Alfredo Capuchino" << endl;
        break;

    case 'D':
        cout << "Oscar Ornelas" << endl;
        break;

    case 'E':
        cout << "Alfredo Capuchino" << endl;
        break;

    default:
        cout << "No esiste el grupo" << endl;
    }

    return 0;
}

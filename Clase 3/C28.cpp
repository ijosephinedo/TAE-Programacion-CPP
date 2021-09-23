#include <iostream>

using namespace std;

int main(){
    int edad;

    cin >> edad;

    if (edad >= 9 && edad <= 11) {
        cout << "Eres categoría Junior" << endl;
    } else if (edad >= 12 && edad <= 15) {
        cout << "Eres categoría Secundaria" << endl;
    } else if (edad >= 16 && edad <= 18) {
        cout << "Eres categoría Preparatoria" << endl;
    } else if (edad >= 19 && edad <= 23) {
        cout << "Eres categoría Universitaria" << endl;
    } else {
        cout << "No es posible tu participación" << endl;
    }

    return 0;
}

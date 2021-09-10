#include <iostream>

using namespace std;

int main(){
    string nombres, apellidos, nombreCompleto;

    cout << "Escribe tu nombre completo" << endl << endl;
    cout << "Nombre(s): ";
    // cin >> nombres; // Cuando usemos variables String hay que usar getline()
    getline(cin, nombres);
    cout << "Apellido(s): ";
    // cin >> apellidos;
    getline(cin, apellidos);

    nombreCompleto = nombres + " " + apellidos;

    cout << "\nHola " << nombreCompleto << endl;


    return 0;
}
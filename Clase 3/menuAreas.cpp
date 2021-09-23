#include <iostream>

using namespace std;

int main() {
    int opcion;
    double PI = 3.14;
    float circulo, Radio;
    float Cuadrado, Lado;
    float Triangulo, Base, Altura;
    float Rectangulo, Largo, Ancho;
    bool continuar = true;

    while (continuar) {
        system("clear"); // "cls" para windows
        cout << "CÁLCULO DE ÁREA" << endl;
        cout << "1) Círculo" << endl;
        cout << "2) Cuadrado" << endl;
        cout << "3) Triángulo" << endl;
        cout << "4) Rectángulo" << endl;
        cout << "5) Salir" << endl;
        cout << "Opción: "; cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Radio: "; cin >> Radio;
            circulo = PI * Radio * Radio;
            cout <<  "Resultado: " << circulo << endl;;
            break;

        case 2:
            cout << "Lado: "; cin >> Lado;
            Cuadrado = Lado * Lado;
            cout <<  "Resultado: " << Cuadrado << endl;;
            break;

        case 3:
            cout << "Base: ";  cin >> Base;
            cout << "Altura: "; cin >> Altura;
            Triangulo = Base *  Altura / 2.0;
            cout <<  "Resultado: " << Triangulo << endl;
            break;

        case 4:
            cout << "Largo: "; cin >> Largo;
            cout << "Ancho: "; cin >> Ancho;
            Rectangulo = Largo * Ancho;
            cout <<  "Resultado: " << Rectangulo << endl;
            break;

        case 5:
            cout << "Adios!" << endl;
            continuar = false;

        default:
            cout << "Opción inválida" << endl;
            break;
        }
        cout << "Presiona enter para continuar..." << endl;
        cin.get();
        cin.get();
    }

    return 0;
}


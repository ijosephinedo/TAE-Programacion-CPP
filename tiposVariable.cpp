#include <iostream>

using namespace std;

int main(){
    int base; // Declaración de variable tipo entera "base"
    int altura; // Declaración de variable tipo entera "altura"
    float area; // Declaración de variable tipo punto flotante

    cout << "Área de un triángulo\n\n";

    cout << "Base: ";
    cin >> base;
    cout << "Altura: ";
    cin >> altura;

    area = base * altura / 2.0;

    // 3 / 2 = 1
    // 3.0 / 2 = 1.5
    // 3.0 / 2.0 = 1.5

    cout << "Área: " << area << endl;

    return 0;
}

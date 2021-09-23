#include <iostream>

#define MIN_CAL 60

using namespace std;

void DameMayor() {
    bool existeMayor = false; // Tipo de varible lógica
    int num_1, num_2, mayor;

    cout << endl << "EL MAYOR DE DOS NÚMEROS" << endl;
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
}

void Becario() {
    float calif_1, calif_2, calif_3, promedio;

    cout << endl << "PROGRAMA BECARIO" << endl;
    cin >> calif_1;
    cin >> calif_2;
    cin >> calif_3;

    promedio = (calif_1 + calif_2 + calif_3) / 3.0;

    if (promedio >= 80 && calif_1 >= MIN_CAL && calif_2 > MIN_CAL && calif_3 >= MIN_CAL) {
        cout << "Aún tienes tu beca" << endl;
    } else {
        cout << "Get out!" << endl;
    }
}

float ConvertirTemp(float celsius) {
    return celsius * 1.8 + 32;
}

int main(){
    int opcion;
    float tempC, tempF;

    cout << "Elige una de las siguientes opciones" << endl;
    cout << "1. El mayor de dos números" << endl;
    cout << "2. Becario" << endl;
    cout << "3. Convertir de C a F" << endl;
    cout << "4. Salir" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            DameMayor();
            break;

        case 2:
            Becario();
            break;

        case 3:
            cout << "Dame la temperatura en Centigrados: ";
            cin >> tempC;
            tempF = ConvertirTemp(tempC);
            cout << "La temperatura en Fahrenheit es: " << tempF << endl;
            break;

        default:
            cout << "Opción inválida" << endl;
    }

    return 0;
}

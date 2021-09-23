/*
El programa debe determinar si el estudiante de posgrado seguira recibiendo
su beca, el estudiante está cursando 3 materias.
1. Su promedio debe ser mayor o igual que 80
2. No debe reprobar ninguna materia
*/

#include <iostream>

#define MIN_CAL 60

using namespace std;

int main() {
    float calif_1, calif_2, calif_3, promedio;

    cin >> calif_1;
    cin >> calif_2;
    cin >> calif_3;

    promedio = (calif_1 + calif_2 + calif_3) / 3.0;

    /*
    <: MENOR QUE
    >: MAYOR QUE
    <=: MENOR O IGUAL
    >=: MAYOOR O IGUAL
    ==: IGUAL
    ||: OR
    &&: AND
    */

    if (promedio >= 80 && calif_1 >= MIN_CAL && calif_2 > MIN_CAL && calif_3 >= MIN_CAL) {
        cout << "Aún tienes tu beca" << endl;
    } else {
        cout << "Get out!" << endl;
    }

    return 0;
}

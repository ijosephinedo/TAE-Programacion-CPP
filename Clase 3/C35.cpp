#include <iostream>

using namespace std;

int main() {
    char respuesta;
    int res_afirmativas = 0;

    cout << "1. ¿Eres soltera / o (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "2. ¿Te consideras una persona fiel (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "3. ¿Te gusta programar en C++ (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "4. ¿Te gustan las matemáticas (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "5. ¿Quieres ir a la Universidad (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "6. ¿Te consideras una persona que cuida de su salud (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "7. ¿Has usado cubrebocas durante pandemia (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "8. ¿Quieres tener hijos (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "9. ¿Te gustan los perros (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }
    cout << "10. ¿Te gusta leer (s / n) ?" << endl;
    cin >> respuesta;
    if (respuesta == 's') {
        res_afirmativas++;
    }

    if (res_afirmativas >= 0 && res_afirmativas <= 5) {
        cout << "No hay compatibilidad, pero con el amor nunca se sabe" << endl;
    } else if (res_afirmativas >= 6 && res_afirmativas <= 8) {
        cout << "Bienvenido/a a la friendzone" << endl;
    } else if (res_afirmativas >= 9 && res_afirmativas <= 10) {
        cout << "¡Es el amor de tu vida!" << endl;
    }

    return 0;
}

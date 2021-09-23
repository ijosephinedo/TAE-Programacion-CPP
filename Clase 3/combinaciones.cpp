/*
Fórkula para determinar las posibles combinaciones de un conjunto de n elementos
formando grupos diferentes de m elementos

C(n,m) = n! / (m!(n-m)!)

Por ejemplo, A B C formando grupos de 2 letras

C(3, 2) = 3! / (2! (3-2)!) = 6 / 2 = 3

*/

#include <iostream>

using namespace std;

int main(){
    int n, m, facN = 1, facM = 1, facNM = 1;

    cin >> n;
    cin >> m;

    for (int i = 2; i <= n; ++i) {
        facN *= i;
    }

    for (int i = 2; i <= m; ++i) {
        facM *= i;
    }

    for (int i = 2; i <= (n - m) ; ++i) {
        facNM *= i;
    }

    // double base = 3;
    // double altura = 3:
    // double area = base * altura / 2.0; // 4

    cout << facN / (facM * facNM) << endl;

    return 0;
}

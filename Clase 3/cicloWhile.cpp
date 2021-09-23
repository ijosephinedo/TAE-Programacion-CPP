#include <iostream>

using namespace std;

int main(){
    int suma = 0;
    int i = 1;

    // Ciclo while (mientras)
    while(i <= 100){
        cout << "Suma = " << suma << endl;
        cout << "i = " << i << endl;
        suma = suma + i;
        i++;

    }

    cout << "\nSuma final: " << suma << endl;

    return 0;
}

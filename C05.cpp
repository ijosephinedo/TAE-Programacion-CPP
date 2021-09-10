#include <iostream>

using namespace std;

int main(){
    int longitud = 5, altura = 3, perimetro, area;

    perimetro = (longitud * 2) + altura * 2;
    area = longitud * altura;

    cout << "Área = " << area << endl;
    cout << "Perímetro = " << perimetro << endl;

    return 0;
}

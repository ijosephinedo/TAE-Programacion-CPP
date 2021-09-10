#include <iostream>

#define PI 3.14

using namespace std;

int main(){
    float areaCirculo, radio;

    cin >> radio;
    areaCirculo = PI * radio * radio;
    cout << areaCirculo << endl;

    return 0;
}

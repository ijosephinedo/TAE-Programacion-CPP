#include <iostream>

using namespace std;

int main(){
    int num_1, num_2, num_3;

    cin >> num_1; // 1
    cin >> num_2; // 3
    cin >> num_3; // 2

    if (num_1 > num_2 && num_1 > num_3) {
        cout << "La mayor es " << num_1 << endl;
    }

    if (num_2 > num_1 && num_2 > num_3) {
        cout << "La mayor es " << num_2 << endl;
    }

    if (num_3 > num_1 && num_3 > num_2) {
        cout << "La mayor es " << num_3 << endl;
    }

    return 0;
}

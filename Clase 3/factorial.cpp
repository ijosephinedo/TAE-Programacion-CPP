#include <iostream>

using namespace std;

int main(){
    int factorial = 1, n;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i; // factorial = factorial * i;
    }

    cout << factorial << endl;

    return 0;
}

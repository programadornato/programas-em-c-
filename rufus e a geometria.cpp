#include <iostream>

using namespace std;

int main() {
    int lado1, lado2, lado3;
    cin >> lado1 >> lado2 >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado1 == lado3) {
            cout << "equilatero" << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "isosceles" << endl;
        } else {
            cout << "escaleno" << endl;
        }
    } else {
        cout << "invalido" << endl;
    }

    return 0;
}

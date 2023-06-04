#include <iostream>

using namespace std;

int main() {
    int consumo;
    int valorTotal = 7; // Assinatura básica
    cin >> consumo;

    if (consumo > 10) {
        for (int i = 11; i <= consumo; i++) {
            if (i <= 30) {
                valorTotal += 1;
            } else if (i <= 100) {
                valorTotal += 2;
            } else {
                valorTotal += 5;
            }
        }
    }

    cout << "R$ " << valorTotal << endl;

    return 0;
}

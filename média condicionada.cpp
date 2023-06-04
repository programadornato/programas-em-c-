#include <iostream>

using namespace std;

int main() {
    int valor;
    int soma = 0;
    int count = 0;

    
    cin >> valor;

    while (valor >= 0) {
        if (valor > 0 && valor % 2 != 0) {
            soma += valor;
            count++;
        }
        cin >> valor;
    }

    if (count > 0) {
        float media = (soma) / count;
        cout << media << endl;
    } 

    return 0;
}

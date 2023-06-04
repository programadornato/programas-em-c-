#include <iostream>

using namespace std;

int main() {
    int numero;
    cin >> numero;

    int inverso = 0;
    int temp = numero;

    while (temp > 0) {
        int digito = temp % 10;
        inverso = inverso * 10 + digito;
        temp /= 10;
    }

    bool ehPalindromo = (numero == inverso);

    cout << ehPalindromo << endl;

    return 0;
}

/*
 existe uma forma feita com função.

#include <iostream>

using namespace std;

bool verificaPalindromo(int numero) {
    int inverso = 0;
    int temp = numero;

    while (temp > 0) {
        int digito = temp % 10;
        inverso = inverso * 10 + digito;
        temp /= 10;
    }

    return numero == inverso;
}

int main() {
    int numero;
    cin >> numero;

    bool ehPalindromo = verificaPalindromo(numero);

    cout << ehPalindromo << endl;

    return 0;
}

*/

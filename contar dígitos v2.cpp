#include <iostream>
using namespace std;
int contarDigitos(int n) {
    if (n == 0) {
        // Se o número for zero, possui apenas um dígito
        return 1; 
    }

    int digitos = 0;
    // enquanto a variaǘel n for difwerente de 0
    while (n != 0) {
        // a variável digitos vai incrementar
        digitos++;
        // n será dividido por 10, porque a divisão de numeros distintos possuimos do 0 até o nove.
        n = n / 10;
    }

    return digitos;
}

int main() {
    int numero;
    
    cin >> numero;

    int quantidadeDigitos = contarDigitos(numero);
    cout << quantidadeDigitos << endl;
}

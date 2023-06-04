#include <iostream>

using namespace std;

int main() {
    int quantidadeCartas;
    cin >> quantidadeCartas;

    int valorTotal = 0;
    int quantidadeAs = 0;

    for (int i = 0; i < quantidadeCartas; i++) {
        int carta;
        cin >> carta;

        if (carta == 1) {  // Ás
            valorTotal += 11;
            quantidadeAs++;
        } else if (carta == 11 || carta == 12 || carta == 13) {  // K, Q ou J
            valorTotal += 10;
        } else {  // Outras cartas
            valorTotal += carta;
        }
    }

    while (valorTotal > 21 && quantidadeAs > 0) {
        valorTotal -= 10;
        quantidadeAs--;
    }

    cout << valorTotal << endl;

    return 0;
}

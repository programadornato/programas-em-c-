#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int quantidade;
    unordered_map<int, int> tazos;

    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        int tazo;
        cin >> tazo;
        tazos[tazo]++;
    }

    int tazoMaisRepetido = 0;
    int quantidadeRepeticoes = 0;

    for (const auto& par : tazos) {
        int tazo = par.first;
        int repeticoes = par.second;

        if (repeticoes > quantidadeRepeticoes || (repeticoes == quantidadeRepeticoes && tazo < tazoMaisRepetido)) {
            tazoMaisRepetido = tazo;
            quantidadeRepeticoes = repeticoes;
        }
    }

    cout << tazoMaisRepetido << endl;

    return 0;
}

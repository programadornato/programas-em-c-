#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float capacidade_da_cesta;
    int quantidade_de_bananas,quantidade_de_goiabas,quantidade_de_mangas;
    cin >> capacidade_da_cesta;
    cin >> quantidade_de_bananas;
    cin >> quantidade_de_goiabas;
    cin >> quantidade_de_mangas;
    int frutas = quantidade_de_bananas + quantidade_de_goiabas + quantidade_de_mangas;
    float tempo = ceil((frutas / capacidade_da_cesta));
    cout << tempo << endl;
    // depois eu faço vou jogar baralho com meu avô agora.
}

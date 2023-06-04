#include <iostream>
using namespace std;
int main(){
    
    //X, número (apenas um dígito) representando o Ultron procurado,
    int X,valores_do_for;
    //N, quantidade de inimigos a serem lidos. 
    //Os inimigos a serem lidos e comparados com o Ultron procurado (uma entrada por linha).
    // variável do tipo inteiro N será a quantidade de elementos do for, neste caso eu chamo de teto.
    //resultado = 0,neste caso ela foi inicializada.
    int N,resultado=0;
    cin >> X;
    cin >> N;
    //para a variável de tipo inteiro i inicializada em 0, em que i é menor que a variável N, e será incrementada 
    for(int i = 0; i < N; i++){
        //valores a serem lidos dentro do for,do laço de repetição
        cin >> valores_do_for;
        // se a variável valores_do_for for igual a variável X; 
        if(valores_do_for == X){
            // resultado será incrementado.
            resultado++;
        }
}
    // exibir na tela o resultado incrementado do resultado;
    cout << resultado;
}

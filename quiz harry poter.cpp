#include <iostream>
using namespace std;

int main(){
    char questao1,questao2,questao3,questao4;
        cin >> questao1;
        cin >> questao2;
        cin >> questao3;
        cin >> questao4;
    // variável de tipo inteiro o qual irá receber a quantidade a ser incrementada.
    int qttd_acertos = 0;

    // caso na questão1 o usuário digitar o caractere 'd' incremente 1 unidade.
    switch(questao1){
        case 'd':
        qttd_acertos++;
        break;
        
    }
    // caso na questão2 o usuário digitar o caractere 'a' incremente 1 unidade.
    switch(questao2){
        case 'a':
        qttd_acertos++;
        break;
        
    }
    // caso na questão3 o usuário digitar o caractere 'c' incremente 1 unidade.
    switch(questao3){
        case 'c':
        qttd_acertos++;        
        break;
        
    }
    // caso na questão4 o usuário digitar o caractere 'd' incremente 1 unidade.
    switch(questao4){
        case 'd':
        qttd_acertos++;
        break;
        
    }
    // se a quantidade de acertos for igual a 0 exiba essa mensagem na tela.
    if(qttd_acertos == 0) {
        cout << "Nunca assistiu";
    }
    // se a quantidade de acertos for igual a 1 exiba essa mensagem na tela.
    if(qttd_acertos == 1){ 
        cout << "Ja ouviu falar";
    }
    // se a quantidade de acertos for igual a 2 exiba essa mensagem na tela.
    if(qttd_acertos == 2){ 
        cout << "Interessado no assunto";
    }
    // se a quantidade de acertos for igual a 3 exiba essa mensagem na tela.
    if(qttd_acertos == 3){ 
        cout << "Fa";
    }
    // se a quantidade de acertos for igual a 4 exiba essa mensagem na tela.
    if(qttd_acertos == 4){ 
        cout << "Super fa";
    }

}

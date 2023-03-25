//detector de mentiras
#include <iostream>

using namespace std;

int main(){
    cout << "escreva aqui o seu nome: ";
    char nome[20];
        cin >> nome;    
    cout << "escreva aqui o sua idade: ";
    short int idade,resultado=0;
        cin >> idade;
    cout << "escreva aqui o seu ano de nascimento: ";
    short int ano_de_nascimento,ano_atual;
        cin >> ano_de_nascimento;
    cout << "escreva aqui o seu ano atual: ";
        cin >> ano_atual;
    bool honesto = true;
    bool fraudulento = false;
    resultado = ano_atual - ano_de_nascimento;
    cout << "o seu nome é: :" << nome << endl;
    cout << "sua idade é: " << idade << endl;
    cout << "o ano de seu nascimento é: " << ano_de_nascimento << endl;
    cout << "o ano em que está é: " << ano_atual << endl;
    if(resultado < idade) cout << "a possibilidade de isso ser verdade eh: " << fraudulento;
    else if(resultado > idade) cout << "a possibilidade de isso ser verdade eh: " << fraudulento;
    else cout << "sua idade é: " << resultado << "logo a possibiliodade que isso occora é: " << honesto;
}

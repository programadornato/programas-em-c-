#include <iostream>

using namespace std;

// CRIAREI UMA FUNÇÃO VOID O QUAL NÃO RETORNARÁ NADA.
// TERA TRES ARGUMENTOS INTEIROS, O QUANTIDADE DE ESPAÇOS, 
//NUMERO QUE DEVERÁ SER REPETIDO, E QUANTIDADE QUE ESSE NUMERO DEVERÁ SER REPETIDO.
void imprimelinha(int quantidade_de_Espacos, int N, int quantidade_de_numeros){
    for(int i = 1; i <= quantidade_de_Espacos; i++ ){
        cout << " ";
    }

    for(int i = 1; i <= quantidade_de_numeros; i++){
        cout << N << " ";
    }
    cout << endl;
    
}

int main(){
    
   int N;
   cin >> N;
   
   for(int i = 1, quantidade_espacos = N; i <= N; i++, quantidade_espacos--){
       imprimelinha(quantidade_espacos,N,i);
       
   }
}

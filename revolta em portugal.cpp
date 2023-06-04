#include <iostream>

using namespace std;

int main(){
    // neste código tenho que somar as forças
    int quantidade_de_numeros, conjunto_de_numeros;
    int soldados_impares = 0, rebeldes_pares = 0;
    cin >> quantidade_de_numeros;    

    for(int i = 0; i < quantidade_de_numeros; i++){
    //aqui lerei os valores que seram aplicados dentro. 
        cin >> conjunto_de_numeros;
    
    // dentro do for eu devo verificar quem é par e quem é impar.    
    if(conjunto_de_numeros % 2 == 1){
    // se os conjunto de números que está dentro for impar a soma dos soldados sera incrementada 
    // encima do conjunto de números
    
        soldados_impares += conjunto_de_numeros;
    }
    
    else if(conjunto_de_numeros % 2 == 0){
    // se os conjunto de números que está dentro for par 
    //a soma dos soldados sera incrementada 
    // encima do conjunto de números
    
        rebeldes_pares += conjunto_de_numeros;
    }
    
    }
    
    if(soldados_impares > rebeldes_pares){
        cout << "soldados";
    }
    else if(rebeldes_pares > soldados_impares){
        cout << "rebeldes";
    }
    else 
        cout << "empate"; 
    
}

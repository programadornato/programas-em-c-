#include <iostream>
using namespace std;

int main(){
 
    int dig;
    int number;
    cin >> dig;
    cin >> number; 
   
    int cont = 0;
    // enquanto está operação for verdade
    while(true){
        // unidade vai receber o resto da divisão de cada numero digitado. 
        int unidade = number % 10;
        // se a variável unidade for igual ao digito a variável de encontro, contador incrementa
        if(unidade == dig)
            cont ++;
        // se number for menor que tem afinanal de numeros distintos temos apenas do 0 ao 9
        if(number < 10)
            break;
        // logo o algarismo digitado vai ser divido por 10,porém numeros telefonicos começam do 1 e vão até o 9
        number = number / 10;
           
    }
    cout << cont << endl;
   
    return 0;
}

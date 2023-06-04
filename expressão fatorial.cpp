#include <iostream>
using namespace std;
// conforme prescrito na questão ele queria a subtração de dois fatoriais.
//função que eu não quero que ela retorne nada alem do que for pedido aqui dentro
int fatorial(int numero){
    int result = 1;
    for(int i = numero; i > 1; i--){
        result *= i; 
    }
    return result;    
    }

int main(){
    
    int num;

    
    cout << fatorial(5) - fatorial(4);
  
}

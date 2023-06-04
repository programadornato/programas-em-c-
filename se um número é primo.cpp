#include <iostream>
using namespace std;

bool numero_primo(int number){
    if(number == 1) return false;

    bool resp = true;
    
    for(int i = 2; i < number; i++){
        if(number % i == 0){// i é divisor de number
            resp = false;
            break;
        }
    }
    
    return resp;
    
}

bool numero_primo2(int number){
    if(number == 1) return false;

    for(int i = 2; i < number; i++){
        if(number % i == 0){// i é divisor de number
            return false;
        }
    }
    
    return true;
    
}

int main(){
    
    int valor1,valor2,result;
 
    cin >> valor1 >> valor2;
    
    for(int j = valor1; j <= valor2; j++ ){
        if ( numero_primo(j) ) {
            cout << j << endl;
        }
    }
    
    
}

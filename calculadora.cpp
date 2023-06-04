#include <iostream>

using namespace std;

int main(){
    int valor1,valor2;
    char op;
        cin >> valor2;
        cin >> valor1;
        cin >> op;
    
    if(op == '+'){
        cout << valor1 + valor2;
    }
    else if(op == '-'){
        cout << valor2 - valor1;
    
    }
    else if(op == '*'){
        cout << valor1 * valor2;
    }    
    else if(op == '/' && valor1 != 0){
        cout << valor2 / valor1;
    }
  
    else cout << "invalida";
}  

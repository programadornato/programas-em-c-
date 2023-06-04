#include <iostream>

using namespace std;
int main(){
    
    int valor1,valor2,valor3,valor4;
    cin >> valor1;
    cin >> valor2;
    cin >> valor3;
    cin >> valor4;
    if(valor1 > valor2 && valor1 > valor3 && valor1 > valor4) 
    cout << valor1;
    else if(valor2 > valor1 && valor2 > valor3 && valor2 > valor4)
    cout << valor2;
    else if (valor3 > valor1 && valor3 > valor2 && valor3 > valor4)
    cout << valor3;
    else cout << valor4;
}

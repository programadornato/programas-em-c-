#include <iostream>
using namespace std;
int main(){
    
    int num1,num2,X,soma=0;
        cin >> num1;
        cin >> num2;
        cin >> X;
    
    for(int i = num1; i < num2; i++)
    
    if(i % 2 == 0 && i % 3 == 0 && i % X == 0){
        soma = soma + i;        
    }
    cout << soma;
}

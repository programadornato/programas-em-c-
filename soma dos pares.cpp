#include <iostream>
using namespace std;
int main(){
    
    int num1,num2,soma = 0;
        cin >> num1;
        cin >> num2;
        
    for(int i = num1; i <= num2; i++){
       
        if (i%2==0) {
            soma = soma + i;
        }
    }

    cout << soma;
}

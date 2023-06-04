#include <iostream>
using namespace std;
int main(){
    int number1,number2;
    cin >> number1;
    cin >> number2;
    
    if(number1 % number2 == 0) cout << "sim";
    else cout << "nao";
}

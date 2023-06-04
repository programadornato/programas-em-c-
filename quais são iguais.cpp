#include <iostream>

using namespace std;
int main(){
    int number1,number2,number3,quantidade=0;
    cin >> number1 >> number2 >> number3;
    
    if(number1 == number2 && number2 == number3) cout << "3" << endl;
   
    else if(number1 == number2 && number1 != number3 || number1 == number3 && number1 != number2 || number2 == number3 && number2 != number1 || number2 == number1 && number2 != number3|| number3 == number1 && number3 != number2 || number3 == number2 && number3 != number1) 
    
    cout << "2" << endl;
   
    else cout << "0";
    
}

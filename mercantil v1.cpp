#include <iostream>
using namespace std;

#include<cmath>

int main(){
    int price,kick1,kick2,result1=0,result2=0;
        cin >> price;
        cin >> kick1;
        cin >> kick2;
    
    result1 = fabs(price - kick1); 
    result2 = fabs(price - kick2);
    
    if(result1 == result2) cout << "empate";
    else if(result1 <= result2) cout << "primeiro";
    else if(result2 <= result1) cout << "segundo";
    
}

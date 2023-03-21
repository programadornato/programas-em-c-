// esse programa ira converter reais em dolar
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    float valor;
        cout << "quantos reais você possui para fazermos a conversão para dolar?";
        cin >> valor;
        cout << "a quantidade que tens em dólar é: " << fixed << setprecision(2) << valor / 5.24; 

}

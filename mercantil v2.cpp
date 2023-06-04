#include <iostream>
using namespace std;
int main(){
    float chute,preco;
    char maior_ou_menor;
    cin >> chute;
    cin >> maior_ou_menor;
    cin >> preco;
    
    if(maior_ou_menor == 'm' && preco < chute || maior_ou_menor == 'M' && preco > chute) 
        cout << "segundo";
    else cout << "primeiro";
}

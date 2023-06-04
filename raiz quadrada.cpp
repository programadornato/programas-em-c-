#include <iostream>
#include <cmath>
using namespace std;

// crio uma função chamada
void raiz_quadrada(int n1){
    int raiz = 0;
    for(int i = 0; i <= n1; i++){
        raiz = (i * i);
        if(raiz == n1){
            
            cout << i;
        
        }
    }    
}

int main(){
    int n;
    cin >> n;
    raiz_quadrada(n);
    
    
    
}

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    // cin >> n;
    
    int number;
    cin >> number;

    int maior = number;
    int menor = number;

    for(int i = 1; i <= n-1; i++){
        cin >> number;
        if ( number > maior ) {
            maior = number;
        }

        if ( number < menor ) {
            menor = number;
        }
    }

    cout << maior + menor;
}

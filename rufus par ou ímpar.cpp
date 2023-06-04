#include <iostream>
using namespace std;
int main(){
    
    char rufus;
    int numero1,numero2,soma = 0;;
        cin >> rufus;
        cin >> numero1;  
        cin >> numero2;
    soma = numero1 + numero2;
    if((rufus == 'p' && soma % 2 == 0) || (rufus == 'i' && soma % 2 != 0))
        cout << "Venceu";
    else 
        cout << "Perdeu";
}

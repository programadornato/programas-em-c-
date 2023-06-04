#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float salario;
    cin >> salario;
    
    if(salario <= 1000) // este é se o funcionário ganha menos de 1000 reais será adicionado o seu salario mais 20% a mais encima do seu salário.
        cout << fixed << setprecision(2) << salario + (salario * 20) / 100;
    else if((salario > 1000) && (salario <= 1500))// este é se o funcionário ganha mais de 1000 reais e menos que 1500 reais será adicionado o seu salario mais 15% a mais encima do seu salário. 
        cout << fixed << setprecision(2) << salario + (salario * 15) / 100;
    else if((salario > 1500 && salario <= 2000)) // este é se o funcionário ganha mais de 1500 reais e menos que 2000 reais será adicionado o seu salario mais 10% a mais encima do seu salário
        cout << fixed << setprecision(2) << salario + (salario * 10) / 100;
    else if(salario > 2000) // este é se o funcionário ganha mais de 2000 reais será adicionado o seu salario mais 5% a mais encima do seu salário
        cout << fixed << setprecision(2) << salario + (salario * 5) / 100;

}

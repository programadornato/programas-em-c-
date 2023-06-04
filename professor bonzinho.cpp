#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    float nota1,nota2,nota3,trabalho;
    float media = 0;
    
        cin >> nota1;
        cin >> nota2;
        cin >> nota3;
        cin >> trabalho;
    
    if(nota3 <= nota2 && nota3 <= nota1)
        media = (nota1 + nota2 + trabalho) / 3;
    else if(nota2 <= nota1) 
        media = (nota1 + nota3 + trabalho) / 3;
    else
        media = (nota2 + nota3 + trabalho) / 3;

    cout.precision(1);
    cout << fixed;
    if(media >= 7.0)
        cout << "Aprovado com " << media;
    else
        cout << "Final com " << media;
}

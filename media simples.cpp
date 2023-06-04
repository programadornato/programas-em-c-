#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int qtt_de_valores_lidos;
        cin >> qtt_de_valores_lidos;
    
    float nota, somatorio = 0, media=0;
    for(int i = 0; i < qtt_de_valores_lidos; i++){
        cin >> nota;
        somatorio += nota; 
    }
    media = somatorio / qtt_de_valores_lidos; 
    cout << fixed << setprecision(2) << media;
}

#include <iostream>
using namespace std;
int main(){
    int cois,calcas,valores_do_for,resultado=0;
    cin >> cois >> calcas;

    for(int i = 0; i < calcas; i++){
        cin >> valores_do_for;
        if(valores_do_for > cois){
           resultado++; 
        }
    }

    cout << resultado;
}

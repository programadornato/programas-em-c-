#include <iostream>

using namespace std;
int main(){
    char jogador1,jogador2;
        cin >> jogador1;
        cin >> jogador2;
    
    
     if(jogador1 == 'R' && jogador2 == 'R' ||jogador1 == 'P' && jogador2 == 'P' ||jogador1 == 'S' && jogador2 == 'S') 
        cout << "empate";
    
    else if(jogador1 == 'R' && jogador2 == 'S' ||jogador1 == 'P' && jogador2 == 'R' ||jogador1 == 'S' && jogador2 == 'P') 
        cout << "jog1";
    
    else if(jogador1 == 'R' && jogador2 == 'P' ||jogador1 == 'P' && jogador2 == 'S' ||jogador1 == 'S' && jogador2 == 'R')
        cout << "jog2";
    
}

#include <iostream>

using namespace std;
int main(){
    
    // declarando variáveis
    int numero_da_camisa, aux;
    // lendo a variável, valor a ser buscado.
    cin >> numero_da_camisa;
    // variável do tipo inteiro de nome aux irá receber o número do camisa
    aux = numero_da_camisa;
    
    // para int i inicializado em 0, em que i será menor que 4 e será incrementada;
    for(int i = 0; i < 4; i++){
        // valor que vai ser inserido em cada elemento do for
        cin >> numero_da_camisa;
        // se aux for maior que o numero da camisa.
        if(aux > numero_da_camisa)
            // aux recebe o número da camisa. 
            aux = numero_da_camisa;
    }
    cout << aux;
}

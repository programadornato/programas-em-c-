#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //declarando as variáveis necessarias para realizar os procedimentos adequados
    float velocidade,tempo,tempo_em_horas=0,tempo_em_minutos=0,consumo_em_litros;
    float distancia=0;
    float desempenho=0;
    //possibilitando que as entradas sejam executadas.    
        cin >> velocidade;
        cin >> tempo;
        cin >> consumo_em_litros;
    // declarando a fórmula do tempo em horas.
    tempo_em_horas = tempo / 60;
    
    distancia = velocidade * tempo_em_horas;    
    desempenho = distancia / consumo_em_litros;
    cout << fixed << setprecision(2) << desempenho << endl; 
    
    
    
}

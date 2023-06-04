#include <iostream> 
#include <iomanip>
using namespace std;

float converte_para_celsius(float graus_fahrait){
    //float temperatura_em_celcius = ((graus_fahrait - 32) * 5) / 9;
    //return temperatura_em_celcius;
    return ((graus_fahrait - 32) * 5) / 9;
}

int main(){
    float temperatura;
    cin >> temperatura;
    float ret;
    ret = converte_para_celsius(temperatura);
    cout << fixed << setprecision(6) << ret;

}

#include <iostream>
#include <iomanip>
using namespace std;

int fatorial(int number){
    int result = 1;
    for(int i = number; i > 1; i--){
        result *= i;
    }

    return result;
}
float potencia(float base, float expoente){
    int result2 = 1;
    for(int i = 1; i <= expoente; i++){
        result2 *= base;
    }
    
    return result2;    
}
int main(){
    //E1 = 5! - 4!
    cout << fatorial(5) - fatorial(4) << endl;
    
    //E2 = 1/(3!) + 4!
    cout << fixed << setprecision(2) << float(1) / fatorial(3) + fatorial(4) << endl;
    
    //E3 = (4! - 21)!
    cout << fatorial(fatorial(4)- 21) << endl;
    
    //E4 = 8^3 + 5^4/3^5
    cout << fixed << setprecision(2) << potencia(8,3) + potencia(5,4) / potencia(3,5) << endl;
    
    //E5 = (3!)^(2!+1) + (2^2)!
    cout << fixed << setprecision(0) << potencia(fatorial(3),fatorial(2) + 1) + fatorial(potencia(2,2));
    
    return 0;
}


/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int fatorial(int numero){
   
    int resultado = 1; 
    for(int i = numero; i > 1; i-- ){
        resultado *= i; 
    }
    return resultado;
}

float potencia(float base,int expo){
    int resultado2 = 1;
    
    for(int i = 1; i <= expo ; i++){
        resultado2 *= base;
      
    }
    
    return resultado2;
}

int main() {
    int E1 = fatorial(5) - fatorial(4);
    float E2 = 1.0 / fatorial(3) + fatorial(4);
    int E3 = fatorial(fatorial(4) - 21);
    float E4 = potencia(8,3) + potencia(5,4) / potencia(3,5);
    int E5 = potencia(6,3) + fatorial(4); 
    cout << E1 << endl;
    cout << fixed << setprecision(2) << E2 << endl;
    cout << E3 << endl;
    cout << fixed << setprecision(2) << E4 << endl;
    cout << E5;
}
*/

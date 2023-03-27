#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float lado1,lado2,lado3;
    float perimetro;
    float area=0;
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;
    perimetro = (lado1 + lado2 + lado3)/2;
    area = sqrt(perimetro*(perimetro - lado1)*(perimetro - lado2)*(perimetro - lado3));
    cout << fixed << setprecision(2) << area << endl;
    //cout << perimetro;
}

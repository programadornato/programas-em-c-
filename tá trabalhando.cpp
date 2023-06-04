#include <iostream>
using namespace std;
int main(){
    
    int dia = 0;
    float horas,minutos;
        cin >> dia;
        cin >> horas;
        cin >> minutos;
    
    switch(dia){
    
        case 1:
        cout << "NAO";
        break;
    
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        if((horas >= 8 && horas < 12) || (horas >= 14 && horas < 17))
            cout << "SIM";   
        else 
            cout << "NAO";
        break;
    
        case 7:
         if(horas >= 8 && horas < 12)
            cout << "SIM";   
        else 
            cout << "NAO";
        break;            

        default:
        cout << "NAO";
}
    
    
    
}

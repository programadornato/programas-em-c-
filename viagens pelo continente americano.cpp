using namespace std;

int passagem(int viagem_para_coutry_destinado){
switch(viagem_para_coutry_destinado){
case 1:
cout << "pais que deseja viajar é: brasil" << endl;
break;

case 2:
cout << "pais que deseja viajar é: mexico" << endl;
break;

case 3:
cout << "pais que deseja viajar é: estados unidos" << endl;
break;

default:
cout << "quer viajar não tá é frescando" << endl;
}

return viagem_para_coutry_destinado;


}


float converte_para_celcius(float graus_fahrait){

float temperatura_em_celcius = ((graus_fahrait - 32) * 5) / 9;

return temperatura_em_celcius;
}

int main(){
cout << "digite seu nome e sobrenome: ";
char nome[10], sobrenome[100];
cin >> nome >> sobrenome;

cout << "pais de origem: ";
int coutry_de_origem;
cin >> coutry_de_origem;

cout << "pais que está querendo viajar: ";
int coutry_para_viajar;
cin >> coutry_para_viajar;

cout << "digite a temperatura em graus fahrait: ";
float temperatura;
cin >> temperatura;

switch(coutry_de_origem){
case 1:
cout << "pais de origem: brasil" << endl;
break;
case 2:
cout << "pais de origem: méxico" << endl;
break;
case 3:
cout << "pais de origem: estados unidos" << endl;
break;
default:
cout << " nem ele mesmo sabe de onde veio: " << endl;
}

float ret = converte_para_celcius(temperatura);
cout << "nome da pessoa em que está anexado a passagem aérea: " << nome << " " << sobrenome << endl;
cout << "numeração do país em que seu voo está reservado: " << coutry_para_viajar << endl;
cout << "temperatura em celcius: " << fixed << setprecision(6) << ret << endl;

if (coutry_de_origem == passagem(coutry_para_viajar)){
cout << "irá fazer um voo para dentro de outro estado do mesmo pais em que está" << endl;
}

return 0;

}

30 maio
08:11
#include #include
//faça um código que diga simule um prontuário do aeroporto.
//ou seja diga para onde vai viajar de a temperatura do brasil de onde voce está saindo
// qual temperatura do local em que vou viajar??
// caio está afim de vizitar algum pais da america e nomeou 3 pais dos quais mais interessa.

using namespace std;

int passagem(int viagem_para_coutry_destinado){
switch(viagem_para_coutry_destinado){
case 1:
cout << "pais que deseja viajar é: brasil" << endl;
break;

case 2:
cout << "pais que deseja viajar é: mexico" << endl;
break;

case 3:
cout << "pais que deseja viajar é: estados unidos" << endl;
break;

default:
cout << "quer viajar não tá é frescando" << endl;
}

return viagem_para_coutry_destinado;


}


float converte_para_celcius(float graus_fahrait){

float temperatura_em_celcius = ((graus_fahrait - 32) * 5) / 9;

return temperatura_em_celcius;
}

int main(){
cout << "digite seu nome e sobrenome: ";
char nome[10], sobrenome[100];
cin >> nome >> sobrenome;


cout << endl << "------digite 1 se seu pais de origem for o brasil-------" << endl;
cout << "------digite 3 se seu pais de origem for o estados unidos-------" << endl;
cout << "------digite 2 se seu pais de origem for o méxico-------" << endl;

cout << endl << " o código de seu pais de origem: " << endl;
int coutry_de_origem;
cin >> coutry_de_origem;

cout << "------digite 1 se o pais que está querendo viajar for o brasil-------" << endl;
cout << "------digite 2 pais que está querendo viajar for o méxico-------" << endl;
cout << "------digite 3 se o pais que está querendo viajar for o estados unidos-------" << endl;

cout << endl << "pais que está querendo viajar: " << endl;
int coutry_para_viajar;
cin >> coutry_para_viajar;

cout << "digite a temperatura em graus fahrait: " << endl;
float temperatura;
cin >> temperatura;

switch(coutry_de_origem){
case 1:
cout << "pais de origem: brasil" << endl;
break;
case 2:
cout << "pais de origem: méxico" << endl;
break;
case 3:
cout << "pais de origem: estados unidos" << endl;
break;
default:
cout << " nem ele mesmo sabe de onde veio: " << endl;
}

float ret = converte_para_celcius(temperatura);
cout << "nome da pessoa em que está anexado a passagem aérea: " << nome << " " << sobrenome << endl;
cout << "numeração do país em que seu voo está reservado: " << coutry_para_viajar << endl;
cout << "temperatura em celcius: " << fixed << setprecision(6) << ret << endl;

if (coutry_de_origem == passagem(coutry_para_viajar)){
cout << "irá fazer um voo para dentro de outro estado do mesmo pais em que está" << endl;
}

return 0;

}

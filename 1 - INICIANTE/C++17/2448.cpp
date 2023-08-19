#include <iostream>
using namespace std;

int main() {
 
 int casas, pacotes;

 cin >> casas >> pacotes;

 int num_das_casas[casas], ordem_dos_pacotes[pacotes];

 for(int i=0; i<casas; i++){
   cin >> num_das_casas[i];
 }
 for(int i=0; i<pacotes; i++){
   cin >> ordem_dos_pacotes[i];
 }

 int esq, dir, meio, p;
 int resposta[pacotes+1];
 resposta[0] = 0;
 for(int j=0; j<pacotes; j++) { 
   p = ordem_dos_pacotes[j]; 
  
   esq = 0; dir = casas-1;
 
  while(esq<=dir){
     meio = (esq + dir) / 2;
   
     if(p < num_das_casas[meio]) dir = meio - 1;
     else if(p == num_das_casas[meio]) break;
     else esq = meio + 1;
 }

  resposta[j+1] = meio;
 }

 

  int contador = 0;
  for(int i=0; i<pacotes; i++) {
    if(resposta[i]<resposta[i+1]) {
      contador = contador + (resposta[i+1]-resposta[i]);
    }
    else if(resposta[i]>resposta[i+1]){
      contador = contador + (resposta[i]-resposta[i+1]);
    }
  }

 cout << contador << endl;




return 0;
}
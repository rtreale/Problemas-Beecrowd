#include <iostream>
#include <iomanip>
using namespace std;

int main() {

 int pos1,pos2;
 cin >> pos1 >> pos2;
 
 if(pos1>pos2) {
   swap(pos1, pos2);
 }

 //existem 4 possibilidades: final - semifinal - quartas- oitavas;

 int esq, dir, meio;
 int resposta=0; // 1=final 2 = semi ...

 esq=1; dir=16; //limites de 1 a 16
  while(esq<=dir) {
    meio = esq+((dir-esq)/2);
    resposta++;
    if(pos1<=meio && pos2>meio) { //extremos so se encontram na final
     /*cout << "resposta: " << resposta << endl;*/
      break;
    }
    else if(pos2<=meio){ //reparte inferiormente e checa condicoes anteriores 
      dir = meio;
    }
    else {  //reparte superiormente e checa condicoes anteriores 
      esq = meio+1;
    }
  }

 if(resposta==1) {
   cout << "final" << endl;
 }
 else if(resposta==2){
   cout << "semifinal" << endl;
 }
 else if(resposta==3) {
   cout << "quartas" << endl;
 }
  else if(resposta==4) {
   cout << "oitavas" << endl;
  }
}
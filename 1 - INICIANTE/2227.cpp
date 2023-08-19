#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int i,maior,p = 1;
unsigned int a,v,x,y; // a = nº de aeroportos;  // v = nº de voos; // x = nº do aeroporto de saida; // y = nº do aeroporto de chegada;
                

do {
cin >> a >> v;
int saidas[a];
//Definindo vetor saidas Nulo;
for (i=0;i<a;i++) { 
 saidas[i] = 0;
}
//*

//Preenchendo vetor saidas com qntd de Voos por aeroporto;
for(i=0;i<v;i++) { 
  
cin >> x >> y;
saidas[x-1]++;
saidas[y-1]++;

}

//*Exibindo valores finais de saidas
//for(i=0;i<a;i++) {
//cout << saidas[i] << " ";
//} 
//cout << endl;
//*

if (a!=0&&v!=0) {
cout << "Teste " << p << endl;
p++;
}
if (a!=0&&v!=0) {
maior = saidas[0];
for(i=0;i<a;i++) {
  if(saidas[i]>maior) {
    maior = saidas[i];
  }
}
 
for(i=0;i<a;i++) {
  if(saidas[i]==maior) {
    cout << i+1 << " ";
  }
}
 cout << endl << endl;
}

} // Do
while ((a!=0)||(v!=0));




return 0;
}
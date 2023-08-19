#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int n, t, caso=0; //n = tam do vetor || t = tam casos de testes
 ios_base::sync_with_stdio(false);
 
  
  while(cin >> n >> t && n!=0 && t!=0){
    
  caso++;
  unsigned int vet[n], casos[t];

  for(int i=1;i<=n;i++){
      cin >> vet[i];
    }
 
  for(int i=0;i<t;i++){
      cin >> casos[i];
    }

  int menor,aux;
   for(int j=1; j<n; j++){
     menor = j;
      for(int i=j+1; i<n+1; i++){
        if(vet[i]<vet[menor]){
          menor = i;
        }
      }
      aux = vet[j];
      vet[j] = vet[menor];
      vet[menor] = aux;
   }

  int esq, dir, meio, p;
  int resultado[t];
  for(int i=0; i<t; i++){
    resultado[i] = 0;
  }

  for(int i=0; i<t; i++){
    
    p = casos[i];

    esq = 1; dir = n;
    
    while(esq<=dir){
     meio = esq + ((dir-esq)/2);
     if(p<vet[meio]) dir = meio-1;
     else if(p==vet[meio] && p!=vet[meio-1]) break;
     else if(p==vet[meio] && p==vet[meio-1]) dir=meio-1;
     else esq = meio+1;
  }
  
  if(vet[meio] == p) resultado[i] = meio;
  else resultado[i] = -1;

 }


cout << "CASE# " << caso << ":" << endl; 
 for(int i=0;i<t;i++){
  cout << casos[i] << " ";
  if(resultado[i]!=-1) {
  cout << "found at " << resultado[i] << endl;
  }
  else cout << "not found" << endl;
 } 
}

return 0;
}
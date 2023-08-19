#include <iostream>
using namespace std;

int main() {
 
  int n; //N de alunos

  while(cin >> n) {

    string nome[n];
    string regiao[n];
    int distancia[n];

    for(int i=0; i<n; i++){
      cin >> nome[i] >> regiao[i] >> distancia[i];
    }
    
    //Ordenando com base na distancia 
    for(int i=0; i<n-1;i++) {
      for(int j=0; j<n-1-i; j++) {
        if(distancia[j]>distancia[j+1]){
          swap(distancia[j],distancia[j+1]);
          swap(regiao[j],regiao[j+1]);
          swap(nome[j], nome[j+1]);
        }
      }
    }

  //Ordenando com base na menor regiao caso haja igualdade em distancia
   for(int i=0; i<n-1;i++) {
     for(int j=0; j<n-1-i; j++) {
       if((distancia[j]==distancia[j+1]) && (regiao[j]>regiao[j+1])){
          swap(regiao[j],regiao[j+1]);
          swap(nome[j], nome[j+1]);
        }
      }
    }

   //Ordenando com base no nome -.-` caso haja igualdade em distancia e regiao.
   for(int i=0; i<n-1;i++) {
     for(int j=0; j<n-1-i; j++) {
       if((distancia[j]==distancia[j+1]) && (regiao[j]==regiao[j+1]) && (nome[j]>nome[j+1])){
          swap(nome[j], nome[j+1]);
        }
      }
    }

  for(int i=0; i<n; i++) {
    cout << nome[i] << endl;
  }
  
  


  } //while

}
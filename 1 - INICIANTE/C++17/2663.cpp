#include <iostream>
using namespace std;

int main() {
 
  int n,q; //N = n de participantes; Q = Qntd minima de aprovados.

  cin >> n >> q ;

  //Recebendo dados de notas
  int notas[n];
  for(int i=0; i<n; i++) {
    cin >> notas[i];
  }

  //Ordendando vetor notas
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-1-i; j++) {
      if(notas[j]>notas[j+1]){
        swap(notas[j], notas[j+1]);
      }
    }
  }
  /*
  //Exibindo vetor notas ordenado
  for(int i=0; i<n; i++) {
    cout << notas[i] << " ";
  }
  cout << endl;
  */
  int pos = n-q;
  int valorpos = notas[pos];
  pos = pos-1;// correr apartir do 6
  int repeticoes=0;
  for(int i=pos; i>=0; i--) {
    if(notas[i]==valorpos) {
      repeticoes++;
    }
  }

  int total = q+repeticoes;
  cout << total << endl;


}
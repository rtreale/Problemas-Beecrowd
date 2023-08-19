#include <iostream>
using namespace std;

int main() {
 
  int n; //N de alunos

  while(cin >> n) {

    int vetorordenado[n];
    int vetortempo[n];

    for(int i=0; i<n; i++) {
      cin >> vetorordenado[i];
    }
    for(int i=0; i<n; i++) {
      cin >> vetortempo[i];
    }

    //Ordenacao com bubble sort, somando tempo de cada transferencia (atraves do vetortempo) dada ordenacao do vetorordenado:
    int tempo = 0;
    for(int i=0; i<n-1; i++) {
      for(int j=0; j<n-1-i; j++) {
        if(vetorordenado[j]>vetorordenado[j+1]) {
          swap(vetorordenado[j], vetorordenado[j+1]);
          tempo = tempo + vetortempo[j] + vetortempo[j+1];
          swap(vetortempo[j], vetortempo[j+1]);
        }
      }
    }
  cout << tempo << endl;

  } //while
return 0;
}
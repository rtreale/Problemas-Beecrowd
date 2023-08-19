#include <iostream>
using namespace std;

int main() {
  int casosdetestes;

  cin >> casosdetestes;
  cin.ignore();

  while(casosdetestes!=0) {
    int alunos;
    cin >> alunos;

    int vetornotas[alunos];
    int vetoraux[alunos];

    for(int i=0;i<alunos;i++) {
      cin >> vetornotas[i];
      vetoraux[i] = vetornotas[i];
    }
    
    /*
    for(int i=0;i<alunos;i++) {
      cout << vetornotas[i] << " ";
    }
    cout << endl;
    */

    int menor_i,aux;

    for(int j=0;j<alunos-1;j++) {
      menor_i = j;
      for(int i=j+1;i<alunos;i++) {
        if(vetornotas[i]>vetornotas[menor_i]) {
          menor_i = i; 
        }
      }

      aux = vetornotas[j];
      vetornotas[j] = vetornotas[menor_i];
      vetornotas[menor_i] = aux;

    }
    /*
    for(int i=0;i<alunos;i++) {
      cout << vetornotas[i] << " ";
    }
    cout << endl;

    for(int i=0;i<alunos;i++) {
      cout << vetoraux[i] << " ";
    }
    cout << endl;
    */
    int a = 0;

    for(int i=0;i<alunos;i++) {
      if(vetornotas[i]!=vetoraux[i]) {
        a++;
      }
    }

    



    cout << alunos-a << endl;

    casosdetestes--;
  }


}
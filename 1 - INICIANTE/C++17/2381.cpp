#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
  unsigned int qntd_de_alunos;
  unsigned int numero_sorteado;

  cin >> qntd_de_alunos >> numero_sorteado;
  cin.ignore();

  numero_sorteado--; //P/ acessar string em posicao N-1;

  string nome_de_alunos[qntd_de_alunos];

  for(int i=0;i<(qntd_de_alunos);i++) {
    cin >> nome_de_alunos[i];
  }

/*
  //Depuracao da string nome_de_alunos:
  for(int i=0;i<(qntd_de_alunos);i++) {
    cout << nome_de_alunos[i] << " ";
  }  
  cout << endl;
*/

  //Ordenacao crescente com Buble sort:
  for(int j=0;j<(qntd_de_alunos-1);j++){
    for(int k=0;k<(qntd_de_alunos-1-j);k++){
      if(nome_de_alunos[k]>nome_de_alunos[k+1]) {
        swap(nome_de_alunos[k], nome_de_alunos[k+1]);
      }
    }
  }

/*
  //Depuracao apos Ordenacao crescente:
    for(int i=0;i<(qntd_de_alunos);i++) {
    cout << nome_de_alunos[i] << " ";
  }  
    cout << endl;
*/

  cout << nome_de_alunos[numero_sorteado] << endl;  

return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
 
 
  int n;

  while(cin >> n && n>0 && n<11) {
 
  string produtos[n];
  int data_de_validade[n], data_de_validade_ordenado[n];

  for(int i=0; i<n; i++) {

  cin >> produtos[i] >> data_de_validade[i];
  data_de_validade_ordenado[i] = data_de_validade[i];
  }

  /*
  //Saida Produtos n ordenada
  cout << "Produtos n ordenado: ";
  for(int i=0; i<n; i++) {
    cout << produtos[i] << " ";
  }
  cout << endl;


  //Saida data de validade n ordenada
  cout << "Data de Validade n ordenada: ";
  for(int i=0; i<n; i++) {
    cout << data_de_validade[i] << " ";
  }
  cout << endl;
  */

  //Ordenando produtos com base na ordenacao das datas de validade.
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-1-i; j++){
      if(data_de_validade_ordenado[j]>data_de_validade_ordenado[j+1]){
        swap(data_de_validade_ordenado[j], data_de_validade_ordenado[j+1]);
        swap(produtos[j], produtos[j+1]);
      }
    }
  }

 
  //Saida Produtos ordenada
  /*cout << "Produtos ordenado: ";*/
  for(int i=0; i<n-1; i++) {
    cout << produtos[i] << " ";
  }
  cout << produtos[n-1] << endl;
 
  /*
  //Saida data de validade ordenada
  cout << "Data de Validade ordenada: ";
  for(int i=0; i<n; i++) {
    cout << data_de_validade_ordenado[i] << " ";
  }
  cout << endl;
  */
  }
return 0;
}
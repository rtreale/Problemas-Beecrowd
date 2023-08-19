#include <iostream>
#include <iomanip>
using namespace std;

void matrizdiagonalsecundariasuperior(double matriz[12][12], double &soma) {
  string operacao;
  cin >> operacao;

  for(int l=0; l<12; l++){
    for(int c=0; c<12; c++){
      cin >> matriz[l][c];
    }
  }
  
  for(int l=0; l<12; l++){
    for(int c=0; c<12; c++){
      if(l+c>=11) matriz[l][c] = 0; 
      if(l>=c) matriz[l][c] = 0;
    }
  }
  soma = 0;
   for(int l=0; l<12; l++){
    for(int c=0; c<12; c++){
      soma += matriz[l][c]; 
    }
  }
  
  if(operacao=="S") {
    cout << fixed << setprecision(1) << soma << endl;
    return;
  }
  else if(operacao=="M") {
    cout << fixed << setprecision(1) << soma/30 << endl;
    return;
  }
  else return matrizdiagonalsecundariasuperior(matriz, soma);
}

void saidadematriz(double matriz[12][12]){
   for(int l=0; l<12; l++){
    for(int c=0; c<12; c++){
      cout << matriz[l][c] << " ";
    }
    cout << endl;
  }
}

int main() {
 
 double matriz[12][12], soma;

 matrizdiagonalsecundariasuperior(matriz, soma);
 return 0;
}
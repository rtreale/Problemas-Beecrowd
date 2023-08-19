#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int n,i,a,menor,maior,igualdade;

menor = 0;
maior = 0;
igualdade = 1;
a = 0;

cin >> n;

int vet[n];

// Preencher vetor[n] entradas;
for (i=0;i<n;i++) {   
  cin >> vet[i];
}

// Verificar qual vetor Max antes do Min;
for (i=0;i<n-1;i++) {
  if (vet[i]>vet[i+1]) {
    maior = i;
    break;
  }
  else {
    igualdade++;
  }
}

//cout << maior << endl; // Nº no vet do maior valor

if (igualdade==n) {
  cout << "0" << endl;
}
  
else {
 cout << maior+2<< endl; 
}








return 0;
}
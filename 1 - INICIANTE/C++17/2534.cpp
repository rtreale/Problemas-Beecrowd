#include <iostream>
#include <iostream>
using namespace std;

int main(){ 
		
unsigned int n,q; //N = N de habitantes || Q = N de consultas ao programa.
while(cin >> n >> q) {
  int vetor_notas[n];

  for(int i=0; i<n; i++) {
  cin >> vetor_notas[i];
  }

  //Ordenando vetor notas de forma crescente com buble sort:
  for (int j=0; j<n-1; j++) {
  for(int k=0; k<n-1-j; k++){
    if(vetor_notas[k]<vetor_notas[k+1]){
    swap(vetor_notas[k], vetor_notas[k+1]); 
    }
  }
  }

  int buscaemvetor[q];
  for(int a=0; a<q; a++) {
  cin >> buscaemvetor[a];
  }

  for(int i=0; i<q; i++) {
    cout << vetor_notas[buscaemvetor[i]-1] << endl;
  }
  }

return 0;
}
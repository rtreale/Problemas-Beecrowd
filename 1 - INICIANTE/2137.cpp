#include <iostream>
using namespace std;

int main() {
  
  
    int n;

    while(cin >> n) {
    cin.ignore();

    int vetor[n];

    for(int i=0;i<n;i++) {
      cin >> vetor[i];
    }

    /*
    cout << "vetor vet: ";
    for(int i=0;i<n;i++) {
      cout << vetor[i] << " ";
    }
    cout << endl;
    */
    
    int i,j,menor_i,aux;
     for(j=0;j<n-1;j++) {
       menor_i = j; 
       for(i = j+1;i<n;i++) {
         if(vetor[i]<vetor[menor_i]) {
           menor_i = i;
         }
       }
       aux = vetor[j];
       vetor[j] = vetor[menor_i];
       vetor[menor_i] = aux;
     }

    /* 
    cout << "vetor vet ordenado: ";
    for(int i=0;i<n;i++) {
      cout << vetor[i] << " ";
    }
    cout << endl;
    */

    for(int z=0;z<n;z++) {
      if(vetor[z]>999) {
        cout << vetor[z] << endl;
      }
      else if((vetor[z]<=999)&&(vetor[z]>99)) {
        cout << "0" << vetor[z] << endl;
      }
      else if((vetor[z]<=99)&&(vetor[z]>9)) {
        cout << "00" << vetor[z] << endl;
      }
      else if((vetor[z]<=9)&&(vetor[z]>=0)) {
        cout << "000" << vetor[z] << endl;
      }
    
    }

  }
}
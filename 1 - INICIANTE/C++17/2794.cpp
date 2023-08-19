#include <iostream>
using namespace std;

int main() {
 
  int n; //N de montes

  cin >> n;

  int distancia[n], tonalidade[n];

  for(int i=0; i<n; i++) {
    cin >> distancia[i] >> tonalidade[i];
  }
 
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-1-i; j++){
      if(distancia[j]>distancia[j+1]){
        swap(distancia[j], distancia[j+1]);
        swap(tonalidade[j], tonalidade[j+1]);
      }
    }
  }

  int a=0;
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
      if(tonalidade[j]<tonalidade[j+1]){
        a++;
      }
    }
  }

  if(a==0) {
    cout << "S" << endl;
  }
  else {
     cout << "N" << endl;
  }




return 0;
}
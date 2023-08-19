#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    
unsigned int n; //Casos de teste

while(cin >> n) {

  double medidas[n];

  for(int i=0; i<n; i++) {
    cin >> medidas[i];
  }


  
  //Ordenando crescente buble sort.
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-1-i; j++) {
      if(medidas[j]<medidas[j+1]){
        swap(medidas[j], medidas[j+1]);
      }
    }
  }
  

  double mediana;
  mediana = medidas[n/2];

 
   float contador=0;
   float aux;
   for(int i=0; i<n; i++) {
    if(medidas[i]!=mediana) {
      aux = medidas[i];
      if(aux>mediana){
        contador = contador + (aux-mediana);
      }
      else if(aux<mediana) {
        contador = contador + (mediana-aux);
      }
    }
  }

  cout << fixed << setprecision(2) << contador << endl;

}




return 0;
}
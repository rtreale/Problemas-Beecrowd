#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int n; // casos de teste 

cin >> n;
 for(int i=0; i<n; i++){

 int m; //tam vetor
 cin >> m;
 int lista[m], vetimpar[m];
 int tamimpar=0;

 for(int i=0, j=0; i<m; i++){
   cin >> lista[i];
   if(lista[i]%2!=0){
     vetimpar[j] = lista[i];
     j++;
     tamimpar++;
   }
 }


 if(tamimpar==0) {
   cout << endl;
 }
 else if(tamimpar>0){

  
 for(int i=0; i<tamimpar-1; i++){
   for(int k=0; k<tamimpar-1-i; k++){
     if(vetimpar[k]<vetimpar[k+1]){
       swap(vetimpar[k], vetimpar[k+1]);
     }
   }
 }


if(tamimpar%2==0){
 for(int i=0, j=tamimpar-1; i<j; i++, j--){
   cout << vetimpar[i] << " " << vetimpar[j]; if(i<j-1){
     cout << " ";
   }
 }
cout << endl;
}
else{
  for(int i=0, j=tamimpar-1; i<j; i++, j--){
   cout << vetimpar[i] << " " << vetimpar[j] << " ";
 }
cout << vetimpar[tamimpar/2] << endl;
}
 }
}
  return 0;
}
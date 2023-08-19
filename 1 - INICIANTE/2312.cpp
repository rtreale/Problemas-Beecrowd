#include <iostream>
#include <iomanip>
using namespace std;

int main (){

 int n; 
 cin >> n;

 string paises[n];
 int ouro[n], prata[n], bronze[n];
 
 for(int i=0; i<n; i++) {
  cin >> paises[i] >> ouro[i] >> prata[i] >> bronze[i];
  }

 for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if(ouro[j]<ouro[j+1]){
    swap(paises[j], paises[j+1]);
    swap(ouro[j], ouro[j+1]);
    swap(prata[j], prata[j+1]);
    swap(bronze[j], bronze[j+1]);	
  }
 }
}

 for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((ouro[j]==ouro[j+1])&&(prata[j]<prata[j+1])){
    swap(paises[j], paises[j+1]);
    swap(ouro[j], ouro[j+1]);
    swap(prata[j], prata[j+1]);
    swap(bronze[j], bronze[j+1]);	
  }
 }
}

  for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((ouro[j]==ouro[j+1])&&(prata[j]==prata[j+1])&&(bronze[j]<bronze[j+1])){
    swap(paises[j], paises[j+1]);
    swap(ouro[j], ouro[j+1]);
    swap(prata[j], prata[j+1]);
    swap(bronze[j], bronze[j+1]);	
  }
 }
}
 
  for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((ouro[j]==ouro[j+1])&&(prata[j]==prata[j+1])&&(bronze[j]==bronze[j+1])&&(paises[j]>paises[j+1])){
    swap(paises[j], paises[j+1]);
    swap(ouro[j], ouro[j+1]);
    swap(prata[j], prata[j+1]);
    swap(bronze[j], bronze[j+1]);	
  }
 } 
}


for(int i=0; i<n; i++){
   cout << paises[i] << " " << ouro[i] << " " << prata[i] << " " << bronze[i] << endl; 
 }



return 0;
}
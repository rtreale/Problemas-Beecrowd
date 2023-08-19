#include <iostream>
#include <iomanip>
using namespace std;

int main(){

 int n;

while(cin >> n){
 int virus[n];

 for(int i=0; i<n; i++){
   cin >> virus[i];
 }
 
 for(int i=0; i<n-1; i++){
   for(int j=0; j<n-1-i; j++){
     if(virus[j]>virus[j+1]){
       swap(virus[j], virus[j+1]);
     }
   }
 }

 int soma=0;

 for(int i=0, j=n-1; i<j; i++, j--){
   soma = soma+abs(virus[i]-virus[j]);
 }

cout << soma << endl;
}
  
  return 0;
}
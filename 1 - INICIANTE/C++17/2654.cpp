#include <iostream>
#include <iomanip>
using namespace std;

int main (){

 int n; 
 cin >> n;

 string deuses[n];
 int power[n], kills[n], deaths[n];
 
 for(int i=0; i<n; i++) {
  cin >> deuses[i] >> power[i] >> kills[i] >> deaths[i];
  }

 for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if(power[j]<power[j+1]){
    swap(deuses[j], deuses[j+1]);
    swap(power[j], power[j+1]);
    swap(kills[j], kills[j+1]);
    swap(deaths[j], deaths[j+1]);	
  }
 }
}

 for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((power[j]==power[j+1])&&(kills[j]<kills[j+1])){
    swap(deuses[j], deuses[j+1]);
    swap(power[j], power[j+1]);
    swap(kills[j], kills[j+1]);
    swap(deaths[j], deaths[j+1]);	
  }
 }
}

  for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((power[j]==power[j+1])&&(kills[j]==kills[j+1])&&(deaths[j]>deaths[j+1])){
    swap(deuses[j], deuses[j+1]);
    swap(power[j], power[j+1]);
    swap(kills[j], kills[j+1]);
    swap(deaths[j], deaths[j+1]);	
  }
 }
}
 
  for(int i=0; i<n-1; i++){
  for(int j=0; j<n-1-i; j++){
   if((power[j]==power[j+1])&&(kills[j]==kills[j+1])&&(deaths[j]==deaths[j+1])&&(deuses[j]>deuses[j+1])){
    swap(deuses[j], deuses[j+1]);
    swap(power[j], power[j+1]);
    swap(kills[j], kills[j+1]);
    swap(deaths[j], deaths[j+1]);	
  }
 } 
}

cout << deuses[0] << endl;



return 0;
}
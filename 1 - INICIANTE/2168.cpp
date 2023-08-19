#include <iostream>
using namespace std;

void tammatriz(int &n){
  cin >> n;
  if(n<1) return tammatriz(n);
  else return;
}


int main() {
 
  int n;

  tammatriz(n);

  int matriz[n+1][n+1];
  for(int l=0; l<n+1; l++){
   for(int c=0; c<n+1; c++){
     cin >> matriz[l][c];
   }
  }
  
 int cam=0;
 int cont=0;
 for(int l=0, l1=1; l<n+1 && l1<n+1; l++, l1++){
   for(int c=0, c1=1; c<n+1 && c1<n+1; c++, c1++){
   cam = matriz[l][c]+matriz[l1][c]+matriz[l][c1]+matriz[l1][c1];
    if(cam>=2) {
      cout << "S";
      cam = 0;
    }
    else {
      cout << "U";
      cam = 0;
    }
   }
   cout << endl;
 }


return 0;
}
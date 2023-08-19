#include <iostream>

using namespace std;


void tam_matriz(int &n, int &m) {
  cin >> n >> m;
  if((n<3)||(n>1000)||(m<3)||(m>1000)){
    return tam_matriz(n,m);
  }
}

int main() {

int n, m;
tam_matriz( n, m);

int matriz[n+1][m+1];
for(int l=1; l<n+1; l++){
   for(int c=1; c<m+1; c++){
     cin >> matriz[l][c]; 
   }
 }

for(int l=2; l<n; l++) {
  for(int c=2; c<m; c++) {
    if(matriz[l][c]==42){
      if ((matriz[l-1][c-1]==7)&&(matriz[l-1][c]==7)&&(matriz[l-1][c+1]==7)&&(matriz[l][c-1]==7)&&(matriz[l][c+1]==7)&&(matriz[l+1][c-1]==7)&&(matriz[l+1][c]==7)&&(matriz[l+1][c+1]==7)) {
        cout << l << " " << c << endl;
        return 0;
      }
    }
  }
}

cout << "0 0" << endl;
return 0;
}
#include <iostream>

using namespace std;


void tam_matriz(int &n) {
  cin >> n;
  if((n<2)||(n>10)){
    return tam_matriz(n);
  }
}

int main() {

int n;
tam_matriz(n);

int matriz[n+1][n+1];
for(int l=1; l<n+1; l++){
   for(int c=1; c<n+1; c++){
     cin >> matriz[l][c]; 
   }
 }

int linhasmatriz[n+1];
for(int i=1; i<n+1; i++){
  linhasmatriz[i]=0;
}
for(int l=1, pos=1; l<n+1; l++, pos++){
  for(int c=1; c<n+1; c++){
    linhasmatriz[pos] += matriz[l][c];
  }
}

int colunasmatriz[n+1];
for(int i=1; i<n+1; i++){
  colunasmatriz[i]=0;
}
for(int c=1, pos=1; c<n+1; c++, pos++){
  for(int l=1; l<n+1; l++){
    colunasmatriz[pos] += matriz[l][c];
  }
}

int diagonal[3];
for(int i=1; i<3; i++){
  diagonal[i]=0;
}
for(int l=1, c=1; l<n+1 && c<n+1; l++, c++){
  diagonal[1] += matriz[l][c]; //primaria
}
for(int l=1; l<n+1; l++){
  for(int c=1; c<n+1; c++){
    if(l+c==n+1) diagonal[2] += matriz[l][c];
  }
}

int padrao=linhasmatriz[1];
for(int i=1, o=1; i<n+1 && o<3; i++, o++){
  if((linhasmatriz[i]!=padrao)||(colunasmatriz[i]!=padrao)||(diagonal[o]!=padrao)) {
    cout << "-1" << endl;
    return 0;
  } 
}

cout << padrao << endl;
return 0;
}
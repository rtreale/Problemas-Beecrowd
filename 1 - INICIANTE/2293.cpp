#include <iostream>

using namespace std;


void tam_matriz(int &n, int &m) {
  cin >> n >> m;
  if((n<1)||(n>100)||(m<1)||(m>100)){
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

int linhasmatriz[n+1];
for(int i=1; i<n+1; i++){
  linhasmatriz[i]=0;
}
for(int l=1, pos=1; l<n+1; l++, pos++){
  for(int c=1; c<m+1; c++){
    linhasmatriz[pos] += matriz[l][c];
  }
}

int colunasmatriz[m+1];
for(int i=1; i<m+1; i++){
  colunasmatriz[i]=0;
}

for(int c=1, pos=1; c<m+1; c++, pos++){
  for(int l=1; l<n+1; l++){
    colunasmatriz[pos] += matriz[l][c];
  }
}

int maior=linhasmatriz[1];
for(int i=2; i<n+1; i++){
 if(linhasmatriz[i]>maior){
   maior = linhasmatriz[i];
 }
}
for(int j=1; j<m+1; j++){
  if(colunasmatriz[j]>maior){
    maior = colunasmatriz[j];
  }
}

cout << maior << endl;

return 0;
}
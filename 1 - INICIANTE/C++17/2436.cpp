#include <iostream>

using namespace std;


void dimensoes(int &L, int &C) {
  cin >> L >> C;
  if((L<1)||(L>1000)||(C<1)||(C>1000)){
    return dimensoes(L, C);
  }
}

void posini(int &Lo, int &Co) {
  cin >> Lo >> Co;
  if((Lo<1)||(Co<1)){
    return posini(Lo, Co);
  }
}


int main() {

int L,C;
int Lo,Co;

dimensoes(L,C);
posini(Lo,Co);


int caminho[1000+2][1000+2];

for(int l=0; l<=L+1; l++){
  for(int c=0; c<=C+1; c++) {
    caminho[l][c] = 0;
  }
}

for(int l=1; l<L+1; l++){
  for(int c=1; c<C+1; c++){
    cin >> caminho[l][c];
  }
}



int numvizinhos = 0;
for(int l=1; l<L+1; l++){
  for(int c=1; c<C+1; c++){
    if(caminho[l][c]==0) continue;
    
    numvizinhos = caminho[l+1][c] + caminho[l-1][c] + caminho[l][c+1] + caminho[l][c-1];

    if(numvizinhos==1 && (l!=Lo || c!=Co)) {
      cout << l << " " << c << endl;
      return 0;
    } 
  }
}



return 0;
}
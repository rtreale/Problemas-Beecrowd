#include <iostream>
using namespace std;

int main() {
  
  int i,u;
  int n;

cin >> n;

int veta[n],saida[n],vetb[n];

for(i=1;i<=n;i++){
  vetb[i] = 0;
  veta[i] = 0;
 saida[i] = 0;
}

for(i=1;i<=n;i++) {
  cin >> veta[i];
  vetb[i] = veta[i];
}

for(u=1;u<=n;u++) {
  for(i=1;i<=n;i++) {
   if(veta[i]!=0) { 
    if(veta[i]==vetb[u]) {
      saida[u] += 1;
      veta[i] = 0;
    }
    }
  }
}

int aux;

aux = 0;
for(i=1;i<=n;i++) {
  if(saida[i]>aux) {
    aux = saida[i];
  }
}

for(i=1;i<=n;i++){
  if(saida[i]!=aux) {
    saida[i] = 0;
  }
  if(saida[i]==aux) {
    saida[i] = vetb[i];
  }
}

aux = 0;
for(i=1;i<=n;i++) {
  if(saida[i]>aux) {
    aux = saida[i];
  }
}

cout << aux << endl;

  return 0;
}

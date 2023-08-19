#include <iostream>
#define MAX 100
using namespace std;

int main() {

int i,u;
int pedras,sapos;

cin >> pedras >> sapos;

int caminho[MAX];

for(i=0;i<MAX;i++){
  caminho[i]=0;
}

int posicaoinicial,pulos;

for(i=0;i<sapos;i++) {
  cin >> posicaoinicial >> pulos;
  posicaoinicial--;

  for(u=posicaoinicial;u<pedras;u+=pulos) {
    caminho[u] = 1;
  }
  for(u=posicaoinicial;u>=0;u-=pulos){
    caminho[u] = 1;
  }
}

//cout << endl << "Saida do vetor caminho: " << endl;
for(i=0;i<pedras;i++){
  cout << caminho[i] << endl;
}







  return 0;
}

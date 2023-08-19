#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int n,t,i,menor,posicaomenor,igualdade;

cin >> n;

int pancadas[n];

for (i=0;i<n;i++) {

cin >> pancadas[i]; 

}

menor = pancadas[0];

for (i=0;i<n;i++) {
 if (pancadas[i]<menor) {
   menor = pancadas[i];
   }
}

for (i=0;i<n;i++) {
  if (pancadas[i]==menor) {
    posicaomenor = i+1;
    break;
  }
}

cout << posicaomenor << endl;

return 0;
}
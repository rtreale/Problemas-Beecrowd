#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 int i,o,q,m,n,aux,ini;
 int a,b,w;
 q = 0;

do {
cin >> m >> n;
int vet[n];
for (i=0;i<n;i++) {
  cin >> vet[i];
}

for (i=0;i<n;i++) { // Ordenando vetor
  for (o=i+1;o<n;o++) {
    if (vet[i]>vet[o]) {
       aux = vet[i];
       vet[i] = vet[o];
       vet[o] = aux;
    }
  }
}

for(i=1;i<n;i++) {
   if(vet[i]==vet[i-1]) {
     q++;
   }
   while (vet[i]==vet[i-1]&&vet[i]==vet[i+1]) {
     i++;
   }
}
if (q!=0) {
     cout << q << endl;
     q = 0;
}
} // Do





while ((n!=0)||(m!=0));
 return 0;
} // Main

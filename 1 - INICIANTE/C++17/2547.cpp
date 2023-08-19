#include <iomanip>
#include <iostream>
using namespace std;

int main(){
int n,a0,af,i,a;



while (cin >> n >> a0 >> af) {

int vet[n];  // Criei Vetor

for (i=0;i<n;i++) {  // Preennchendo Vetor
cin >> vet[i];
}

a = 0;  // Contador 

for (i=0;i<n;i++) {
  if ((vet[i]>=a0) && (vet[i]<=af)) {
    a++;
    }
}

cout << a << endl;

}



return 0;
}
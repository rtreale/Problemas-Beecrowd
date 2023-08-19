#include <iomanip>
#include <iostream>
using namespace std;

int main(){
int t,i;
float menor,maior;

while (cin >> t) {

float vet[t];

for (i=0;i<t;i++) {
 cin >> vet[i];
}

menor = 0;

for (i=0;i<t-1;i++) {
 if (vet[i+1]<vet[i]) {
   menor = vet[i+1];
 } 
}

if (vet[0]<menor) {
  cout << vet[0] << endl;
}
else {
cout << menor << endl;
}

}


return 0;
}
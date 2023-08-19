#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int n,i,a2,a3,a4,a5;
a2 = 0; a3 = 0; a4 = 0; a5 = 0;  

cin >> n;

int vet[n];

for (i=0;i<n;i++) {
cin >> vet[i];
}

for (i=0;i<n;i++) {

  if (vet[i]%2==0) {
   a2++;
  }

  if (vet[i]%3==0) {
   a3++;
  }

    if (vet[i]%4==0) {
   a4++;
  }

    if (vet[i]%5==0) {
   a5++;
  }

}

cout << a2 << " Multiplo(s) de 2" << endl;
cout << a3 << " Multiplo(s) de 3" << endl;
cout << a4 << " Multiplo(s) de 4" << endl;
cout << a5 << " Multiplo(s) de 5" << endl;



return 0;
}
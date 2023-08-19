#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int n,i,j;


cin >> n;

int vet[3];


for (j=0;j<n;j++) {
for (i=0;i<3;i++) {
   cin >> vet[i];
}

if (vet[0]<10) {
  cout << "0" << vet[0];
}
else if (vet[0]>=10) {
  cout << vet[0];
}

cout << ":";

if (vet[1]<10) {
  cout << "0" << vet[1];
}
else if (vet[1]>=10) {
  cout << vet[1];
}

cout << " - ";


if (vet[2]==1) {
  cout << "A porta abriu!" << endl;
}
else if (vet[2]==0) {
  cout << "A porta fechou!" << endl;
}

}




return 0;
}
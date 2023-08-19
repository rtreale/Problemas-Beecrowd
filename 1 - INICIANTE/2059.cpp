#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int p,j1,j2,r,a;

cin >> p >> j1 >> j2 >> r >> a;

if (a==0) {
  if (r==1) {
    cout << "Jogador 1 ganha!" << "\n";
  return 0;
  }
 }

if (a==1) {   // a = 1 = Acusar;
 if (r==1) {  // r = 1 = Aceito;
   cout << "Jogador 2 ganha!" << "\n";
 }
}

if (a==1) {   // a = 1 = Acusar;
  if (r==0) {
    cout << "Jogador 1 ganha!" << "\n";
}
}

if (a==0) {
   if (r==0) {
     if ((p==1) && (j1+j2)%2==0) {
       cout << "Jogador 1 ganha!" << "\n";
     }
     else if ((p==0)&& (j1+j2)%2!=0) {
       cout << "Jogador 1 ganha!" << "\n";
     }
     else {
       cout << "Jogador 2 ganha!" << "\n";
     }
   }
} 




return 0;
}
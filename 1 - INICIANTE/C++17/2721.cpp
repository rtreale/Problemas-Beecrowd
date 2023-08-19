#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int a;
  int n = 0;
  int entrada[9];
   


 for (int i=0; i<=8;i++) {
   cin >> a;
   entrada[i] = a;
 }

 for (int z=0; z<=8;z++) {
   n += entrada[z];
 } 

 if (n%9==0) {
   cout << "Rudolph\n";
 }
 if (n%9==1) {
   cout << "Dasher\n";
 }
 if (n%9==2) {
   cout << "Dancer\n";
 }
 if (n%9==3) {
   cout << "Prancer\n";
 }
 if (n%9==4) {
   cout << "Vixen\n";
 }
 if (n%9==5) {
   cout << "Comet\n";
 }
 if (n%9==6) {
   cout << "Cupid\n";
 }
 if (n%9==7) {
   cout << "Donner\n";
 }
 if (n%9==8) {
   cout << "Blitzen\n";
 }
 
 

    return 0;
}


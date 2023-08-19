#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int p,q,i,cod;
float a,b,c,d,e;
a = 0; b = 0; c = 0; d = 0; e = 0;
// p = produtos comprados
// q = qnt de produtos

cin >> p;


for (i=0;i<p;i++) {
cin >> cod;

if (cod==1001) {
  a = 1.50;
  cin >> q;
  a = q*a;
}

if (cod==1002) {
  b = 2.50;
  cin >> q;
  b = q*b;
}

if (cod==1003) {
  c = 3.50;
  cin >> q;
  c = q*c;
}

if (cod==1004) {
  d = 4.50;
  cin >> q;
  d = q*d;
}

if (cod==1005) {
  e = 5.50;
  cin >> q;
  e = q*e;
}

}

cout << fixed << setprecision(2) << (a+b+c+d+e) << endl;


return 0;
}
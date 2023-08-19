#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
double a,b,c,x,y,z;
cin >> a >> b >> c;


if (b>=a && c>b) {
  y = a;
  a = c;
  c = y;
}

if (b>=a && c<=b) {
  x = a;
  a = b;
  b = x;
}

if (a>=b && a>c) {
  a = a;
  b = b;
  c = c;
}

if (b<c) {
  z = b;
  b = c;
  c = z;
}

//cout << a << "\n" <<  b << "\n" << c << "\n";


if (a>=(b+c)) {
  cout << "NAO FORMA TRIANGULO" << "\n";
  return 0;
}
if (pow(a,2)==(pow(b,2)+pow(c,2))) {
  cout << "TRIANGULO RETANGULO" << "\n";
}

if (pow(a,2)>(pow(b,2)+pow(c,2))) {
  cout << "TRIANGULO OBTUSANGULO" << "\n";
}

if (pow(a,2) < (pow(b,2)+pow(c,2))) {
  cout << "TRIANGULO ACUTANGULO" << "\n";
  }

if ((a==b)&&(b==c)&&(c==a)) {
  cout << "TRIANGULO EQUILATERO" << "\n";
}

if (((a==b)&&(c!=a)) || ((b==c)&&(a!=b))) {
  cout << "TRIANGULO ISOSCELES" << "\n";
}





return 0;
}
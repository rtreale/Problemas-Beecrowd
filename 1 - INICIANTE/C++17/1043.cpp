#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a,b,c,x,y;

  cin >> a >> b >> c;

  x = a + b + c; // Perimetro Triangulo
  y = ((a+b)*c)/2; // Area Trapezio

  if ((abs(b-c)<a && a<(b+c)) || (abs(a-c)<b && b<(a+c)) || (abs(a-b)<c && c<(a+b))) {
    cout << fixed << setprecision(1) << "Perimetro = " << x << "\n";
  }
  else {
    cout << fixed << setprecision(1) << "Area = " << y << "\n";
  }
return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  const double pi = 3.14159;
  double a,b,c,x1,x2,x3,x4,x5;
  cin >> a >> b >> c; 

  x1 = (a*c)/2;
  x2 = pi*pow(c,2);
  x3 = ((a+b)*c)/2;
  x4 = pow(b,2);
  x5 = a*b;

  

  cout << fixed << setprecision(3) <<
  "TRIANGULO: " << x1 << "\n" <<
  "CIRCULO: " << x2 << "\n" <<
  "TRAPEZIO: " << x3 << "\n" <<
  "QUADRADO: " << x4 << "\n" <<
  "RETANGULO: " << x5 << "\n";
  
  return 0;
  
}
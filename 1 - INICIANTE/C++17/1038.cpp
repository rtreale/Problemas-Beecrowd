#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  int x,y;
  double a,b,c,d,e,a1,b1,c1,d1,e1;
  cin >> x >> y;
  
  a = 4;
  b = 4.50;
  c = 5;
  d = 2;
  e = 1.50;

  a1 = y*a;
  b1 = y*b;
  c1 = y*c;
  d1 = y*d;
  e1 = y*e;


  if (x==1) {
    cout << fixed << setprecision(2) << "Total: R$ " << a1 << "\n";
  }

  else if (x==2) {
    cout << fixed << setprecision(2) << "Total: R$ " << b1 << "\n";
  }

  else if (x==3) {
    cout << fixed << setprecision(2) << "Total: R$ " << c1 << "\n";
  }

  else if (x==4) {
    cout << fixed << setprecision(2) << "Total: R$ " << d1 << "\n";
  }

  else if (x==5) {
    cout << fixed << setprecision(2) << "Total: R$ " << e1 << "\n";
  }
  
  else  {

  }
  

return 0;  
}
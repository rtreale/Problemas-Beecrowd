#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int a,b,c,d,e,f;
  cin >> a >> b >> c;
  d = a+b+c;

  if (d>=24) {
    e = d-24;
    cout << e << "\n";
  }

  else if (d<0) {
    f = d+24;
    cout << f << "\n";
  }

  else {
    cout << d << "\n";
  }
  
return 0;
}
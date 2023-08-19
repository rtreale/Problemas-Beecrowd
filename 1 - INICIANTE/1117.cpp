#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

float a,b,x,y;
x = 0;
y = 0;

do {
  cin >> a;
  if (a>=0 && a<=10) {
    x = a;
  }
  else {
    cout << "nota invalida" << "\n";
  }
} while (a<0 || a>10);

do {
  cin >> b;
  if (b>=0 && b<=10) {
   y = b;
  }
  else {
    cout << "nota invalida" << "\n";
  }
} while (b<0 || b>10);

cout << "media = " << (a+b)/2 << "\n";

return 0;


}
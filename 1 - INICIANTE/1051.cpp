#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a,r0,r1,r2;

  cin >> a;

  if (a<=2000.00) {
    cout << fixed << setprecision(2) << "Isento" << "\n";
  }
  else if (a>2000.00 && a<=3000.00) {
    r0 = ((a-2000)*0.08);
    cout << fixed << setprecision(2) << "R$ " << r0 << "\n";
  }
  else if (a>3000.00 && a<=4500.00) {
    r1 = (((a-3000)*0.18)+(1000*0.08));
    cout << fixed << setprecision(2) << "R$ " << r1 << "\n";
  }
  else {
    r2 = (((a-4500)*0.28+(1500*0.18)+(1000*0.08)));
    cout << fixed << setprecision(2) << "R$ " << r2 << "\n";
  }
   
return 0;
}
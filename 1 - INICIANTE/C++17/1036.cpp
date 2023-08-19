#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  double a,b,c,x,r1,r2;
  cin >> a >> b >> c;

  x = (pow(b,2)-(4*a*c));
  r1 = (-b-pow(x,0.5))/(2*a);
  r2 = (-b+pow(x,0.5))/(2*a);

   
  if ((x<=0)||(a==0)) {

    cout << "Impossivel calcular" << "\n";
 
  }

  else  {
    cout << fixed << setprecision(5) << "R1 = " << r2 << "\n" << "R2 = " << r1 << "\n";
  }  


return 0;  
}
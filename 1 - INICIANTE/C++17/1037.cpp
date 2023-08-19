#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
  double x;
  int a,b,c,d,e;
  cin >> x;

  a = 0;
  b = 25;
  c = 50;
  d = 75;
  e = 100;

   
  if ((x>=a)&&(x<=b)) {

    cout << "Intervalo [0,25]" << "\n";
   }
  
  else if ((x>=b)&&(x<=c)) {
    cout << "Intervalo (25,50]" << "\n";
  }

  else if ((x>=c)&&(x<=d)) {
    cout << "Intervalo (50,75]" << "\n";
  }

  else if ((x>=d)&&(x<=e)) {
     cout << "Intervalo (75,100]" << "\n";
  }
   
  else {
    cout << "Fora de intervalo" << "\n";
  }
  
  

return 0;  
}
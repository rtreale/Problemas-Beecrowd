#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  const double pi = 3.14159;
  double a,x;
  
  cin >> a; 

  x =pow(a,2)*pi;

  cout << fixed << setprecision(4) << "A=" << x << "\n";
  
  return 0;
  
}
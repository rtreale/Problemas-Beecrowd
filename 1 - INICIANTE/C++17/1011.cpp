#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  const double pi = 3.14159;
  double r,v;
  cin >> r; 

  v = (4.0/3)*pi*pow(r,3);

  cout << fixed << setprecision(3) << "VOLUME = " << v << "\n";
  
  return 0;
  
}
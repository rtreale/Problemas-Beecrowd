#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  int a,b;
  double z;
  cin >> a >> b; 

  z = a*b/12.0;

  cout << fixed << setprecision(3) <<
  z << "\n";
  
  
  return 0;
  
}
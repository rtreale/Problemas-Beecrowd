#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  int x;
  double y,z;
  cin >> x >> y; 

  z = x/y;

  cout << fixed << setprecision(3) <<
  z << " km/l" << "\n";
  
  
  return 0;
  
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  double x1,x2,y1,y2,z;
  cin >> x1 >> y1 >> x2 >> y2; 

  z = pow((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))),0.5);

  cout << fixed << setprecision(4) <<
  z << "\n";
  
  
  return 0;
  
}
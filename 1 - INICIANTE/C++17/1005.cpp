#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 

{
  double a,b,media;
  cin >> a >> b; 

  media = ((a*3.5)+(b*7.5))/11;

  cout << fixed << setprecision(5) << "MEDIA = " << media << "\n";
  
  return 0;
  
}
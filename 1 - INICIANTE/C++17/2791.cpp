#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int c1,c2,c3,c4;

  cin >> c1 >> c2 >> c3 >> c4;

  if (c1==1 && c2==0 && c3==0 && c4==0) {
  cout << "1" << "\n";
  }
  else if (c1==0 && c2==1 && c3==0 && c4==0) {
  cout << "2" << "\n";
  }
  else if (c1==0 && c2==0 && c3==1 && c4==0) {
  cout << "3" << "\n";
  }
  else if (c1==0 && c2==0 && c3==0 && c4==1)  { 
  cout << "4" << "\n";
  }
  return 0;
}
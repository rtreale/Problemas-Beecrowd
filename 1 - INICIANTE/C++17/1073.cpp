#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  
  int x,y; 
  int resultado = 0,a = 0,b = 0;
  

  cin >> x;
 
  for (int i = 1; i<=x; i++) {
   
      if (i%2==0) {
    cout << fixed << setprecision(0) << i << "^2 = " << pow(i,2) << "\n"; 
    
    }
  }
 

  return 0; 
  }
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  
  int b;
  cin >> b;

   for (int a = 1; a<=b && a<=1000; a++) {
     if (a%2!=0) {
       cout << a << "\n";
     }
   }
   
 

  return 0;
  }
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int a,x;
  int contador = 0;
  int b = 0;
  int c = 0;
  int p = 0;
  int n = 0;
  
  cin >> x;

  while (cin >> a) {
    contador++;
     if (a<=20 && a>=10) {
       b++; }
     else  {
       c++;  
      }
      if (contador==x) {
      break;
    }
  }
  
  cout << b << " in" << "\n" << c << " out" << "\n"; 
    
  return 0; 
  }

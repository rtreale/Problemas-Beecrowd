#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int a;
  int contador = 0;
  int b = 0;
  
  while (cin >> a) {
    contador++;
      if (a%2==0) {
      b++; 
    } 
      if (contador==5) {
      break;
    }
  }
  cout << b << " valores pares" <<"\n"; 

  


    
    return 0; 
  }
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  
  int b,c, contador;
  contador = 0;
  cin >> b;

   for (int a = b; ;b++) {
     if (b%2!=0) {
       contador++;
       cout << b << "\n";
     if (contador==6) break;
     }    
     
   }
   
 

  return 0;
  }
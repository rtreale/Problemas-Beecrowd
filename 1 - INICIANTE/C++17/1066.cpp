#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  int a;
  int contador = 0;
  int b = 0;
  int c = 0;
  int p = 0;
  int n = 0;
  
  while (cin >> a) {
    contador++;
      if (a%2==0) {
      b++; // n pares
    } 
      if (a%2!=0) {
      c++; // n impares
      }
      if (a>0) {
      p++; // n positivos
      }
      if (a<0) {
      n++; // n negativos
      }
      if (contador==5) {
      break;
    }
  }
  cout << b << " valor(es) par(es)" <<"\n" << c << " valor(es) impar(es)" <<"\n" << p << " valor(es) positivo(s)" <<"\n" << n << " valor(es) negativo(s)" <<"\n"; 
    
  return 0; 
  }

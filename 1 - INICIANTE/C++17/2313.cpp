#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double a,b,c,x,y;

  cin >> a >> b >> c;

  if ((abs(b - c) < a) && (abs(a - b) < c) && (abs(a - c) < b)) {
      cout << "Valido-";
       
      if ( (a==b) && (b==c)) 
      cout << "Equilatero" << "\n";
      else if ((a==b) || (a==c) || (b==c))
      cout << "Isoceles" << "\n";
      else 
      cout << "Escaleno" << "\n";
      

      if ((pow(a,2)==(pow(b,2)+pow(c,2)))||(pow(b,2)==(pow(a,2)+pow(c,2)))||(pow(c,2)==(pow(b,2)+pow(a,2)))) 
      cout << "Retangulo: S" << "\n";
      else 
      cout << "Retangulo: N" << "\n";
      
         }
  
 
  else {
    cout << "Invalido" << "\n";
  }

 

  return 0;
  }
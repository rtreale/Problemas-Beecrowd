#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  
  int x,a; 
  int contador = 0;

  cin >> x;
 
  for (int i=0; i<x; i++) {
    cin >> a;
    
    if (a==0) {
    cout << "NULL" << "\n";
    }
    
    else if (a>0 && a%2==0) {
    cout << "EVEN POSITIVE" << "\n";
    }
    else if (a>0 && a%2!=0) {
    cout << "ODD POSITIVE" << "\n";
    } 
    else if (a<0 && a%2!=0) {
    cout << "ODD NEGATIVE" << "\n";
    }
    else if (a<0 && a%2==0) {
    cout << "EVEN NEGATIVE" << "\n";
    } 
    
        
  }

  return 0;
  }

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int ho,hf,a,b;

  cin >> ho >> hf;

  a = (24 - ho) + hf;
  b = hf-ho; 

  if (ho >= hf) {
    cout << "O JOGO DUROU " << a << " HORA(S)" <<"\n";
  }
  else {
    cout << "O JOGO DUROU " << b << " HORA(S)" <<"\n";
  }
return 0;
}
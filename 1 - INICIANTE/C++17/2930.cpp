#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
 
int e,d;
cin >> e >> d;

if ((e>d)||(d>25)) {
  cout << "Eu odeio a professora!" << "\n";
  return 0;
}

if ((d-e)>=3) {
  cout << "Muito bem! Apresenta antes do Natal!" << "\n";
}

if ((d-e)<3) {
  cout << "Parece o trabalho do meu filho!" << "\n";
  if (d<23) {
    cout << "TCC Apresentado!" << "\n";
  }
  if (d>=23) {
    cout << "Fail! Entao eh nataaaaal!" << "\n";
  }
}

// Falta de orientacao da professora "Eu odeio a professora!"

return 0;
}
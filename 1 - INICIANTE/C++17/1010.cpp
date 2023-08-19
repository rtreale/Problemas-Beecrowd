#include <iostream>
#include <iomanip>
using namespace std;



int main() {

  int A,B,D,E; // PEÇA 1 E 2
  double C,F,G,H; // PEÇA 1 E 2
  
  cin >> A >> B >> C; // PEÇA 1
  cin >> D >> E >> F; //PEÇA 2

  G = B*C; // CUSTO 1
  H = E*F; // CUSTO 2

   
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << G + H << "\n";
  return 0;
  }
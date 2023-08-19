#include <iostream>
#include <iomanip>
using namespace std;



int main() {

  int A,B;
  double C,D;
  cin >> A >> B >> C;

  D = B*C;

   
  cout << "NUMBER = " << A << "\n" << fixed << setprecision(2) << "SALARY = U$ " << D <<"\n";
  return 0;
  }
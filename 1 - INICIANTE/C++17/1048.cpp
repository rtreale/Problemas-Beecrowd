#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
 float x,salario,reajuste;
 int y;
   // y = percentual do reajuste
cin >> x;


if (x<=400) {
  salario = (x*0.15)+x;
  reajuste = x*0.15;
  y = 15;
}

else if (x>=400.01 && x<=800.00) {
  salario = (x*0.12)+x;
  reajuste = x*0.12;
  y = 12;
}

else if (x>=800.01 && x<=1200.00) {
  salario = (x*0.10)+x;
  reajuste = x*0.10;
  y = 10;
}

else if (x>=1200.01 && x<=2000.00) {
  salario = (x*0.07)+x;
  reajuste = x*0.07;
  y = 7;
}

else {
  salario = (x*0.04)+x;
  reajuste = x*0.04;
  y = 4;
}

cout << fixed << setprecision(2) << "Novo salario: " << salario << "\n" << "Reajuste ganho: " << reajuste << "\n" << "Em percentual: " << y << " %" << "\n";

}
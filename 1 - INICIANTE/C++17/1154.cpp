#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int a,cases;
float contador;

contador = 0;
cases = 0;

do {
  cin >> a;
  contador += a;
  cases++; 
}
while (a>=0);

contador = (contador-a)/(cases-1);

cout << fixed << setprecision(2) << contador << endl;

return 0; 
}
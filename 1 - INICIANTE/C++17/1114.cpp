#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

int senha;

do {
  cin >> senha;
  if (senha!=2002) {
    cout << "Senha Invalida" << "\n";
  }
  }
while (senha!=2002);

cout << "Acesso Permitido" << "\n";

return 0;


}
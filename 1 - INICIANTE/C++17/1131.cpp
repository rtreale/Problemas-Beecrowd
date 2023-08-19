#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int x,y,z,est1,est2,est3,contador;
est1 = 0;
est2 = 0;
est3 = 0;
contador = 0;

do {
cin >> x >> y;
contador++;
if (x>y) {
  est1++;
}
else if (y>x) {
  est2++;
}
else {
  est3++;
}

cout << "Novo grenal (1-sim 2-nao)" << endl;
cin >> z;
}
while (z!=2);

cout << contador << " grenais" << endl;
cout << "Inter:" << est1 << endl;
cout << "Gremio:" << est2 << endl;
cout << "Empates:" << est3 << endl;



if (est1>est2) {
  cout << "Inter venceu mais" << endl;
}
else if (est2>est1) {
  cout << "Gremio venceu mais" << endl;
}
else {
  cout << "Nao houve vencedor" << endl;
}

return 0; 
}
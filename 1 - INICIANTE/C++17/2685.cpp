#include <iomanip>
#include <iostream>
using namespace std;

int main(){
int m;

while (cin >> m) {
if (m>=0 && m<90) {
cout << "Bom Dia!!" << endl;
}
if (m>=90 && m<180) {
  cout << "Boa Tarde!!" << endl;
}
if (m>=180 && m<270) {
  cout << "Boa Noite!!" << endl;
}
if (m>=270 && m<360) {
  cout << "De Madrugada!!" << endl;
}
if (m==360) {
  cout << "Bom Dia!!" << endl;
}



}

return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int n,pcarro,v;    
// n = nº de jogos na simulaçâo 
// pcarro = porta com o carro;

cin >> n;

v = 0; 
for (int i=0; i<n;i++) {
cin >> pcarro;
if (pcarro == 1) {
v = v+0;
}
else if (pcarro == 3) {
v = v + 1;
}
else if (pcarro == 2) {
v = v + 1;
}

}
cout << v << endl;

return 0;
}
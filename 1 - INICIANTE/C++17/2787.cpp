#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int l,c,x;
cin >> l >> c;

// 1 = BRANCAS & 0 = PRETAS;

if (l==c) {
  cout << 1 << "\n";
}

else if (((l%2)==0) && ((c%2)==0)) {
  cout << 1 << "\n";
} 

else if (((l%2)!=0) && ((c%2)!=0)) {
  cout << 1 << "\n";
}

else {
  cout << 0 << "\n";
}


return 0;
}
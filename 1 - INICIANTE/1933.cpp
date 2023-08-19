#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int a,b,x;
cin >> a >> b;

if (a==b) {
  x = a;
}

else if (a>b) {
  x = a;
}

else { 
  x = b;
}

cout << x << "\n"; 

return 0;
}
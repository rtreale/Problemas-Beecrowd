#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i,x[10];

  for (i=0;i<10;i++) {
    cin >> x[i];
  }
  for (i=0;i<10;i++) {
    if (x[i]<=0) {
      cout << "X[" << i << "] = " << "1" << endl;
    }
    else {
      cout << "X[" << i << "] = " << x[i] << endl;
    }
  }
return 0;

}
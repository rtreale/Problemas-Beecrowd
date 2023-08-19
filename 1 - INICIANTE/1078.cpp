#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a;
    int b = 0;


    cin >> a;
    for (int i = 1; i<=10; i++) {
      b = i*a;
      cout << i << " x " << a <<
       " = " << b << "\n";
      }
      return 0;
}
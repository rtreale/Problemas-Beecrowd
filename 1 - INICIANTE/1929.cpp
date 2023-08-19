#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
 
int a1,a2,a3,a4,m1,m2,m3;
  

cin >> a1 >> a2 >> a3 >> a4;

if ( ((a1>abs(a2-a3)) && (a1<(a2+a3))) || ((a1>abs(a3-a4)) && (a1<(a3+a4))) || ((a1>abs(a2-a4)) && (a1<(a2+a4))) || ((a2>abs(a1-a3)) && (a2<(a1+a3))) || ((a2>abs(a3-a4)) && (a2<(a3+a4))) || ((a2>abs(a1-a4)) && (a2<(a1+a4))) || ((a3>abs(a2-a4)) && (a3<(a2+a4))) || ((a3>abs(a1-a4)) && (a3<(a1+a4))) || ((a3>abs(a1-a2)) && (a3<(a1+a2))) || ((a4>abs(a1-a2)) && (a4<(a1+a2))) || ((a4>abs(a2-a3)) && (a4<(a2+a3))) || ((a4>abs(a1-a3)) && (a4<(a1+a3))) )

{
  cout << "S" << "\n";
}

else {
  cout << "N" << "\n";
}

return 0;
}
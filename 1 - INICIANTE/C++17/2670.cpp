#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int a1,a2,a3,x,m1,m2,m3;
  // a == nº de pessoas que trabalham em x andar;

cin >> a1 >> a2 >> a3;

 m1 = a2*2+a3*4; // andar 1
 m2 = a3*2+a1*2; // andar 2
 m3 = a2*2+a1*4; // andar 3

if (m1<m2 && m1<=m3) {
  cout << m1 << "\n";
  return 0;
}

if (m2<m1 && m2<=m3) {
  cout << m2 << "\n";
  return 0;
}

if (m3<m2 && m3<=m1) {
  cout << m3 << "\n";
  return 0;
}

if ((m1==m2 && m1==m3) || (m2==m1 && m2==m3) || (m3==m1 && m3==m2)) {
  cout << m1 << "\n";
  return 0;
}
if ((m1==m2)<m3) {
  cout << m1 << "\n";
  return 0;
}

if ((m1==m3)<m2) {
  cout << m1 << "\n";
  return 0;
}

if ((m2==m3)<m1) {
  cout << m2 << "\n";
  return 0;
}

return 0;
}
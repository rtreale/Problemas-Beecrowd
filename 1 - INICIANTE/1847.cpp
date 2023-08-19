#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
 
int a,b,c;
cin >> a >> b >> c;

if ((b<a) && ((c>b)||(c==b))) {
  cout << ":)" << "\n";
}
if ((b>a) && ((c<b)||(c==b))) {
  cout << ":(" << "\n";
}
if (((b>a)&&(c>b)) && (abs(c-b)<abs(b-a))) {
  cout << ":(" << "\n";
}
if (((b>a)&&(c>b)) && (abs(c-b)>=abs(b-a))) {
  cout << ":)" << "\n";
}
if (((b<a)&&(c<b)) && (abs(c-b)<abs(b-a))) {
  cout << ":)" << "\n";
}
if (((b<a)&&(c<b)) && (abs(c-b)>=abs(b-a))) {
  cout << ":(" << "\n";
}
if (((b==a)&&(c>b))) {
  cout << ":)" << "\n";
}
if (((b==a)&&(c<b))) {
  cout << ":(" << "\n";
}
if (a==b && b==c) {
  cout << ":(" << "\n";
}


return 0;
}
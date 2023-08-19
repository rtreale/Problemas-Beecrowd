#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int i,n,a,x,b,d,e,par[5],impar[5];

a = 0;
b = 0;
d = 0;
e = 0;
x = 0;

do {
cin >> n;
x++;
if (d==5) {
  d = 0;
  for (i=0;i<5;i++) {
cout << "par[" << i << "] = " <<  par[i] << endl;
  }
  a = 0;
}
if (e==5) {
  e = 0;
  for (i=0;i<5;i++) {
cout << "impar[" << i << "] = " <<  impar[i] << endl;
  }
  b = 0;
}
if (n%2==0) {
  par[a] = n;
  a++;
  d++;
}
else if (n%2!=0) {
  impar[b] = n;
  b++;
  e++;
}
}
while (x!=15);

if (e!=0) {
  for (i=0;i<e;i++) {
    cout << "impar[" << i << "] = " <<  impar[i] << endl;
  }
}

if (d!=0) {
  for (i=0;i<d;i++) {
    cout << "par[" << i << "] = " <<  par[i] << endl;
  }
}
}
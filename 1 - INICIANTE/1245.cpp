#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int i,n,m,b,x,y;
int a,o,q,w;
char l;


a = 0;
b = 0;
x = 0;
y = 0;
q = 0;
w = 0;

while (cin >> n) {

int dir[n],esq[n];
 
 for (i=0;i<n;i++) {
   cin >> m >> l;
   if (l=='D') {
   dir[a] = m;
   a++;
   x++;
   }
  if (l=='E') {
    esq[b] = m;
    b++;
    y++;
   }
  }

for (i=0;i<x;i++) {
   for (o=0;o<y;o++) {
     if(dir[i]==esq[o]) {
         q++;
         esq[o] = 0;
         break;
     }
   }
}

cout << q << endl;
q = 0;
a = 0;
b = 0;
x = 0;
y = 0;


} // while

} // main

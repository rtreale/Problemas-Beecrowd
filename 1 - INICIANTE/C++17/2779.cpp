#include <iostream>
using namespace std;

int main() {
  
  int i,o;
  int n,m;

cin >> n >> m;

int album[n],cartas[m];

for(i=0;i<n;i++) {
  album[i] = 0;
}

for(i=0;i<m;i++) {
  cartas[i] = 0;
}

int a=0;

for(i=0;i<m;i++) {
  cin >> cartas[i];
  a = cartas[i];
  album[a-1] += 1; 
}

int x=0;

for(i=0;i<n;i++) {
  if(album[i]==0) {
    x+=1;
  }
}

cout << x << endl;

  return 0;
}
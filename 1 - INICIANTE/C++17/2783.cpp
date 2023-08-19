#include <iostream>
using namespace std;

int main() {

int i,o,z;
int n,c,m;

cin >> n >> c >> m;

int album[n],raras[c],cartaspossuidas[m];

for(i=0,o=0,z=0;i<n && o<c && z<m;i++,o++,z++) {
  album[i] = 0;
  raras[o] = 0;
  cartaspossuidas[z] = 0;
}

for(i=0;i<c;i++) {
  cin >> raras[i];
}

for(i=0;i<m;i++) {
  cin >> cartaspossuidas[i];
}

for(o=0;o<c;o++) {
for(i=0;i<m;i++) {
  if(cartaspossuidas[i]==raras[o]) {
    raras[o] = 0;
    }
  }
}

int x=0;
for(i=0;i<c;i++) {
  if(raras[i]!=0) {
    x+=1;
  }
}

cout << x << endl;


/*
for(i=0;i<c;i++) {
  raras[i] = 0;
}

for(i=0;i<m;i++) {
  cartaspossuidas[i] = 0;
}
*/





return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

 double m[12][12];

string op; //op = operacao
cin >> op;

for(int l=0; l<12; l++){
 for(int c=0; c<12; c++) {
  cin >> m[l][c];
  if(l>=c) m[l][c] = 0;
 }
}

double soma=0;
if(op=="S") {

  for(int l=0; l<12; l++){
   for(int c=0; c<12; c++){
    soma+=m[l][c];
  }
 }
 cout << fixed << setprecision(1) << soma << endl;
}
else if(op=="M") {

  for(int l=0; l<12; l++){
   for(int c=0; c<12; c++){
    soma+=m[l][c];
  }
 }
 cout << fixed << setprecision(1) << soma/66 << endl;
}


return 0;
}
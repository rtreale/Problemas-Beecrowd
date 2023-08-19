#include <iostream>
#include <iomanip>
using namespace std;

int main() {

 double m[12][12];

for(int l=0; l<12; l++){
 for(int c=0; c<12; c++) {
  m[l][c] = 0;
 }
}
 
int lo; //L = linha a fazer operacoes
string op; //op = operacao
cin >> lo >> op;

for(int l=0; l<12; l++){
 for(int c=0; c<12; c++) {
  cin >> m[l][c];
 }
}

double soma=0;
if(op=="S") {

  for(int l=lo; l<lo+1; l++){
   for(int c=0; c<12; c++){
    soma+=m[l][c];
  }
 }
 cout << fixed << setprecision(1) << soma << endl;
}
else if(op=="M") {

  for(int l=lo; l<lo+1; l++){
   for(int c=0; c<12; c++){
    soma+=m[l][c];
  }
 }
 cout << fixed << setprecision(1) << soma/12 << endl;
}


return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;


float soma(float n){
  float i,j;
  float s=0;
  for(i=2, j=3;j<=39;i=i*2, j=j+2) {
    s = s + (j/i);
  }
  return s;
}

int main(){

cout << fixed << setprecision(2) << soma(1)+1 << endl;

return 0;



}
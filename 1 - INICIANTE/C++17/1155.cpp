#include <iostream>
#include <iomanip>
using namespace std;


float soma(float n){
  float i;
  float s=0;
  for(i=1;i<=n;i++) {
    s = s + (1.0/i);
  }
  return s;
}

int main(){

cout << fixed << setprecision(2) << soma(100) << endl;

return 0;



}

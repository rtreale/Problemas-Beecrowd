#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i,j,vb[10],va[10],n[20]; // vb = vetor 10 à 19 / va = vetor 0 à 10

  for (i=0;i<20;i++) {
    cin >> n[i];
  }
   for (i=0;i<20;i++) {
    cout << "N[" << i << "] = " << n[19-i] << endl;
   
  }

return 0;

}
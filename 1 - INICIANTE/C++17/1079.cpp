#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a,b,c,x1,x2,x3;
    int n,o;
 


    cin >> n;
    float notas[n];
     
    for (int i = 1; i<=n; i++) {
      cin >> a >> b >> c; 
      notas [i-1] = (a*2+b*3+c*5)/10;
     }
    

    for (int o = 0; o<n; o++) {
    cout << fixed << setprecision(1) << notas[o] << "\n"; 
    }
    
    return 0;
}

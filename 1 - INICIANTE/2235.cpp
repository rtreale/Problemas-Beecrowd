#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  

  if ((a==b)||(a==c)||(a==(b+c))||(b==a)||(b==c)||(b==(a+c))||(c==a)||(c==b)||(c==(a+b))) {
     cout << "S" << "\n";
  }
      
  else {
    cout << "N" << "\n";
  }
  
return 0;
}
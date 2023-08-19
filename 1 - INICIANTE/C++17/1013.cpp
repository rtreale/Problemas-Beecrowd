#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int a,b,c,MaiorAB,MaiorBC;

  cin >> a >> b >> c;

    MaiorAB = (a+b+(abs(a-b)))/2;
    
    if (c > MaiorAB) {
      cout << c << " eh o maior" << "\n";
      
    }
    else if (c < MaiorAB) { 
      cout << MaiorAB << " eh o maior" << "\n";
    } 

  
 return 0;




}
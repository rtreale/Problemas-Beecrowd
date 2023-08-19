#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 


int main() {
int n,a,b,c,x;
cin >> n;

a = (n/3600);

b = (n - (a*3600))/60;



c = (n%60);

cout << a << ":" << b << ":" << c << "\n";
return 0;

}
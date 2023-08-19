#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 


int main() {
int n,a,b,c;
cin >> n;

a = (n/365);

b = (n%365)/30;

c = (n%365)%30;

cout << a << " ano(s)" << "\n" << b << " mes(es)" << "\n" << c << " dia(s)" << "\n";
return 0;

}
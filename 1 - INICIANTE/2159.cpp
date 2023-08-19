#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main() {

double n,a,b;

cin >> n;

a = (n/log(n));
b = 1.25506*(n/log(n)); 

cout << fixed << setprecision(1) << a << " " << b << "\n";


return 0;

}
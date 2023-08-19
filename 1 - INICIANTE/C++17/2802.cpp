#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main() {

long long n,b;

cin >> n;

b = 1 + ((n)*(n-1)/2) + (n*(n-1)*(n-2)*(n-3))/24;

cout << fixed << setprecision(2) << b << "\n";


return 0;

}
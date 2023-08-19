#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 


int main() {

int h,p;
double a,b;

cin >> h >> p;

a = h;
b = a/p;

cout << fixed << setprecision(2) << b << "\n";


return 0;

}
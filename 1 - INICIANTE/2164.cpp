#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 


int main() {
double n,z;
cin >> n;

z = (pow(((1+pow(5,0.5))/2),n)-pow(((1-pow(5,0.5))/2),n))/(pow(5,0.5));


cout << fixed << setprecision(1) << z << "\n";
return 0;

}
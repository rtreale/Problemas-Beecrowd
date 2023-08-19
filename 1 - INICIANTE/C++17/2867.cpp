#include <iomanip>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
int m,a,b,c,d,i;

cin >> m;

for (i=0;i<m;i++) {
c = 0;
d = 0;

cin >> a >> b;

c = pow(a,b);
d = b*log10(a)+1;

cout << d << endl;

}

return 0;
}
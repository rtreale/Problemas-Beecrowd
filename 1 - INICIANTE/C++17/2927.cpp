#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int a,c,x,y,prod,z;
// A = nº de alunos; C = nº de computadores; X = pcs ruins; Y = pcs sem compiler;  

cin >> a >> c >> x >> y;
prod = c-x-y;

if (prod>=a+1) {
  cout << "Igor feliz!" << "\n";
}

else if ((prod<a+1) && (x>y/2)) {
  cout << "Caio, a culpa eh sua!" << "\n";
}

else if ((prod<a+1)) { 
  cout << "Igor bolado!" << "\n";
}

return 0;
}
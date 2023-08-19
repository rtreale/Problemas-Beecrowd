#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double n1,n2,n3,n4,n5,x,y;
  cin >> n1 >> n2 >> n3 >> n4;
  x = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
  cout << fixed << setprecision(1) << "Media: " << x << "\n";
   if (x<5) {
     cout << "Aluno reprovado." << "\n";
   }
   if (x>=7) {
     cout << "Aluno aprovado." << "\n";
   }
   else if ((x<7)&&(x>=5)) {
     cout << "Aluno em exame." << "\n";
     cin >> n5;
     y = (n5+x)/2;
    cout << fixed << setprecision(1) << "Nota do exame: " << n5 << "\n";
     
     if (y>=5) {
       cout << fixed << setprecision(1) << "Aluno aprovado." << "\n" << "Media final: " << y << "\n";
     }
     else {
       cout << "Aluno reprovado." << "\n";
     }
   }
   return 0;
}
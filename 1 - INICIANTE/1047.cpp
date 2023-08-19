#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int ho,hf,mo,mf,ht,mt,a,b,c,x,y;

  cin >> ho >> mo >> hf >> mf;

  ht = (hf-ho);
  mt = (mf-mo);

   // 7 8 6 7

  if ((ho==hf)&&(mf==mo)) {
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" <<"\n";
    }

   else if (((hf-ho)==1) && (mo>mf)) {
    ht = 0;
    a = 60-mo;
    b = a + mf;
    cout << "O JOGO DUROU " << ht << " HORA(S) " << "E " << b << " MINUTO(S)" << "\n";
  }

  else if ((ho<hf) && (mo>mf)) {
    a = hf - ho - 1;
    b = (mf - mo) + 60;
    cout << "O JOGO DUROU " << a << " HORA(S) " << "E " << b << " MINUTO(S)" << "\n";
  }

  else if ((ho==hf) && (mo<mf)) {
    a = 0; 
    b = mf-mo; 
    cout << "O JOGO DUROU " << a << " HORA(S) " << "E " << b << " MINUTO(S)" << "\n";
  }

  else if (ho>hf && mo>mf) {
    a = (24-ho) + hf;
    b = mf - mo;
    x = a-1;
    y = (60-mo)+mf;
    cout << "O JOGO DUROU " << x << " HORA(S) " << "E " << y << " MINUTO(S)" << "\n";
   
  }
  else {
    cout << "O JOGO DUROU " << ht << " HORA(S) " << "E " << mt << " MINUTO(S)" << "\n";
  }

return 0;
}
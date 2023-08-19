#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int n,a,b,c,d;

cin >> n;

a = (n/1000)*1000;
b = ((n/100)%10)*100;
c = (((n/10)%10)*10);
d =  (((n/1)%10)*1);


if (n<1000) {

if (a==1000) {
  cout << "M"; 
}

if (b==100) {
  cout << "C";
}
else if (b==200) {
  cout << "CC"; 
}
else if (b==300) {
  cout << "CCC";
}
else if (b==400) {
  cout << "CD";
}
else if (b==500) {
  cout << "D";
}
else if (b==600) {
  cout << "DC";
}
else if (b==700) {
  cout << "DCC";
}
else if (b==800) {
  cout << "DCCC";
}
else if (b==900) {
  cout << "CM";
}

if (c==10) {
  cout << "X";
}

else if (c==20) {
  cout << "XX";
}

else if (c==30) {
  cout << "XXX";
}

else if (c==40) {
  cout << "XL";
}

else if (c==50) {
  cout << "L";
}

else if (c==60) {
  cout << "LX";
}

else if (c==70) {
  cout << "LXX";
}

else if (c==80) {
  cout << "LXXX";
}

else if (c==90) {
  cout << "XC";
}

if (d==1) {
  cout << "I";
}

else if (d==2) {
  cout << "II";
}

else if (d==3) {
  cout << "III";
}

else if (d==4) {
  cout << "IV";
}

else if (d==5) {
  cout << "V";
}

else if (d==6) {
  cout << "VI";
}

else if (d==7) {
  cout << "VII";
}

else if (d==8) {
  cout << "VIII";
}

else if (d==9) {
  cout << "IX";
}

}
// Erro no fim dos cout, o uri nao aceita sem quebra de linha
cout << "\n";
return 0;
}
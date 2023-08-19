#include <iostream>
#include <iomanip>

using namespace std;

int somadosdivisores(int num);
int numeroperfeito(int num);

int main() {
  int i,c,num;
  cin >> c;

  for(i=0;i<c;i++) {
   cin >> num;
   if(numeroperfeito(num)==1) {
     cout << num << " eh perfeito" << endl;
   }
   else {
     cout << num << " nao eh perfeito" << endl;
   }
  }

return 0;


}

int somadosdivisores(int num) {
  int i,soma=0;
  for(i=1;i<=(num/2);i++) 
    if(num%i==0) 
      soma = soma + i;
      return soma;
}


int numeroperfeito(int num) {
  if (somadosdivisores(num)==num) {
    return 1;
  }
  else {
    return 0;
  } 

}

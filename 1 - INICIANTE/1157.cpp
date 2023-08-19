#include <iostream>
using namespace std;

void divisores(int numero, int cont)
{
   if(numero >= cont)
   {
      if((numero % cont) == 0)
         cout << cont << endl;
      divisores(numero,++cont);
      return;
   }
   else
      return;
}


int main()
{
   int numero= 0;
   cin >> numero;
   divisores(numero,1);
   return 0;
}
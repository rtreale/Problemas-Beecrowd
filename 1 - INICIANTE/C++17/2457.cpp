#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <string>
using namespace std;

int main() {
 
char letra;
string palavra;
string frase;

cin >> letra;
cin.ignore();

getline(cin,frase);

int tamfrase = frase.size();
int a = 0;
int x = 0;
double contadordepalavras = 0;
double contadordeletras = 0;

for (int i=0;i<tamfrase;i++) {
  if(isspace(frase[i])) {
    
    x = i - a;

    palavra = frase.substr(a,x);
      contadordepalavras++;
      int tampalavra = palavra.size();
      for(int z=0;z<tampalavra;z++) {
        if(palavra[z]==letra) {
          contadordeletras++;
          break;
        }
      }
    
    /*
    cout << palavra << endl;
    cout << contadordeletras << " " << contadordepalavras << endl;
    */

    a = i+1;
  }

}

  palavra = frase.substr(a,tamfrase-a);
  /*
  cout << palavra << endl;
  */
    contadordepalavras++;
    int tampalavra = palavra.size();
    for(int z=0;z<tampalavra;z++) {
        if(palavra[z]==letra) {
          contadordeletras++;
          break;
        }
      }
   
   /*
   cout << contadordeletras << " " << contadordepalavras << endl;
   */

double result;

result = (contadordeletras*100)/contadordepalavras;

cout << fixed << setprecision(1) << result << endl;;


}

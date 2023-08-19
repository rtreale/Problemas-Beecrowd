#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <string>
using namespace std;

int main() {
 
int n;
string palavra;
string frase;

/*
cin >> letra;
cin.ignore();
*/

while(cin >> n) {
cin.ignore();

string resposta[n]; 

for(int w=0;w<n;w++) {

getline(cin,frase);

int tamfrase = frase.size();
int a = 0;
int x = 0;
int z = 0;
int contadordepalavras = 0;
int contadordeletras = 0;

for (int i=0;i<tamfrase;i++) {
  if(isspace(frase[i])) {
    
    x = i - a;
    palavra = frase.substr(a,x);
      contadordepalavras++;
      int tampalavra = palavra.size();
      z = tampalavra;
    a = i+1;
  }

}


if(a<tamfrase) {

    palavra = frase.substr(a,tamfrase-a);
      contadordepalavras++;
      int tampalavra = palavra.size();
      z = tampalavra;
}

   /*   
   cout << z << " " << contadordepalavras << endl;
   */
  

   if(z == 1 && contadordepalavras == 1) {
     resposta[w] = "a";
   }
   else if(z == 2 && contadordepalavras == 1) {
     resposta[w] = "b";
   }
   else if(z == 3 && contadordepalavras == 1) {
     resposta[w] = "c";
   }
   else if(z == 1 && contadordepalavras == 2) {
     resposta[w] = "d";
   }
   else if(z == 2 && contadordepalavras == 2) {
     resposta[w] = "e";
   }
   else if(z == 3 && contadordepalavras == 2) {
     resposta[w] = "f";
   }
   else if(z == 1 && contadordepalavras == 3) {
    resposta[w] = "g";
   }
   else if(z == 2 && contadordepalavras == 3) {
     resposta[w] = "h";
   }
   else if(z == 3 && contadordepalavras == 3) {
     resposta[w] = "i";
   }
   else if(z == 1 && contadordepalavras == 4) {
    resposta[w] = "j";
   }
   else if(z == 2 && contadordepalavras == 4) {
     resposta[w] = "k";
   }
   else if(z == 3 && contadordepalavras == 4) {
     resposta[w] = "l";
   }
   else if(z == 1 && contadordepalavras == 5) {
     resposta[w] = "m";
   }
   else if(z == 2 && contadordepalavras == 5) {
    resposta[w] = "n";
   }
   else if(z == 3 && contadordepalavras == 5) {
     resposta[w] = "o";
   }
   else if(z == 1 && contadordepalavras == 6) {
     resposta[w] = "p";
   }
   else if(z == 2 && contadordepalavras == 6) {
     resposta[w] = "q";
   }
   else if(z == 3 && contadordepalavras == 6) {
     resposta[w] = "r";
   }
   else if(z == 1 && contadordepalavras == 7) {
     resposta[w] = "s";
   }
   else if(z == 2 && contadordepalavras == 7) {
     resposta[w] = "t";
   }
   else if(z == 3 && contadordepalavras == 7) {
     resposta[w] = "u";
   }
   else if(z == 1 && contadordepalavras == 8) {
     resposta[w] = "v";
   }
   else if(z == 2 && contadordepalavras == 8) {
     resposta[w] = "w";
   }
   else if(z == 3 && contadordepalavras == 8) {
     resposta[w] = "x";
   }
   else if(z == 1 && contadordepalavras == 9) {
     resposta[w] = "y";
   }
   else if(z == 2 && contadordepalavras == 9) {
     resposta[w] = "z";
   }

} // For w

  for (int q=0;q<n;q++) {
      cout << resposta[q] << endl;
    }
  } //while
} // intmain
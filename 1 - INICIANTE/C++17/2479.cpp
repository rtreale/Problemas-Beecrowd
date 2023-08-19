#include <iostream>
#include <iostream>
using namespace std;

int main(){ 
		
unsigned int n; //Numero de criancas
cin >> n;

if(n>0) {
string comportamento[n], nome_das_criancas[n];

for(int i=0; i<n; i++) {
	cin >> comportamento[i] >> nome_das_criancas[i];
}

for(int j=0; j<n-1; j++) { 
  for(int k=0 ; k<n-1-j; k++) {
     if(nome_das_criancas[k]>nome_das_criancas[k+1]){
	swap(nome_das_criancas[k], nome_das_criancas[k+1]);
	}
   }	
}

int bomComportamento=0, mauComportamento=0;
for(int j=0; j<n; j++) {
  if(comportamento[j]=="+") bomComportamento++;
  else if(comportamento[j]=="-") mauComportamento++;
}
	
for(int i=0; i<n; i++) {
  cout << nome_das_criancas[i] << endl;
}
  cout << "Se comportaram: " << bomComportamento << " | " << "Nao se comportaram: " << mauComportamento << endl;
}
else if(n==0) {
  cout << "Se comportaram: " << "0" << " | " << "Nao se comportaram: " << "0" << endl;
}

return 0;
}
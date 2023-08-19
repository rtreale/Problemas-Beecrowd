#include <iostream>
using namespace std;

int main() {
ios::sync_with_stdio(false);
int i;
int a,b;

cin >> a >> b;

int vetb[b],c;


for(i=0;i<b;i++) {
  vetb[i] = 0;
}

int temp;

for(i = 0; i < a; i++) {
    cin >> temp;
    vetb[temp - 1] += 1;
}

/*Exibindo vetb
cout << endl << "Exibindo VetB:" << endl;
for(i=0;i<b;i++) {
  cout << vetb[i] << " ";
}
cout << endl << endl;
*/


int aux;
aux = vetb[0];
for(i=0;i<b;i++) {
  if(vetb[i]<aux){
    aux = vetb[i];
  }
}





cout << aux<< endl;




  return 0;
}
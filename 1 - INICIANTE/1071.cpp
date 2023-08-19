#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int x,y,contador,minimo,maximo;    

cin >> x >> y;

contador = 0;
if(x<y) {
minimo = x;
maximo = y;
}
else {
  minimo = y;
  maximo = x;
}


for (int i=(minimo+1);i<maximo;i++) {
  if ((i%2==1) || (i%2==-1)){
  contador = contador+i;
  } 
}

cout << contador << endl;

return 0;
}
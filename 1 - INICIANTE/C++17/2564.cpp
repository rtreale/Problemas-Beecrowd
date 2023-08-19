#include <iostream>
using namespace std;

int main() {
  
  int i,o;
  int n;

while (cin >> n) {

int veta[n],vetb[n];
int x = 0;

for(i=1;i<n;i++) {
  veta[i] = 0;
  vetb[i] = 0;
 }


for(i=1;i<n;i++) {
  cin >> veta[i] >> vetb[i];
 }

int a,u;
int premio = n;


for(i=1;i<n;i++) {
  if(veta[i]==premio && vetb[i]==1) {
    a = i;
   for(u=i+1;u<n;u++){
     if(vetb[u]==1) {
      x+=1;
        }
      }  
    }
  if(veta[i]==premio && vetb[i]==0) {
    a = i;
    x+=1;
    for(u=i+1;u<n;u++){
     if(vetb[u]==1) {
      x+=1;
        }
      }
  }
}


cout << x << endl;

}




  return 0;
}

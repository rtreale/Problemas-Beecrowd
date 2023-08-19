#include <iostream>
using namespace std;

int main() {

string str;


int i,n;
cin >> n;

for(int j=0;j<n;j++) {

  cin >> str;
  int tamanho = str.size();
  int a = 0;

 for(i=0;i<tamanho;i++) {

   if (str[i]=='0') {
     a = a + 6;
   }
   else if(str[i]=='1') {
     a = a + 2;
   }   
   else if(str[i]=='2') {
     a = a + 5;
   }  
   else if(str[i]=='3') {
     a = a + 5;
   } 
   else if(str[i]=='4') {
     a = a + 4;
   }
   else if(str[i]=='5') {
     a = a + 5;
   }
   else if(str[i]=='6') {
     a = a + 6;
   }
   else if(str[i]=='7') {
     a = a + 3;
   }
   else if(str[i]=='8') {
     a = a + 7;
   }
   else if(str[i]=='9') {
     a = a + 6;
   }
 }
  
  
  cout << a << " leds" << endl;

}

return 0;
}
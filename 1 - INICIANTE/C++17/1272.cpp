#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
 
int n;


  cin >> n;
  cin.ignore();
    
   while(n!=0){
  string str1;  
  getline(cin,str1);

  int tam = str1.size();
  int pos = 0;

  for(int i=0;i<tam;i++) {
    if(isalpha(str1[i])) {
      pos = i;
      break;
      }
    }

  cout << str1[pos];
  for(int z=pos+1;z<tam;z++) {
  if(isspace(str1[z-1]) && isalpha(str1[z]   )) {
    cout << str1[z];
      }
    }
    cout << endl;
    n--;
  }
 

}
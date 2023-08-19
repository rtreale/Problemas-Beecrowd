#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
 
int n;

cin >> n;

for(int z=0;z<n;z++) {

string str1;
string str2;
string str3;

cin >> str1 >> str2;
/*
cout << str1 << " " << str2 << endl;
*/
int tam1 = str1.size();
int tam2 = str2.size();

int i,o;

for(i=0,o=0; i<tam1 || o<tam2;) {
  if(i<tam1){
    cout << str1[i];
  }
  if(o<tam2){
    cout << str2[o];
  }
  i++;
  o++;
}
cout << endl;
/*
cout << tam1  << " " << tam2 << endl;
*/
}



}
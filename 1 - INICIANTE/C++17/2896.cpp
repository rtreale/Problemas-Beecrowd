#include <iostream>
 
using namespace std;
 
int main() {
 
 int t,n,k,i;
    
 cin >> t;
 
  for (i=0;i<t;i++) {
  cin >> n >> k;
       cout << (n%k) + (n/k) << endl;
    }
 
    return 0;
}
#include <iostream>
using namespace std;

unsigned int fatorial(int n);

int main()
{
	
	int fat;
	cin >> fat;
	cout << fatorial(fat) << endl;
	
	return 0;
}

unsigned int fatorial(int n){
	if(n==1)
	        return 1;
	return n*fatorial(n-1);
	
}
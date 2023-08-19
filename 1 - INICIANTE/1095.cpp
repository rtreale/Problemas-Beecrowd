#include <iostream>
using namespace std;

void recursive(int i,int j);

int main()
{
	
	int i=1;
	int j=60;
	recursive(i,j);
	
	return 0;
}

void recursive(int i,int j){
	cout << "I=" << i << " " << "J=" << j << endl;
	if (i==37) return;
	recursive(i+3,j-5);
	
	
}
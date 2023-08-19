#include <iostream>
#include <string>

using namespace std;


int main()
{
	string a, b;
	
  int n;
	int caso = 1;	
		
	cin >> n;
	
	while (n--)
	{
		cin >> a >> b;
		cout << "Caso #" << caso++ << ": ";
		if (a == b) cout << "De novo!\n";
		else if (a == "tesoura" && b == "papel") cout << "Bazinga!\n";
		else if (b == "tesoura" && a == "papel") cout << "Raj trapaceou!\n";
		else if (a == "papel" && b == "pedra") cout << "Bazinga!\n";
		else if (b == "papel" && a == "pedra") cout << "Raj trapaceou!\n";
		else if (a == "pedra" && b == "lagarto") cout << "Bazinga!\n";
		else if (b == "pedra" && a == "lagarto") cout << "Raj trapaceou!\n";
		else if (a == "lagarto" && b == "Spock") cout << "Bazinga!\n";
		else if (b == "lagarto" && a == "Spock") cout << "Raj trapaceou!\n";
		else if (a == "Spock" && b == "tesoura") cout << "Bazinga!\n";
		else if (b == "Spock" && a == "tesoura") cout << "Raj trapaceou!\n";
		else if (a == "tesoura" && b == "lagarto") cout << "Bazinga!\n";
		else if (b == "tesoura" && a == "lagarto") cout << "Raj trapaceou!\n";
		else if (a == "lagarto" && b == "papel") cout << "Bazinga!\n";
		else if (b == "lagarto" && a == "papel") cout << "Raj trapaceou!\n";
		else if (a == "papel" && b == "Spock") cout << "Bazinga!\n";
		else if (b == "papel" && a == "Spock") cout << "Raj trapaceou!\n";
		else if (a == "Spock" && b == "pedra") cout << "Bazinga!\n";
		else if (b == "Spock" && a == "pedra") cout << "Raj trapaceou!\n";
		else if (a == "pedra" && b == "tesoura") cout << "Bazinga!\n";
		else if (b == "pedra" && a == "tesoura") cout << "Raj trapaceou!\n";
	}
}
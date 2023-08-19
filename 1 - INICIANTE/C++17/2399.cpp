#include <iostream>
using namespace std;

int main() {
int i;
int tabuleiro;

cin >> tabuleiro;

int bombas[tabuleiro],saida[tabuleiro];

for(i=0;i<tabuleiro;i++) {
  bombas[i] = 0;
  saida[i] = 0;
}

for(i=0;i<tabuleiro;i++) {
  cin >> bombas[i];
  saida[i] = bombas[i];
}


if(bombas[1] == 1) saida[0]++;
for(i=1;i<tabuleiro-1;i++) {
  if(bombas[i - 1] == 1) saida[i]++;
  if(bombas[i + 1] == 1) saida[i]++;
}
if(bombas[tabuleiro - 2] == 1) saida[tabuleiro-1]++;

for(i=0;i<tabuleiro;i++)
  cout << saida[i] << endl;
return 0;
}
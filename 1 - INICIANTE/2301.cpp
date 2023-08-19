#include <iostream>
using namespace std;

int main() {
ios::sync_with_stdio(false);
int pessoas;
int repeticoes;
int auxQTDPessoas;
int auxBossVivoOuMorto; 
int cont=1;



  
//cin >> pessoas >> repeticoes;

while (cin >> pessoas >> repeticoes, pessoas !=0 || repeticoes!=0) 
{


//cout << endl;
//cout << "Pessoas:" << pessoas << endl;
//cout << "Repeticoes:" << repeticoes << endl;

int vivoOuMorto[pessoas];

int ordem[pessoas];

for (int i=0; i<pessoas ; i++)
{
  cin >> ordem[i];
}

//cin >> auxQTDPessoas;
//cout << "auxQTDPessoas:" << auxQTDPessoas << endl;
//cin >> auxBossVivoOuMorto;
//cout << "auxBossVivoOuMorto:" << auxBossVivoOuMorto << endl;

for(int i=0; i<pessoas ; i++)
{
  vivoOuMorto[i]=1;
}




for(int z=0; z<repeticoes;z++)
{
  cin >> auxQTDPessoas;
//  cout << "auxQTDPessoas:" << auxQTDPessoas << endl;
  cin >> auxBossVivoOuMorto;
//  cout << "auxBossVivoOuMorto:" << auxBossVivoOuMorto << endl;

  for(int i=0; i<pessoas ; i++)
  {
 /*   if(vivoOuMorto[i]!=-1)
    {
      cout  << "teste: vivo "<< i<< ":"<< vivoOuMorto[i] << endl;
    }
    else
    {
      cout  << "teste: morto "<< i<< ":"<< vivoOuMorto[i] << endl;
    }
    */
    if(vivoOuMorto[i]!=-1)
    {
      int auxVivoOuMorto; 
      cin >> auxVivoOuMorto;
//      cout << "auxVivoOuMorto:" << auxVivoOuMorto << endl;
      if (auxBossVivoOuMorto != auxVivoOuMorto)
      {
        vivoOuMorto[i]=-1;
      }
      else 
      {
        vivoOuMorto[i]=1;
      }
  //    cout << "vivoOuMorto["<< i <<"]:" << vivoOuMorto[i] << endl;
    }
  }
  /*for(int i=0; i<pessoas ; i++)
  {
    cout << vivoOuMorto[i]  << " ";
  }
  cout << endl;
        cout << endl;
*/
  }

 for(int i=0; i<pessoas ; i++)
  {
    if (vivoOuMorto[i] == 1)
    {
 
      cout << "Teste "<< cont++ << endl << ordem[i] ;
    }
  }
  cout << "\n\n";
}
  return 0;
}
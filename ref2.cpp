#include <iostream>
#include <string>
using namespace std;
int main ()
{
string palavra, inv;
int i,tam, aux, j;
cout<< "Digite uma palavra:" << endl;
cin >> palavra;
tam = palavra.size();
aux = tam-1;
for (i=0; i<tam; i++)
{
inv[i] = palavra[aux];
aux--;
}
cout << "Palavra ao contrario: " ;
for (j=0; j<tam; j++)
{
   cout << inv[j];
}

return 0;
}

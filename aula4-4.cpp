#include <iostream>
#include <string>
using namespace std;
int main ()
{
string frase;
char letra;
int i, econt=0,lcont=0, aux;
double quant, deno;
cout << "Digite a frase: " << endl;
getline(cin,frase);
cout << "Informe a letra que deseja quantificar: " << endl;
cin >> letra;
aux = frase.size();

for (i=0; i<aux; i++)
{
if (frase[i] == letra)
{
lcont++;
}
if (frase[i]==' ')
{
econt++;
}
}
deno = aux-econt;
quant = (lcont/deno);

cout << "Percentual: " << quant ;

return 0;
}

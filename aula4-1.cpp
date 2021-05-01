#include <iostream>
#include <string>
using namespace std;
int main ()
{
string frase;
int espacos=0;
cout << "Digite uma frase:" << endl;
getline(cin,frase);
for (int i=0;i<frase.size();i++)
{
if (frase[i] == ' ')
{
espacos++;
}
}
cout << "Quantidade de espacos: " << espacos << endl;

return 0;
}

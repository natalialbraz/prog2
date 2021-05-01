#include <iostream>
#include <string>
using namespace std;
int main ()
{
string palavra, inve;
bool teste=false;
int i, tam, aux;

cout << "Digite uma palavra: " << endl;
cin >> palavra;
tam = palavra.size();
aux = tam-1;
for (i=0; i<tam; i++)
{
inve[i]= palavra[aux];
aux--;
if (palavra[i]==inve[i])
{
    teste=true;
}
else
{
    teste = false;
}
}
    if (teste == true)
    {
cout << " " << palavra << " e palindromo";
}
else
{
    cout << " " << palavra << " nao e palindromo" << endl;
}


return 0;
}

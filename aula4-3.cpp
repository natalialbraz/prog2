#include <iostream>
#include <string>
using namespace std;
int main ()
{
string palavra, contrario;
int tam, aux, i;
bool teste=true;
cout << "Digite uma palavra: " << endl;
cin >> palavra;
tam = palavra.size();
aux = tam-1;
for (int i=0; i<tam; i++)
{
contrario[i]= palavra[aux];
aux--;
if (palavra[i]==contrario[i])
{
   teste = false;
}
else
{
    teste = true;
}
}
if (teste == false)
{
    cout << " " << palavra << " e palindromo" << endl;
}
else
{
    cout << " " << palavra << " nao e palindromo" << endl;
}



return 0;
}

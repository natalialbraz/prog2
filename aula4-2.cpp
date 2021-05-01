#include <iostream>
#include <string>
using namespace std;
int main ()
{
string palavra, contrario;
int tam, aux;
cout << "Digite uma palavra: " << endl;
cin >> palavra;
tam = palavra.size();
aux = tam-1;
for (int i=0; i<tam; i++)
{
contrario[i]= palavra[aux];
aux--;
}
cout << "Palavra ao contrario: " ;
for (int j=0; j<tam; j++)
{
cout << contrario[j];

}

return 0;
}

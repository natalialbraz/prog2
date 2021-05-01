#include <iostream>
using namespace std;
int main ()
{
int v[9]= {}, i, par=0;
for (i=0; i<=9; i++)
{
cout << "Digite um numero: " << endl;
cin >> v[i];
if ((v[i]%2) == 0)
{
par++;
}
}

cout << "O vetor possui " << par << " valores pares." << endl;

return 0;
}

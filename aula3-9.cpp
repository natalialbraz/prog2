#include <iostream>
using namespace std;
int main ()
{
int n, m, i, j;
bool teste=false;
cout << "Digite o numero de linha: " << endl;
cin >> n;
cout << "Digite o nuemro de colunas: " << endl;
cin >> m;
int matriz[n][m];
for(i=0; i<n; i++)
{
for (j=0; j<m; j++)
{
cout << "Digite um elemento da matriz:" << endl;
cin >> matriz[i][j];
if ((j!=i) && (matriz[i][j]== 0) && (j=i!=0))
{
teste = true;
}
else
{
teste = false;
}
}
}
if (teste=true)
{
cout << "Matriz diagonal";
}
else
{
cout << "Matriz nao e diagonal";
}





return 0;
}

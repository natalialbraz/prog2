#include <iostream>
using namespace std;
int main()
{
int n, m, i, j, locl, locc;
cout << "Digite o numero de linhas da matriz: " << endl;
cin >> n;
cout << "Digite o numero de colunas da matriz: " << endl;
cin >> m;
int matriz[n][m], maior = matriz[0][0];
for (i=0; i<n; i++)
{
for (j=0; j<m; j++)
{
cout << "Digite um elemento da matriz: ";
cin >> matriz[i][j];
if (matriz[i][j] > maior )
{
    locl= i;
    locc= j;
}
}
}
cout << "Matriz=";

for (i=0; i<n; i++)
{
    cout<< endl;
for (j=0; j<m; j++)
{
cout << " " << matriz[i][j] ;


}
}
cout << " " << endl;
cout << "A localizacao do maior valor da matriz e: " << endl;
cout << "Linha " << locl << endl;
cout << "Coluna " << locc << endl;

return 0;
}

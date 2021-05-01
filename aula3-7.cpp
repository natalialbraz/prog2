#include <iostream>
using namespace std;
int main ()
{
int n, m, i, j, vmaior, contm=0;
cout << "Digite o numero de linhas da matriz: " << endl;
cin >> n;
cout << "Digite o numero de colunas da matriz: " << endl;
cin >> m;
int matriz[n][m];
for (i=0; i<n ; i++)
{
for (j=0; j<m ; j++)
{
cout << "Digite um elemento da matriz" << endl;
cin >> matriz[i][j];
if (matriz[i][j] > 10)
{
 contm++;
}
}
}
cout << "Matriz =" ;
for (i=0; i<n ; i++)
{
    cout << " " << endl;
for (j=0; j<m ; j++)
{
cout << " " << matriz[i][j] << " " ;

}}
cout << endl <<"A matriz possui " << contm << " valores maiores que 10!" << endl;
return 0;
}

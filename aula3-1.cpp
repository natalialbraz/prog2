#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n, i=0, x, cont=0 ;

cout << "Digite o valor de n: " << endl;
cin >> n;
while (i<n)
{
cout << "Digite um numero:" << endl;
cin >> x;
if (x<0)
{
 cont++;
}
i++;
}
cout << "Quantidade de numeros negativos: " << cont;
return 0;
}

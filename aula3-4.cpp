#include <iostream>
using namespace std;
int main ()
{
    const int tam=7;
int v[tam] ={}, rp[tam]={}, rn[tam]={}, i;
for (i=0; i<=tam; i++)
{
cout << "Digite um numero inteiro: " << endl;
cin >> v[i];
if (v[i]>0)
{
    rp[i]=v[i];
        }
        else if (v[i]<0)
        {
            rn[i] =v[i];
}
}
cout << "Numeros positivos: " << rp[i] << endl;
cout << "Numeros negativos: " << rn[i] << endl;


return 0;
}

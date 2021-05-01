#include <iostream>
using namespace std;
int main ()
{
int x[5];
int i, menor = x[0], i_menor=0, aux = x[0];
cout << "Digite o primeiro elemento do arranjo: " << endl;
cin >> x[0] ;
cout << "Digite o segundo elemento do arranjo: " << endl;
cin >> x[1] ;
cout << "Digite o terceiro elemento do arranjo: "  << endl;
cin >> x[2] ;
cout << "Digite o quarto elemento do arranjo: " << endl;
cin >> x[3] ;
cout << "Digite o quinto elemento do arranjo: " << endl;
cin >> x[4] ;
for (i=1; i<5 ; i++)
{
if (x[i] < menor)
{
menor = x[i];
i_menor = i;
}

}
x[0] = menor;
x[i_menor] = aux;

for(int i = 0; i<5; i++)
{
cout << " " << x[i];
}

return 0;
}

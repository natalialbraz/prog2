#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n, i, maior=0, menor=10000000;
for (i=0; i<=50; i++)
{
cout << "Digite o valor de n: " << endl;
cin >> n;
if (n<menor)
{
menor = n;
}
if (n>maior)
{
maior = n;
}
}
cout << "O menor numero e: " << menor << endl;
cout << "O maior numero e: " << maior << endl;
return 0;
}

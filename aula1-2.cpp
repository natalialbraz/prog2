#include <iostream>
using namespace std;
int main()
{
int n50, n10, n5, n1;
cout << "Quantidade de notas..." << endl;
cout << "Digite o valor inteiro de reais: " << endl;
cin >> reais;
if (reais/50 < 1)
{
n10 = reais/10;
r1 = reais%10;
}
else
{
n50 = reais/50;
r1 = reais%5;
}
if (reais/10 < 1)
{
n5= reais/5;
r2 = reais%5;
}
else
{
n10 = reais/10;
r2 = reais%10;
}







return 0;
}

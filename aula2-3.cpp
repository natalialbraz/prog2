#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
int cod;
string proced;
cout << "Digite o codigo de origem do produto: " << endl;
cin >> cod;
if (cod == 1)
{
proced = "Amazonas";
}
if (cod == 2)
{
proced = "Para";
}
if ((cod == 3) || (cod == 4))
{
proced = "Pernambuco";
}
if ((cod== 5 || cod== 6))
{
proced = "Bahia";
}
if ((cod>=7 && cod<=10))
{
proced = "Belo Horizonte";
}
if ((cod>=11 && cod<=20))
{
proced = "Sao Paulo";
}
cout << "Procedencia: " << proced << endl;

return 0;
}

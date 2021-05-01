#include <iostream>
#include <string>
using namespace std;
void data(int mes, string resultado);
int main ()
{
int m;
string resultado;
cout << "Digite um numero inteiro: " << endl;
cin >> m;
data(m,resultado);

return 0;
}
void data (int mes, string resultado)
{
string r;
if (mes==1)
{
    r = 'Janeiro';
}
else if (mes==2)
{
    r = 'Fevereiro';
}
else if (mes==3)
{
    r = 'Março';
}
else if (mes==4)
{
    r = 'Abril';
}
else if (mes==5)
{
    r = 'Maio';
}
else if (mes==6)
{
    r = 'Junho';
}
else if (mes==7)
{
    r = 'Julho';
}
else if (mes==8)
{
    r = 'Agosto';
}
else if (mes==9)
{
    r = 'Setembro';
}
else if (mes==10)
{
    r = 'Outubro';
}
else if (mes==11)
{
    r= 'Novembro';
}
else if (mes==12)
{
    r= 'Dezembro';
}
else
{
    r = 'Erro';
}
cout << "Mes: " << r;
}

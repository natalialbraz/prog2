#include <iostream>
using namespace std;
int main ()
{
int horas, hextras, dp;
float salario, sfinal, beneficio, imposto, s, si;
cout << "Digite o salario do empregado por hora trabalhada: " << endl;
cin >> salario;;
cout << "Digite o numero de horas trabalhadas: " << endl;
cin >> horas;
cout << "Digite o numero de horas extras trabalhadas: " << endl;
ciin >> hextras;
cout << "Digite o numero de dependentes: " << endl;
cin >> dp;
s = salario*horas;
if (s<=1434.59)
{
imposto = s;
}
if (s>=1434.60 && s<=2150.00)
{
imposto = s/100*7.50;
}
if (s>=2150.01 && s<=2866.70)
{
imposto = s/100*15.00;
}
if (s>= 2866.71 && s<=3582.00)
{
imposto = s/100*22.50;
}
if (s>= 3582.01)
{
imposto = s/100*27.50;
}
si = s-imposto;
    if (si<500)
    {
    sfinal = si+180.00;
    }
    if (si>=500.00 && si<1000.00)
    {
    sfinal = si+120.00;
    }
    if (si>= 1000.00)
    {
    sfinal = si+100.00;
    }
cout << "O salario final do empregado e "<< &sfinal << endl;
return (0)
}

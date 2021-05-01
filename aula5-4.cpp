#include <iostream>
using namespace std;
void soma(double parc);
int main ()
{
double npar;
cout << "Digite o numero de parcelas: ";
cin >> npar;
soma(npar);

return 0;
}
void soma(double parc)
{
double s,i;

for (i=1; i<=parc; i++)
{
s = i*(i+1)/(i+3);
}
cout << "A soma das parcelas: " << s << endl;
}

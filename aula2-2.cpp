#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
double x, y, calculo;
cout << "Digite o valor de x: " << endl;
cin >> x;
cout << "Digite o valor de y: " << endl;
cin >> y;
if (x>0 && y>0)
{
calculo = x/y;
cout << "Primeiro quadrante: produto = " << calculo;
}
else if (x>0 && y<0)
{
calculo = pow(x,y);
cout << "Quarto quadrante: potencia = " << calculo;
}
else if (x<0 && y>0)
{
calculo = x*y;
cout << "Segundo quadrante: produto = " << calculo;
}
else if (x<0 && y<0)
{
calculo = x+y;
cout << "Terceiro quadrante: soma = " << calculo;
}


return 0;
}

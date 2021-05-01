#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float smin,quilow, vquilow, sdesconto, cdesconto;
cout << "Calculo do Custo de Energia Eletrica " << endl;
cout << "Informe o valor do salario minimo (R$): " << endl;
cin >> smin;
cout << "Informe a quantidade gasta de quilowatts (kW): " << endl;
cin >> quilow;
vquilow = smin/700;
sdesconto = quilow*vquilow;
cdesconto = sdesconto - (10*sdesconto/100);
cout << fixed;
cout.precision(2);
cout << "Valor de cada quilowatt (R$): " << vquilow << endl;
cout << "Custo da energia eletrica sem o desconto (R$): " << sdesconto << endl;
cout << "Custo da energia eletrica com o desconto (R$): " << cdesconto << endl;


return 0;
}

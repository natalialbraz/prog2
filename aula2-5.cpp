#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main ()
{
string cargo;
int cod;
float sal, aum, novos;
cout << "Digite o codigo do cargo: " << endl;
cin >> cod;
cout << "Digite o salario: " << endl;
cin >> sal;
if (cod==1)
{
aum = sal*50/100;
novos = sal+aum;
cargo = "Escrituario";
}
else if (cod==2)
{
aum = sal*50/100;
novos = sal+aum;
cargo = "Secretario";
}
else if (cod==3)
{
aum = sal*20/100;
novos = sal+aum;
cargo = "Caixa";
}
else if (cod==4)
{
aum = sal*10/100;
novos = sal+aum;
cargo = "Gerente";
}
else if (cod==5)
{
aum = 0;
novos = sal+aum;
cargo = "Diretor";
}
cout << fixed;
cout.precision(2);
cout << "O cargo de " << cargo << " teve aumento de " << aum << " e o novo salario e "<< novos << endl;
return 0;
}

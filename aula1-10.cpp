#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float vaula, qtdaulas, desc, sliq;
cout << fixed;
cout.precision(2);
cout << "Calculo do Salario Liquido " << endl;
cout << "Valor da hora-aula (R$): " << endl;
cin >> vaula;
cout << "Numero de aulas ministradas (h): " << endl;
cin >> qtdaulas;
cout << "Desconto do INSS (%): " << endl;
cin >> desc;
sliq = (vaula*qtdaulas)-(desc*vaula*qtdaulas)/100;
cout << "Salario liquido (R$): " << sliq << endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;
void conv1(double temp);
void conv2(double temp);
int main ()
{
double temperatura;
int unidade;
cout<< "Digite a temperatura: " << endl;
cin >> temperatura;
cout << "Digite  a unidade - 1 para F e 2 para C: " << endl;
cin >> unidade;
if (unidade == 1)
{
conv1(temperatura);
}
else if (unidade == 2)
{
conv2(temperatura);
}
else
{
    cout << "Erro" << endl;
}

return 0;
}

void conv1(double temp)
{
double fa;
fa= (temp*1.8)+32;
cout << "Temperatura convertida em Fahrenheit: " << fa;
}
void conv2(double temp)
{
double ce;
ce = (temp-32)/1.8;
cout << "Temperatura convertida em graus Celsius: " << ce;

}

#include <iostream>
using namespace std;
int main ()
{
float pbruto, desc, novop;
cout << fixed;
cout.precision(2);
cout << "Calculo do Valor do Produto" << endl;
cout << "Pre�o bruto do produto (R$): " << endl;
cin >> pbruto;
desc = pbruto*9/100;
novop = pbruto - desc;
cout << "Valor do desconto (R$):" << desc << endl;
cout << "Pre�o do produto com desconto (R$): " << novop<< endl;



return 0;
}

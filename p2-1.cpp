#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct automovel
{
string modelo;
int fabri;
float preco;
};
void exibir(vector<automovel>&v)
{
cout << "Ano maior que 2015: ";
for(int i=0; i< v.size(); i++)
{
 if (v[i].fabri>2015)
{
cout<< v[i].modelo<< " - " << v[i].fabri<< " - "<<  v[i].preco << endl;
}
}

int main()
{
int n;
cout << "Digite a quantidade de automoveis: " << endl;
cin >> n;
vector<automovel> a1(n);

for (i=0; i<n; i++)
{
cout<< "Digite o modelo: "<< endl;
cin >> a1[i].modelo;
cout<< "Digite o ano de fabricacao: " << endl;
cin >> a1[i].fabri;
cout << "Digite o preco do automovel: " << endl;
cin >> a1[i].preco;
}
exibir(a1);
return 0;
}


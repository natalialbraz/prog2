#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int n, k, ak, q, an;
cout << "Determinação de Termo (P.G.)" << endl;
cout << "Indice do termo desejado (n): " << endl;
cin >> n;
cout << "Informe o indice k: " << endl;
cin >> k;
cout << "Informe o termo ak: " << endl;
cin >> ak;
cout << "Inoforme a razao q: " << endl;
cin >> q;
an = ak*pow(q,n-k);
cout << "Termo a" << n << ": " << an;



return 0;
}

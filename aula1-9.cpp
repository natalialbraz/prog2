#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int a1, n, q, an;
cout << "Determinacao de Termo (P.G.)" << endl;
cout<< "Informe o termo a1: " << endl;
cin >> a1;
cout<< "Informe o indice n: " << endl;
cin >> n;
cout << "Informe a razao q: " << endl;
cin >> q;
an = a1*pow(q,n-1);
cout << "Termo a" << n << ": " << an << endl;


return 0;
}

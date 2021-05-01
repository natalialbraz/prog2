#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Troca de valores na memoria..." << endl;
cout << "Valor de A: " << endl;
cin >> a;
cout << "Valor de B: " << endl;
cin >> b;
c = a;
a = b;
b = c;
cout << "Valores trocados na memoria..." << endl;
cout<< "A= " << a << endl;
cout<< "B= " << b << endl;






return 0;
}

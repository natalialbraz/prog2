#include <iostream>
using namespace std;
void media(double x1, double x2);
int main ()
{
double n1,n2;

cout << "Informe o primeiro numero: " << endl;
cin >>n1;
cout << "Informe o segundo numero: " << endl;
cin >> n2;
media(n1,n2);

return 0;
}
void media(double x1, double x2)
{

cout << "Media = " << (x1+x2)/2 << endl;

}

#include <iostream>
using namespace std;
int main ()
{
int x, f, g ,h;
cout << "Digite o valor de x: " << endl;
cin >> x;
h = x^2 + (3*x)-20;
if (h > 5)
{
g = h;
}
else
{
g = 5;
}
if (g>10)
{
f = x+2*(x^2);
}
else
{
f = 10;
}
cout << "f(x) = " << f;

return 0;
}

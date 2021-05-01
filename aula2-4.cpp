#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float lab, aval, efinal, mediap;
cout << fixed;
cout.precision(1);
cout << "Digite a nota do trabalho de laboratorio: " << endl;
cin >> lab;
cout << "Digite a nota da avaliacao semestral: " << endl;
cin >> aval;
cout << "Digite a nota do exame final: " << endl;
cin >> efinal;
mediap = (lab*2+aval*3+efinal*5)/10;
cout << fixed;
cout.precision(2);
cout << "Media ponderada: " << mediap << endl;
if (mediap>=8.0 && mediap<=10.0)
{
 cout << "A " << endl;
}
else if (mediap >=7.0 && mediap<8.0)
{
    cout << "B " << endl;
}
else if (mediap >=6.0 && mediap<7.0)
{
    cout << "C " << endl;
}
else if (mediap >=5.0 && mediap<6.0)
{
    cout << "D " << endl;
}
else if (mediap >=0.0 && mediap<5.0)
{
    cout << "E " << endl;
}


return 0;
}

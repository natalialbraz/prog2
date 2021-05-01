#include <iostream>
using namespace std;
int main ()
{
float horas, minu, total, th;
cout << "Informe a(s) hora(s): " << endl;
cin >> horas;
cout << "Informe o(s) minuto(s): " << endl;
cin >> minu;
th = horas*60;
total = th+minu;
cout << "Total de minutos, a partir das 00:00 h: " << total << endl;

return 0;
}

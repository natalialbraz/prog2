#include <iostream>
using namespace std;
int main ()
{
int ano;
cout << "Digite o ano: " << endl;
cin >> ano;
if ((ano%4 == 0 && ano%100 != 0 ) || (ano%400 == 0)){
cout << " " << ano;
cout << " e ano bissexto" << endl;

}
else{
cout << " " << ano;
cout << " nao e ano bissexto" << endl;
}



return 0;
}

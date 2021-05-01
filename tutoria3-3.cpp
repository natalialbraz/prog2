#include <iostream>
#include <string>
using namespace std;
int main ()
{
string s;
char letra;
int cont=0, i;
cout << "Digite uma frase: "<< endl;
getline(cin,s);
cout << "Digite a letra que deseja quantificar:" << endl;
cin >> letra;
for (i= 0; i< s.size(); i++)
{
if (s[i] == letra)
{
cont++;
}
}
cout << "A letra " << letra << " aparece " << cont << " vezes na frase!" << endl;

return 0;
}

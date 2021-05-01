#include <iostream>
#include <string>
using namespace std;
int main ()
{
string frase;
int i, cont=0;
cout<< "Digite uma frase:" << endl;
getline(cin,frase);
for (i=0; i<frase.size(); i++)
{
if (frase[i]== ' ')
{
cont++;
}
}
cout << "A frase tem " << cont << " espacos." << endl;

return 0;
}

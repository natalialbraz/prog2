#include <iostream>
using namespace std;
int main ()
{
int v[7] = {22, 34, 54, 87, 97, 52, 6}, i;
for (i=0; i<=6; i++)
{
if (v[i] == 34)
{
cout << "Indice da posicao do elemento: " << i << endl;
}
else
{
cout << " -1 " << endl;
}

}




return 0;
}

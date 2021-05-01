#include <iostream>
using namespace std;
void r(int n1, int n2, &res);
int main()
{
int x, y, r;
cout << "Digite um numero inteiro:" << endl;
cin >> x;
cout << "Digite um numero inteiro: " << endl;
cin >> y;
r(int x, int y, int r);
cout<< "Razao: ", res;
}
void r(int n1, int n2, &res)
{
int res;
if ((n1==0 && n2==0)||(n1!=0 && n2==0))
{
return 0;
cout << "ERRO" << endl;
}
else
{
res = n1/n2;
return 1;

}
}

#include <iostream>
#include <memory>
using namespace std;
int main ()
{
int n;
unique_ptr<int> px(new int);
cout << "Digite um valor inteiro:" << endl;
cin >> n;
*px = 10;
cout << " " << n << "*(*px)=" << n*(*px);


return 0;
}

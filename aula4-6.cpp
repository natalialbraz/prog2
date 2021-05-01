#include <iostream>
#include <memory>
using namespace std;
int main ()
{
int n;
unique_ptr<int> px(new int(10));
cout << "Digite um valor inteiro:" << endl;
cin >> n;
cout << " " << n << "*(*px)=" << n*(*px);







return 0;
}

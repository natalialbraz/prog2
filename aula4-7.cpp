#include <iostream>
#include <memory>
using namespace std;
int main ()
{
unique_ptr<int> px(new int(6));
unique_ptr<int> py(new int(10));
unique_ptr<int> aux;
cout << "Antes: " << endl;
cout << "*px = " << *px << endl;
cout << "*py = " << *py << endl;
aux = move(px);
px = move(py);
py = move(aux);
cout << "Depois: " << endl;
cout << "*px = " << *px << endl;
cout << "*py = " << *py;

return 0;
}

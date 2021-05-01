#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
int i=1, j, r;
while (i<=10)
{
    j=1;
while (j<=10)
{
r = i*j;
cout << " " << i << " x " << j << " = " << r << endl;
j++;
}
i++;
cout << endl;

}
return 0;
}

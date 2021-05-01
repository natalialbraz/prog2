#include <iostream>
#include <vector>

using namespace std;
vector<int> vetor(int n, vector<int> px)
{
    vector<int>py(n);
for (int j=0; j<n ; j++)
{
py[j]=px[j];
}
return py;
}
int main ()
{
int n,k;
cout << "Digite o tamanho do vetor: " << endl;
cin >> n;
vector<int> a1(n);
cout << "Digite os elementos do vetor: " << endl;
for (int i=0; i<n; i++)
{
cin >> a1[i];
}
cout << "Digite o valor de k: " << endl;
cin >> k;
if (k>n)
    {
       k=n;
    }
vector<int> ret(k);
ret=vetor(k, a1);
cout<< "Novo vetor: ";
for(int i=0; i<k; i++)
{
    cout<< ret[i]<< " ";
}
return 0;
}

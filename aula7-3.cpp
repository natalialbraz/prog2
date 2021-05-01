#include<iostream>
#include<vector>
using namespace std;
int elem(vector<int> px, int n)
{
int cont=0;
    for(int i=0; i<px.size(); i++)
    {
        if(px[i]==n)
        {
            cont=cont+1;
        }
    }
return cont;
}

int main()
{
int t, e;
vector<int> v1(t);
cout<< "Digite o tamanho do vetor: "<< endl;
cin >> t;
cout << "Digite os elementos do vetor: " << endl;
for (int i=0; i<t; i++)
{
        cin>> v1[i];
}
cout << "Digite o valor de e: ";
cin>> e;
cout<< "Quantidade: " << elem(v1,e);

return 0;
}

#include<iostream>
#include<vector>
using namespace std;
vector<int> conc(vector<int> v1, vector<int> v2)
{
    vector<int> v3;
    for (int i=0; i<v1.size()); i++)
    {
        if (v1.size()>v2.size())
        {
            v3[i]=v1[i];
        }
        else
        {
            v3[i]=v2[i];
        }
    }
}
int main()
{
    int n1, n2;
    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> n1;
    cout << "Digite o tamanho do segundo vetor: ";
    cin >> n2;
    vector<int> vet1(n1);
    vector<int> vet2(n2);
    cout<< "Digite os elementos do primeiro vetor: "<< endl;
    for (int i=0; i<n1; i++)
    {
        cin >> vet1[i];
    }
    cout<< "Digite os elementos do segundo vetor: "<< endl;
    for (int i=0; i<n2; i++)
    {
        cin >> vet2[i];
    }
    cout << "Vetor resultante: "<< conc(vet1,vet2);
    return 0;
}

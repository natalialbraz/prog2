#include<iostream>
#include<vector>
using namespace std;
vector<int> intercala(vector<int>v1, vector<int>v2)
{
    vector<int>v3;
    for(int i=0; i<v1.size()+v2.size(); i++)
    {
        if(i<v1.size())
        {
            v3.push_back(v1[i]);
        }
        if(i<v2.size())
        {
            v3.push_back(v2[i]);
        }
    }
    return v3;
}
int main()
{
    int q1,q2;
    cout<< "Digite o tamanho do vetor 1:\n";
    cin>> q1;
    cout<< "Digite o tamanho do vetor 2:"<<endl;
    cin>>q2;
    vector<int>vet1(q1);
    vector<int>vet2(q2);
    cout<< "Digite os elementos do vetor 1: ";
    for(int i=0; i<q1; i++)
    {
        cin>>vet1[i];
        cout << " ";
    }
        cout<< "Digite os elementos do vetor 2: ";
        for(int i=0; i<q2; i++)
        {
            cin>>vet2[i];
            cout<< " ";
        }
        vector<int>ret(vet1.size()+vet2.size());
        ret= intercala(vet1,vet2);
        cout<< "Vetor 3: ";
        for(int i=0; i<ret.size(); i++)
        {
            cout<< ret[i]<< " ";
        }


return 0;
}

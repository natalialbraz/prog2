#include<iostream>
#include<vector>
using namespace std;
int bin(vector<int>vet1, int chave)
{
    int dir=vet1.size()-1, esq=0,i;
    int cont =0, tam =vet1.size();
    do
    {
        i=(dir+esq)/2;
        tam = tam/2;
        cout<< cont<< "a iteracao: "<< tam<< endl;
        cont =cont+1;
        if(vet1[i]<chave)
        {
            esq=i+1;
        }
        else
        {
            dir=i-1;
        }
    }
        while (vet1[i]!=chave && esq<=dir);
        if( vet1[i]==chave)
        {
            return i;
        }
        else
        {
            return -1;
        }
}
int main()
{
    int n,e;
    cout<< "Digite a quantidade de elementos do vetor: "<< endl;
    cin >> n;
    cout<< "Digite os elementos do vetor: "<< endl;
    vector<int> v1(n);
    for(int i=0; i<n; i++)
    {
        cin>> v1[i];
    }
    cout<< "Digite o elemento procurado: ";
    cin >> e;
    cout<< "Posicao do elemento procurado: "<< bin(v1,e);

return 0;
}

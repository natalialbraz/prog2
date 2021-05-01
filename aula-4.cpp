#include<iostream>
#include<vector>
using namespace std;
int elem(vector<int> px, int n )
{
    int esq = 0;
    int dir = px.size()-1;
    int i;
    do
    {
        i=(esq+dir)/2;
        if(n>px[i])
        {
            esq = i+1;
        }
            else
            {
                dir= i-1;
            }


    }
    while (n != px[i] && esq<=dir);
    if (n==px[i])
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
    int t,e;
    cout << "Digite o tamanho do vetor: "<< endl;
    cin >> t;
    vector<int> ve1(t);
    cout << "Digite os elementos do vetor: "<< endl;
    for(int i=0; i<t; i++)
    {
        cin>> ve1[i];
    }
    cout << "Digite o valor de e: ";
    cin>> e;

    cout<< "Posicao: " << elem(ve1, e);
return 0;
}

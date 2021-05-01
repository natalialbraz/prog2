#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct alunos
{
    string nome;
    float media;
    int faltas;
};
int main()
{
    int n,i;
    cout << "Digite a quantidade de alunos: " << endl;
    cin >> n;
    vector<alunos> a1(n);
    vector<string> sit(n);
    for (i=0; i<n ; i++)
    {
        cout << "Digite o nome: " << endl;
        cin >> a1[i].nome;
        cout << "Digite a media: " << endl;
        cin >> a1[i].media;
        cout << "Digite o numero de faltas: " << endl;
        cin >> a1[i].faltas;

        if ((a1[i].media >= 6.0) && (a1[i].faltas <= 18))
        {
            sit[i]= "APROVADO(A)";
        }
        else
        {
            sit[i]= "REPROVADO(A)";
        }

    }
        cout << endl;
        for (int j=0; j<n ; j++)
        {
            cout << endl << a1[j].nome << " " << sit[j];
        }
        cout<<endl;
        return 0;
}

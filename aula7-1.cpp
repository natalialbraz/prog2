#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
struct aluno
{
    int matricula;
    string nome;
    int cpf;
    string curso;
};
void arquivo(vector<aluno>g)
{
    ofstream fout("grava.txt");
    for (int i = 0; i<g.size(); i++)
    {
        fout <<  g[i].matricula << "    "<< g[i].nome<<"    "<<g[i].cpf<< "     "<<g[i].curso<<  endl;
    }
    fout.close();
}

int main()
{
    int mat = 181000, n;
    cout << "Digite o numero de alunos: " << endl;
    cin >> n;
    vector<aluno>a1(n);
    for(int i=0; i<n; i++)
    {
        cout << "Digite o nome do aluno: " << endl;
        cin >> a1[i].nome;
        a1[i].matricula = mat+i;
        cout<< "Digite o cpf do aluno: " << endl;
        cin >> a1[i].cpf;
        cout<< "Digite o curso do aluno: " << endl;
        cin >> a1[i].curso;
    }
    arquivo(a1);
    return 0;
}

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
string busca(vector<aluno> b, int cpf)
{
    for(int i=0; i<b.size(); i++)
    {
        if(b[i].cpf == cpf)
        {
        return b[i].nome;
        }
    }

}
int main()
{
    int mat = 181000, n, cpf;
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
    cout << "Digite o cpf que deseja buscar: "<< endl;
    cin >> cpf;
    cout << "Nome do aluno: "<< busca (a1, cpf);

    return 0;
}

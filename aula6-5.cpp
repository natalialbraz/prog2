#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
struct aluno
{
    string nome;
    float nota1;
    float nota2;
};
int main()
{
    ofstream fout("dados.txt");
    float media[3];
    vector<aluno> a1(3);
    for(int i=0; i<3; i++)
    {
        cout << "Digite o nome do aluno: "<< endl;
        cin>> a1[i].nome;
        cout<< "Digite a primeira nota do aluno: "<< endl;
        cin>> a1[i].nota1;
        cout<< "Digite a segunda nota do aluno: "<< endl;
        cin>> a1[i].nota2;
        media[i] = (a1[i].nota1+a1[i].nota2)/2;
    }
    fout<< "Nome    "<< "Nota1  "<< "Nota2  "<<"Media   "<<endl;
    for(int i=0; i<3; i++)
    {
        fout<< a1[i].nome<<"     "<<a1[i].nota1<<"       "<<a1[i].nota2<<"       "<<media[i];
        fout<< endl;
    }
        fout.close();
        return 0;
}

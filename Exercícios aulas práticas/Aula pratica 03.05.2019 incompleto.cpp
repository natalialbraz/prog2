#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<memory>
using namespace std;

//EXERCICIO 1

/*
struct aluno{
    string nome, curso;
    int cpf, matricula;
};
int main(){
    int n,m=1910001;
    ofstream escrever("aluno.txt");
    cout<<"Insira a quantidade de alunos: ";
    cin>>n;
    vector<aluno> sala;
    for(int i=0; i<n; i++){
        cout<<"Insira o nome do aluno "<<i<<": ";
        istream& getline (istream& is, string& sala[i].nome)
        //getline(cin,(sala[i].nome));
        //cin.ignore(1000,'\n');
        (cin>>sala[i].nome).get();
        escrever<<"Nome do aluno "<<i<<": "<<sala[i].nome;
        cout<<"Insira o curso do aluno "<<i<<": ";
        //getline(cin,(sala[i].curso));
        //cin.ignore(1000,'\n');
        (cin>>sala[i].curso).get();
        escrever<<"\nCurso do aluno "<<i<<": "<<sala[i].curso;
        cout<<"Insira o CPF do aluno "<<i<<": ";
        cin>>sala[i].cpf;
        escrever<<"\nCPF do aluno "<<i<<": "<<sala[i].cpf;
        cout<<"Matrícula do aluno "<<i<<": ";
        sala[i].matricula=m+i;
        cout<<sala[i].matricula<<"\n\n";
        escrever<<"\nMatricula do aluno "<<i<<": "<<sala[i].matricula<<"\n\n";
    }
    return 0;
}
*/

//EXERCICIO 3

/*
int contador(vector<int> vetor, int n, int c, int e){
    for(int i=0; i<n; i++){
        if(vetor[i]==e){
            c++;
        }
    }
    return c;
}
int main(){
    int n, e, cont=0;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    vector<int> vetor(n);
    cout<<"Digite os elementos do vetor:\n";
    for(int i=0; i<n; i++){
        cin>>vetor[i];
    }
    cout<<"Digite o valor de e: ";
    cin>>e;
    cout<<"\n\nQuantidade: "<<contador(vetor, n, cont, e)<<endl;
    return 0;
}
*/

//EXERCICIO 4


int contador(vector<int> vetor, int n, int c, int e){
    c=-1;
    for(int i=0; i<n; i++){
        if(vetor[i]==e){
            c++;
        }
    }
    return c;
}
int main(){
    int n, e, cont;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    vector<int> vetor(n);
    cout<<"Digite os elementos do vetor:\n";
    for(int i=0; i<n; i++){
        cin>>vetor[i];
    }
    cout<<"Digite o valor de e: ";
    cin>>e;
    cout<<"\n\nQuantidade: "<<contador(vetor, n, cont, e)<<endl;
    return 0;
}

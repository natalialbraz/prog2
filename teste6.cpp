#include<iostream>
#include<memory>
#include<vector>
#include<string>
using namespace std;
struct aluno{
    string nome;
    float media;
    int faltas;
};
int main(){
    int N;
    cout<<"Digite a quantidade de alunos: ";
    cin>>N;
    vector<aluno> sala(N);
    vector<string> aux(N);
    for(int i=0; i<N; i++){
        cout<<"\nDigite o nome: ";
        cin>>sala[i].nome;
        cout<<"Digite a media: ";
        cin>>sala[i].media;
        cout<<"Digite o numero de faltas: ";
        cin>>sala[i].faltas;
        if((sala[i].media>=6)&&(sala[i].faltas<=18)){
            aux[i]="APROVADO(A)";
        }else{
            aux[i]="REPROVADO(A)";
        }
    }
    cout<<endl;
    for(int j=0; j<N; j++){
        cout<<endl<<sala[j].nome<<" "<<aux[j];
    }
    cout<<endl;
    return 0;
}

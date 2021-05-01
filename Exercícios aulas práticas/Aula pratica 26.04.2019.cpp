#include<iostream>
#include<string>
#include<memory>
#include<vector>
using namespace std;

//EXERCICIO 1

/*
struct carro{
    string marca;
    int ano;
    float distancia;
    float consumo;
};
int main(){
    unique_ptr<carro>c1(new carro);
    cout<<"Digite a marca: ";
    cin>>(*c1).marca;
    cout<<"Digite o ano: ";
    cin>>c1->ano;
    cout<<"Digite a distancia: ";
    cin>>c1->distancia;
    cout<<"Digite o consumo: ";
    cin>>c1->consumo;
    cout<<"\n\nQuilometros por litro: "<<c1->distancia/c1->consumo<<endl;
    return 0;
}
*/

//EXERCICIO 2

/*
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
*/

//EXERCICIO 3


void vetor(int n, vector<int> px, int x, vector<int> py){
    for(int j=0; j<x; j++){
        py[j]=px[j];
    }
    cout<<"Novo vetor: ";
    for(int l=0; l<k; l++){
        cout<<py[l]<<" ";
    }
    cout<<endl;
}
int main(){
    int n, k, x;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    unique_ptr<vector> px(new vector(n));
    cout<<"Digite os elementos do vetor:\n";
    for(int i=0; i<n; i++){
        cin>>px[i];
    }
    cout<<"Digite o valor de k: ";
    cin>>k;
    if(k>=n){
        x=n;
    }else{
        x=k;
    }
    unique_ptr<vector>py(new vector(x));
    vetor(n, px, x, py);
    return 0;
}

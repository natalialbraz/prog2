#include<iostream>
#include<vector>
#include<deque>
#include<string>
#include<stdlib.h>
using namespace std;

//______________________________EXERCICIO 1______________________________

/*
template<class X>
bool ordenado(vector<X> a){
    bool ord=true;
    for(int i=0; i<a.size()-1; i++){
        if(a[i]>a[i+1]){
            ord=false;
        }
    }
    return ord;
}
int main(){
    int n;
    bool resp;
    cout<<"Digite o tamanho do arranjo: ";
    cin>>n;
    vector<float> v(n);
    cout<<"Insira os elementos do vetor:\n";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    resp=ordenado(v);
    cout<<"\nO vetor esta ";
    if(resp==true){
        cout<<"ordenado\n";
    }else{
        cout<<"desordenado\n";
    }
    return 0;
}
*/

//______________________________EXERCICIO 2______________________________

struct cachorro{
    int codigo;
    string raca, nome, tutor;
};
void cadastrar(vector<cachorro> c){
    cachorro aux;
    cout<<"\nInsira o codigo do cachorro: ";
    cin>>aux.codigo;
    cout<<"Insira a raca do cachorro: ";
    cin>>aux.raca;
    cout<<"Insira o nome do cachorro: ";
    cin>>aux.nome;
    cout<<"Insira o nome do tutor: ";
    cin>>aux.tutor;
    c.push_back(aux);
}
void exibir(vector<cachorro>c, int i){
    cout<<c[i].codigo<<"\n"<<c[i].raca<<"\n"<<c[i].nome<<"\n"c[i].tutor<<"\n";
}
void cadastrarpos(vector<cachorro> c){
    int p;
    cout<<"Insira a posição em que deseja cadastrar o cachorro: ";
    cin>>p;
    if(c.size()-1<p || p<0){
        cout<<"Posicao invalida! O tamanho do vetor é "<<c.size()-1<<endl;
    }else{
        cadastrar(c);
    }
}
void editcodigo(vector<cachorro> c){
    int cod;
    cout<<"Digite o codigo a ser procurado: ";
    cin>>cod;
    for(int i=0; i<c.size(); i++){
        if (c[i].codigo==cod){
            exibir(c);
            cout<<"Insira os dados novos:\nRaca: ";
            cin>>c[i].raca;
            cout<<"Insira o nome do cachorro: ";
            cin>>c[i].nome;
            cout<<"Insira o nome do tutor: ";
            cin>>c[i].tutor;
        }
    }
}
int main(){
    short int opcao=1;
    vector<cachorro> cao;
    while(opcao!=0){
        system("CLS");
        cout<<"Escolha uma opcao:\n1 - Cadastrar um novo cachorro;\n2 - 2 – cadastrar um novo cachorro em uma determinada posição;";
        cout<<"\n3 – editar os dados de um cachorro existente, dado seu código;\n4 – excluir o cadastro de um cachorro, dado seu código;";
        cout<<"\n5 – exibir os dados de um cachorro dado seu nome;\n6 – exibir os dados de um cachorro dado o nome do seu tutor\n";
        cin>>opcao;
        switch (opcao){
        case 0:
            cout<<"\nFechando programa...\n";
            break;
        case 1:
            cadastrar(cao);
            break;
        case 2:
            cadastrarpos(cao);
            break;
        case 3:
            editcodigo(cao);
            break;
        case 4:
            //excluir(cao);
            break;
        case 5:
            //exibirnome(cao);
            break;
        case 6:
            //exibirtutor(cao);
            break;
        default:
            cout<<"\nOpcao invalida!\n";
        }
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

//EXERCICIO 1

/*
int ordenado(vector<float> v, int n){
    int ans=0;
    bool sair=false;
    float pos=v[0];
    for(int i=1; i<n; i++){
        if((pos<v[i])&&(sair==false)){
            pos=v[i];
        }else{
            sair=true;
        }
    }
    if(pos==v[n-1]){
        ans=1;
    }
    return ans;
}
int main(){
    int n, resp;
    float aux;
    vector<float> vetor;
    cout<<"Insira o tamanho do vetor: ";
    cin>>n;
    cout<<"Insira os elementos do vetor:\n";
    for(int i=0; i<n; i++){
        cin>>aux;
        vetor.push_back(aux);
    }
    resp=ordenado(vetor, n);
    if(resp==1)
        cout<<"\nordenado\n";
    else
        cout<<"\nnao ordenado\n";
    return 0;
}
//função de custo de pior caso: busca sequencial - complexidade O(n)

*/

//EXERCICIO 2

/*
int buscabinaria(int chave, vector<int> v){
    int i, esq=0, dir=v.size()-1;
    do{
        i=(esq+dir)/2;
        if(chave>v[i]){
            esq=i+1;
        }else{
            dir=i-1;
        }
    }while(chave!=v[i]&&esq<=dir);
    if(chave==v[i]){
        return i;
    }else{
        return -1;
    }
}
int main(){
    int tam, aux, procura;
    vector<int> vetor;
    cout<<"Digite a quantidade de elementos do vetor: ";
    cin>>tam;
    cout<<"Digite os elementos do vetor:\n";
    for(int i=0; i<tam; i++){
        cin>>aux;
        vetor.push_back(aux);
    }
    cout<<"Digite o elemento procurado: ";
    cin>>procura;
    cout<<"\nPosicao do elemento procurado: "<<buscabinaria(procura, vetor)<<endl;
    return 0;
}
*/

//EXERCICIO 3


int buscabinaria(int chave, vector<int> v){
    int i, esq=0, dir=v.size()-1;
    int cont=1, tam=v.size();
    do{
        i=(esq+dir)/2;
        tam/=2;
        cout<<cont<<"a iteracao: "<<tam<<endl;
        cont++;
        if(chave>v[i]){
            esq=i+1;
        }else{
            dir=i-1;
        }
    }while(chave!=v[i]&&esq<=dir);
    if(chave==v[i]){
        return i;
    }else{
        return -1;
    }
}
int main(){
    int tam, aux, procura;
    vector<int> vetor;
    cout<<"Digite a quantidade de elementos do vetor: ";
    cin>>tam;
    cout<<"Digite os elementos do vetor:\n";
    for(int i=0; i<tam; i++){
        cin>>aux;
        vetor.push_back(aux);
    }
    cout<<"Digite o elemento procurado: ";
    cin>>procura;
    cout<<"\nPosicao do elemento procurado: "<<buscabinaria(procura, vetor)<<endl;
    return 0;
}

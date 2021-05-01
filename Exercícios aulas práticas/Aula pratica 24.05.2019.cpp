#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<vector>
using namespace std;

//_____________________________ALGORITMOS SELEÇÃO E INSERÇÃO_____________________________

/*
void insercao(vector<int>&a){
    int i, j, x;
    for(i=1; i<a.size(); i++){
        x=a[i];
        j=i-1;
        while(x<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
*/

/*
void selecao(vector<int>&a){
    int i, j, min, x;
    for(i=0; i<a.size()-1; i++){
        min=i;
        for(j=i+1; j<a.size(); j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        x=a[min];
        a[min]=a[i];
        a[i]=x;
    }
}
*/

//__________________________________EXERCICIO 1__________________________________

/*
void insercaoinvertida(vector<int>&a){
    int i, j, x;
    for(i=a.size()-2; i>=0; i--){
        x=a[i];
        j=i+1;
        while(x<a[j] && j<a.size()){
            a[j-1]=a[j];
            j++;
        }
        a[j-1]=x;
    }
}
int main(){
    int aux, n=8;
    vector<int> v;
    cout<<"vetor desordenado:\n";
    for(int i=0; i<n; i++){
        aux=rand()%100;
        v.push_back(aux);
        cout<<v[i]<<" ";
    }
    insercaoinvertida(v);
    cout<<"\n\nVetor ordenado:\n";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//__________________________________EXERCICIO 3__________________________________

struct carta{
    int naipe;
    int valor;
};
void insercao(vector<carta>&a){
    int i, j;
    carta x;
    for(i=1; i<a.size(); i++){
        x.naipe=a[i].naipe;
        x.valor=a[i].valor;
        j=i-1;
        while(x.naipe<a[j].naipe && j>=0){
            a[j+1].naipe=a[j].naipe;
            a[j+1].valor=a[j].valor;
            j--;
        }
        a[j+1].naipe=x.naipe;
        a[j+1].valor=x.valor;
    }
    for(i=1; i<a.size(); i++){
        x.naipe=a[i].naipe;
        x.valor=a[i].valor;
        j=i-1;
        while(x.naipe<=a[j].naipe && x.valor<a[j].valor && j>=0){
            a[j+1].naipe=a[j].naipe;
            a[j+1].valor=a[j].valor;
            j--;
        }
        a[j+1].naipe=x.naipe;
        a[j+1].valor=x.valor;
    }
}
int main(){
    srand (time(NULL));
    int n=25;
    carta aux;
    vector<carta>v;
    cout<<"vetor desordenado:\n";
    for(int i=0; i<n; i++){
        aux.naipe=rand()%4+1;
        aux.valor=rand()%13+1;
        v.push_back(aux);
        cout<<v[i].naipe<<" "<<v[i].valor<<endl;
    }
    insercao(v);
    cout<<"\n\nVetor ordenado:\n";
    for(int j=0; j<n; j++){
        cout<<v[j].naipe<<" "<<v[j].valor<<endl;
    }
    cout<<endl;
    return 0;
}

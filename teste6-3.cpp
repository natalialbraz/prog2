#include <iostream>
#include <vector>
#include <memory>
using namespace std;
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

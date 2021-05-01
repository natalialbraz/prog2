#include <iostream>
#include <cmath>
#include <array>
using namespace std;

//EXERCICIO 1

/*
int main(){
    int n, negativo=0;
    float valor;
    cout<<"Quantos valores deseja ler?";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++){
        cout<<"Insira o valor "<<i<<": ";
        cin>>valor;
        if(valor<0){
            negativo++;
        }
    }
    cout<<endl<<negativo<<" valores são negativos"<<endl;
    return 0;
}
*/

//EXERCICIO 2

/*
int main(){
    const int n=5;
    float valor, maior, menor;
    cout<<"Digite o valor 1 de "<<n<<": ";
    cin>>valor;
    maior=valor;
    menor=valor;
    for(int i=2; i<=n; i++){
        cout<<"Digite o valor "<<i<<" de "<<n<<": ";
        cin>>valor;
        if(valor<menor){
            menor=valor;
        }else if(valor>maior){
            maior=valor;
        }
    }
    cout<<endl<<"O maior valor foi "<<maior<<" e o menor foi "<<menor<<endl;
    return 0;
}
*/

//EXERCICIO 3

/*
int main(){
    int i=1, j;
    while(i<=10){
            j=1;
        while(j<=10){
           cout<<i<<" X "<<j<<" = "<<i*j<<endl;
           j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
*/

//EXERCICIO 4

/*
int main(){
    const int n=8;
    int valor;
    array<int,n> vetor;
    array<int,n> positivo;
    array<int,n> negativo;
    for(int i=0; i<n; i++){
        cout<<"Digite o valor "<<i<<": ";
        cin>>valor;
        vetor[i]=valor;
    }
    for(int j=0; j<n; j++){
        if(vetor[j]<0){
            negativo[j]=vetor[j];
            positivo[j]=0;
        }else{
            positivo[j]=vetor[j];
            negativo[j]=0;
        }
        cout<<endl<<"N: "<<negativo[j]<<"   P: "<<positivo[j];
    }
    cout<<endl;
    return 0;
}
*/

//EXERCICIO 5

/*
int main(){
    const int tam=5;
    array<float,tam> vetor = {8,5,-8.6,9.45,-6.2};
    float valor;
    int pos=-1;
    cout<<"Digite o valor a ser procurado: ";
    cin>>valor;
    for(int i=0; i<tam; i++){
        if(vetor[i]==valor){
        pos=i;
        }
    }
    cout<<endl<<"Posição do valor "<<valor<<": "<<pos<<endl;
    return 0;
}
*/

//EXERCICIO 6

/*
int main(){
    int par=0, valor;
    array<int,10> vetor;
    for(int i=0; i<10; i++){
        cout<<"Digite o valor "<<i<<": ";
        cin>>valor;
        if(valor%2==0){
            par++;
        }
    }
    cout<<endl<<"O vetor possui "<<par<<" valores pares"<<endl;
    return 0;
}
*/

//EXERCICIO 7

/*
int main(){
    const int N=2, M=2;
    array<array<double,M>,N> matriz;
    double valor, contador=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout<<"Digite o valor ["<<i<<"] ["<<j<<"]: ";
            cin>>valor;
            if(valor>10){
                contador++;
            }
        }
        cout<<endl;
    }
    cout<<endl<<"A matriz possui "<<contador<<" números maiores que 10"<<endl;
    return 0;
}
*/

//EXERCICIO 8


int main(){
    const int N=2, M=2;
    array<array<double,M>,N> matriz;
    double valor, maior;
    cout<<"Digite o valor [0] [0]: ";
    cin>>valor;
    maior=valor;
    for(int i=0; i<N; i++){
        for(int j=1; j<M; j++){
            cout<<"Digite o valor ["<<i<<"] ["<<j<<"]: ";
            cin>>valor;
            if(valor>maior){
                maior=valor;
            }
        }
        cout<<endl;
    }
    cout<<endl<<"O maior valor é: "<<maior<<endl;
    return 0;
}


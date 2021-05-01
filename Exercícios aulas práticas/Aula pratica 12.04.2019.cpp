#include<iostream>
#include <array>
using namespace std;

//EXERCICIO 1

/*
double media(double a, double b){
    double num1, num2;
    cout<<"Digite um numero real: ";
    cin>>num1;
    cout<<"Digite outro numero real: ";
    cin>>num2;
    cout<<endl<<"Media: "<<(num1+num2)/2<<endl;
    return 0;
}
int main(){
    double x, y;
    media(x,y);
    return 0;
}
*/

//EXERCICIO 2

/*
double CelsiusFahrenheit(double temperatura){
    cout<<"\nTemperatura convertida: "<<(temperatura*1.8)+32<<"ºF\n";
    return 0;
}
double FahrenheitCelsius(double temperatura){
    cout<<"\nTemperatura convertida: "<<(temperatura-32)/1.8<<"ºC\n";
    return 0;
}
int main(){
    double temp;
    string unidade;
    cout<<"Digite a temperatura: ";
    cin>>temp;
    cout<<"Digite a unidade: ";
    cin>>unidade;
    if(unidade=="celsius"){
        FahrenheitCelsius(temp);
    }else if(unidade=="fahrenheit"){
        CelsiusFahrenheit(temp);
    }else{
        cout<<"\nERRO\n";
    }
    return 0;
}
*/

//EXERCICIO 3

/*
int arredondabaixo(double n){
    int x=n;
    cout<<"\nArredondamento para baixo: "<<x;
}
int arredondacima(double n){
    int x=n+1;
    cout<<"\nArredondamento para cima: "<<x;
}
int arredondaconvencional(double n){
    int x, resto, numero;
    numero=n*10;
    resto=numero%10;
    if(resto>=0.5){
        x=n+1;
    }else{
        x=n;
    }
    cout<<"\nArredondamento convencional: "<<x;
}
int main(){
    double num;
    cout<<"Digite um numero real nao negativo: ";
    cin>>num;
    arredondabaixo(num);
    arredondacima(num);
    arredondaconvencional(num);
    return 0;
}
*/

//EXERCICIO 5

/*
void format(array<int,10> v){
    cout<<"\nVetor formatado: [";
    for(int j=0; j<10; j++){
        if(j==0){
            cout<<v[j];
        }else{
            cout<<", "<<v[j];
        }
    }
    cout<<"]\n";
}
int main(){
    array<int, 10> vetor;
    int tam;
    cout<<"Digite os 10 elementos do vetor: ";
    for(int i=0; i<10; i++){
        cin>>vetor[i];
    }
    format(vetor);
    return 0;
}
*/

//EXERCICIO 7

/*
int razao(int &x1, int &x2, int &resp){
    if(x2==0){
        resp=0;
        return resp;
    }else{
        resp=x1/x2;
        return resp;
    }
}
int main(){
    int num1, num2, resposta;
    cout<<"Digite um valor inteiro: ";
    cin>>num1;
    cout<<"Digite outro valor inteiro: ";
    cin>>num2;
    razao(num1, num2, resposta);
    cout<<"\nRazao: "<<resposta<<endl;
    return 0;
}
*/

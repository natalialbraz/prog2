#include<iostream>
#include<string>
#include<memory>
#include<vector>
using namespace std;

struct carro
{
    string marca;
    int ano;
    float distancia;
    float consumo;
};
int main()
{
    float km;
    unique_ptr<carro>c1(new carro);
    cout<<"Digite a marca: ";
    cin>>(*c1).marca;
    cout<<"Digite o ano: ";
    cin>>(*c1).ano;
    cout<<"Digite a distancia: ";
    cin>>(*c1).distancia;
    cout<<"Digite o consumo: ";
    cin>>(*c1).consumo;
    km = (*c1).distancia/(*c1).consumo;
    cout<<"\n\nQuilometros por litro: "<< km <<endl;
    return 0;
}

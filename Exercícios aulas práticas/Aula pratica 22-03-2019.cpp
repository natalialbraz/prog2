#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//EXERCICIO 1:

/*
int main(){
    int ano;
    cout<<"Digite o ano: ";
    cin>>ano;
    if (((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
        cout<<endl<<ano<<" e ano bissexto"<<endl;
    }else{
        cout<<endl<<ano<<" nao e ano bissexto"<<endl;
    }
    return 0;
}
*/

//EXERCICIO 2:

 /*
int main(){
    float x, y;
    cout<<"Digite o valor de X: ";
    cin>>x;
    cout<<"Digite o valor de Y: ";
    cin>>y;
    if(x>0 && y>0){
        cout<<endl<<"Primeiro quadrante: X / Y = "<<x/y<<endl;
    }else if(x<0 && y>0){
        cout<<endl<<"Segundo quadrante: X * Y = "<<x*y<<endl;
    }else if(x<0 && y<0){
        cout<<endl<<"Terceiro quadrante: X + Y = "<<x+y<<endl;
    }else{
        cout<<endl<<"Quarto quadrante: X ^ Y = "<<pow(x, y)<<endl;
    }
    return 0;
}
*/

//EXERCICIO 4:

/*
int main(){
    float laboratorio, semestral, exfinal, media;
    cout<<"Digite a nota do trabalho de laboratório: ";
    cin>>laboratorio;
    laboratorio*=2;
    cout<<"Digite a nota da avaliação semestral: ";
    cin>>semestral;
    semestral*=3;
    cout<<"Digite a nota do exame final: ";
    cin>>exfinal;
    exfinal*=5;
    media=(laboratorio+semestral+exfinal)/10;
    cout<<endl<<"Media ponderada: "<<media;
    if(media<=10 && media>=8){
        cout<<endl<<"Conceito: A"<<endl;
    }else if(media<8 && media>=7){
        cout<<endl<<"Conceito: B"<<endl;
    }else if(media<7 && media>=6){
        cout<<endl<<"Conceito: C"<<endl;
    }else if(media<6 && media>=5){
        cout<<endl<<"Conceito: D"<<endl;
    }else if(media<5 && media>=0){
        cout<<endl<<"Conceito: E"<<endl;
    }else{
        cout<<endl<<"Conceito: INVÁLIDO"<<endl;
    }
    return 0;
}
*/

//EXERCICIO 5:

/*
int main(){
    int codigo;
    float salario, aumento=0;
    cout<<"Digite o código do cargo: ";
    cin>>codigo;
    cout<<"Digite o salário: ";
    cin>>salario;
    switch(codigo){
    case 1:
        aumento=salario*0.5;
        cout<<endl<<"O cargo de Escriturário teve aumento de "<<aumento<<" e o novo salário é "<<salario+aumento<<endl;
        break;
    case 2:
        aumento=salario*0.5;
        cout<<endl<<"O cargo de Secretário teve aumento de "<<aumento<<" e o novo salário é "<<salario+aumento<<endl;
        break;
    case 3:
        aumento=salario*0.2;
        cout<<endl<<"O cargo de Escriturário teve aumento de "<<aumento<<" e o novo salário é "<<salario+aumento<<endl;
        break;
    case 4:
        aumento=salario*0.1;
        cout<<endl<<"O cargo de Escriturário teve aumento de "<<aumento<<" e o novo salário é "<<salario+aumento<<endl;
        break;
    case 5:
        cout<<endl<<"O cargo de Escriturário teve aumento de "<<aumento<<" e o novo salário é "<<salario+aumento<<endl;
        break;
    default:
        cout<<endl<<"Opção inválida escolhida!"<<endl;
    }
    return 0;
}
*/

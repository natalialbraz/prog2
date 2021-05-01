#include<iostream>
//#include<array>
#include<memory>
#include<string>
using namespace std;

//EXERCICIO 1
/*
int main(){
    string frase;
    int espacos=0;
    cout<<"Digite uma frase: ";
    getline(cin, frase);
    for(int i=0; i<frase.size(); i++){
        if(frase[i]==' '){
            espacos++;
        }
    }
    cout<<"\nQuantidade de espacos: "<<espacos<<endl;
    return 0;
}
*/

//EXERCICIO 2

/*
int main(){
    string palavra, contrario;
    int tamanho,aux;
    cout<<"Digite uma palavra: ";
    cin>>palavra;
    tamanho=palavra.size();
    aux=tamanho-1;
    for(int i=0; i<tamanho; i++){
        contrario[i]=palavra[aux];
        aux--;
    }
    cout<<"\nPalavra ao contrario: ";
    for(int j=0; j<tamanho; j++){
        cout<<contrario[j];
    }
    cout<<"\n";
    return 0;
}
*/

//EXERCICIO 3

/*
int main(){
    string palavra, contrario;
    int tamanho, aux;
    bool teste=true;
    cout<<"Digite uma palavra: ";
    cin>>palavra;
    tamanho=palavra.size();
    aux=tamanho-1;
    cout<<"\n";
    for(int i=0; i<tamanho; i++){
        contrario[i]=palavra[aux];
        aux--;
        cout<<palavra[i];
        if(contrario[i]!=palavra[i]){
            teste=false;
        }
    }
    if(teste){
        cout<<" e palindromo\n";
    }else{
        cout<<" nao e palindromo\n";
    }
    return 0;
}
*/

//EXERCICIO 4

/*
int main(){
    string frase;
    char letra;
    int tamanho, aux;
    float percentual=0;
    cout<<"Digite uma frase: ";
    getline(cin, frase);
    tamanho=frase.size();
    aux=tamanho;
    cout<<"\nDigite uma letra: ";
    cin>>letra;
    for(int i=0; i<tamanho; i++){
        if(frase[i]==' '){
            aux--;
        }else if(frase[i]==letra){
            percentual++;
        }
    }
    cout<<"\nPercentual: "<<percentual/aux<<endl;
    return 0;
}
*/

//EXERCICIO 5

/*
int main(){
    unique_ptr<int> x(new int(5));//x aponta para um espaço de memória que recebe o valor 5
    unique_ptr<int> y(new int(2));//y aponta para um espaço de memória que recebe o valor 2
    unique_ptr<int> z;//cria o ponteiro z
    unique_ptr<int> w(new int);//w aponta para um espaço de memória vazio
    z=move(x);//z agora aponta para o espaço de memória que era de x, que contém o valor 5
    *w = *z;//o espaço de memória apontado por w recebe 5 (valor do espaço de memória apontado por z)
    int r = *y + *w + *z;//2+5+5=12
    cout << r;
    return 0;
}
*/

//EXERCICIO 6

/*
int main(){
    int valor;
    unique_ptr<int> px(new int(10));
    cout<<"Digite um valor inteiro: ";
    cin>>valor;
    cout<<"\n"<<valor<<"*(*px) = "<<valor*(*px)<<endl;
    return 0;
}
*/

//EXERCICIO 7


int main(){
    unique_ptr<int>px(new int(6));
    unique_ptr<int>py(new int(10));
    unique_ptr<int>aux;
    cout<<"Antes:\n*px = "<<*px<<"\n*py = "<<*py;
    aux=move(py);
    py=move(px);
    px=move(aux);
    cout<<"\n\nDepois:\n*px = "<<*px<<"\n*py = "<<*py;
    return 0;
}

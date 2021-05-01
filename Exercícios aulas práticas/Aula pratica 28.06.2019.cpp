#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

//______________________________EXERCICIO 1______________________________

/*
int maiorset(set<int> s){
  int maior;
  set<int>::iterator i;
  maior=*(s.begin());
  for(i=s.begin(); i!=s.end(); i++){
        if(*i>maior){
            maior=*i;
        }
  }
  return maior;
}
int menorset(set<int> s){
  int menor;
  set<int>::iterator i;
  menor=*(s.begin());
  for(i=s.begin(); i!=s.end(); i++){
        if(*i<menor){
            menor=*i;
        }
  }
  return menor;
}
void imprimeset(set<int> s){
    set<int>::iterator i;
    for(i=s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
    int i=0, aux=0;
    set<int> s;
    cout<<"Insira os elementos do set(999 encerra o comando):\n";
    do{
        cout<<"Elemento "<<i<<": ";
        cin>>aux;
        if(aux!=999){
            s.insert(aux);
        }
        i++;
    }while(aux!=999);
    cout<<"\nMaior elemento: "<<maiorset(s);
    cout<<"\nMenor elemento: "<<menorset(s);
    cout<<"\nElementos do set\n";
    imprimeset(s);
    return 0;
}
*/

//______________________________EXERCICIO 3______________________________

/*
string criptografa(map<char, char> m, string frase){
    string cripto;
    map<char, char>::iterator it;
    /*for(int i=0; frase[i]!='\0'; i++){
        if (frase[i]=='a'){
            m['a']='!';
        }
        if (frase[i]=='e'){
            m[frase[i]]='@';
        }
        if (frase[i]=='i'){
            m[frase[i]]='#';
        }
        if (frase[i]=='o'){
            m[frase[i]]='$';
        }
        if (frase[i]=='u'){
            m[frase[i]]='%';
        }else{
            m[frase[i]]=frase[i];
        }
    }
    for(int i=0; frase[i]!='\0'; i++){
        cripto[i]=m[i];
    }*/
    for(int i=0; frase[i]!='\0'; i++){
        for(it=m.begin(); it!=m.end(); it++){
            if(frase[i]==it->first){
                cout<<it->second;
            }
        }
    }
    return cripto;
}
int main(){
    string frase;
    cout<<"Digite uma frase: ";
    getline(cin, frase);
    /*for(int i=0; (i<100 && frase[i]!='\0'); i++){
        if (frase[i]=='a'){
            frase[i]='!';
        }
        if (frase[i]=='e'){
            frase[i]='@';
        }
        if (frase[i]=='i'){
            frase[i]='#';
        }
        if (frase[i]=='o'){
            frase[i]='$';
        }
        if (frase[i]=='u'){
            frase[i]='%';
        }
    }
    */
    map<char, char> m;
    map<char, char>::iterator it;
    m['a']='!'; m['b']='b'; m['c']='c'; m['d']='d'; m[' ']=' ';
    m['e']='@'; m['f']='f'; m['g']='g'; m['h']='h';
    m['i']='#'; m['j']='j'; m['k']='k'; m['l']='l'; m['m']='m'; m['n']='n';
    m['o']='$'; m['p']='p'; m['q']='q'; m['r']='r'; m['s']='s'; m['t']='t';
    m['u']='%'; m['v']='v'; m['w']='w'; m['x']='x'; m['y']='y'; m['z']='z';
    cout<<"\nFrase criptografada: ";
    criptografa(m, frase);
    cout<<endl;
    return 0;
}
*/

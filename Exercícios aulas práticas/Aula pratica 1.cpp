#include <iostream>
#include <cmath>
using namespace std;
/*
int main(){
    cout<<"Ol�, mundo!"<<endl;
    return 0;
}
*/
/*
int main(){
    int dias;
    cout<<"Dias da Semana..."<<endl<<"Digite a quantidade de dias: ";
    cin>>dias;
    cout<<endl<<dias<<" dias s�o "<<dias/7<<" semanas"<<endl;
    return 0;
}
*/
/*
int main(){
    int reais, nota10, nota5, nota1;
    cout<<"Quantidade de notas..."<<endl<<"Digite o valor inteiro de reais: ";
    cin>>reais;
    cout<<endl<<"Notas de 50: "<<reais/50<<endl;
    reais=reais%50;
    nota10=reais/10;
    cout<<"Notas de 10: "<<nota10<<endl;
    reais=reais%10;
    nota5=reais/5;
    cout<<"Notas de 5: "<<nota5<<endl;
    reais=reais%5;
    nota1=reais/1;
    cout<<"Notas de 1: "<<nota1<<endl;
    return 0;
}
*/
/*
int main(){
    float um, dois, tres;
    cout<<"C�lculo da M�dia Aritm�tica..."<<endl<<"Primeiro n�mero real? ";
    cin>>um;
    cout<<"Segundo n�mero real? ";
    cin>>dois;
    cout<<"Terceiro n�mero real? ";
    cin>>tres;
    cout<<endl<<"M�dia Aritm�tica: "<<(um+dois+tres)/3<<endl;
    return 0;
}
*/
/*
int main(){
    int placa, centena;
    cout<<"D�gitos de uma placa automotiva..."<<endl<<"Digite a placa do ve�culo (4 d�gitos): ";
    cin>>placa;
    centena=(placa%1000)/100;
    cout<<endl<<"D�gito(s) da(s) centena(s): "<<centena<<endl;
    return 0;
}
*/
/*
int main(){
    int a, b, aux;
    cout<<"Troca de valores na mem�ria..."<<endl<<"Valor de A: ";
    cin>>a;
    cout<<"Valor de B: ";
    cin>>b;
    aux=b;
    b=a;
    a=aux;
    cout<<endl<<"Valores trocados na mem�ria..."<<endl<<"A = "<<a<<endl<<"B = "<<b<<endl;
    return 0;
}
*/
/*
int main(){
    int hora, minuto;
    cout<<"C�lculo do Total de Minutos"<<endl<<"Informe a(s) hora(s): ";
    cin>>hora;
    cout<<"Informe o(s) minuto(s): ";
    cin>>minuto;
    cout<<endl<<"Total de minutos, a partir das 00:00 h: "<<(hora*60)+minuto<<endl;
    return 0;
}
*/
/*
int main(){
    float bruto, desconto, total;
    cout<<"C�lculo do Valor do Produto"<<endl<<"Pre�o bruto do produto (R$): ";
    cin>>bruto;
    desconto=bruto*0.09;
    total=bruto-desconto;
    cout<<"Valor do desconto (R$): "<<desconto<<endl<<"Pre�o do produto com desconto (R$): "<<total<<endl;
    return 0;
}
*/
/*
int main(){
    float n, k, ak, q, termo;
    cout<<"Determina��o de Termo (P.G.)"<<endl<<"�ndice do termo desejado (n): ";
    cin>>n;
    cout<<"Informe o �ndice k: ";
    cin>>k;
    cout<<"Informe o termo ak: ";
    cin>>ak;
    cout<<"Informe a raz�o q: ";
    cin>>q;
    termo=ak*(pow(q,(n-k)));
    cout<<endl<<"Termo a"<<n<<": "<<termo<<endl;
    return 0;
}
*/
/*
int main(){
    float a1, n, q, termo;
    cout<<"Determina��o de Termo(P.G.)"<<endl<<"Informe o termo a1: ";
    cin>>a1;
    cout<<"Informe o �ndice n: ";
    cin>>n;
    cout<<"Informe a raz�o q: ";
    cin>>q;
    termo=a1*(pow(q,(n-1)));
    cout<<endl<<"Termo a"<<n<<": "<<termo<<endl;
    return 0;
}
*/
/*
int main(){
    float horaaula, numeroaulas, desconto, total;
    cout<<"C�lculo do Sal�rio L�quido"<<endl<<"Valor da hora-aula          (R$): ";
    cin>>horaaula;
    cout<<"N�mero de aulas ministradas  (h): ";
    cin>>numeroaulas;
    cout<<"Desconto do INSS             (%): ";
    cin>>desconto;
    desconto=desconto*0.01;
    desconto=(horaaula*numeroaulas)*desconto;
    total=(horaaula*numeroaulas)-desconto;
    cout<<endl<<"Sal�rio l�quido (R$): "<<total<<endl;
    return 0;
}
*/
/*
int main(){
    float minimo, gastokw, valorkw;
    cout<<"C�lculo do Custo da Energia El�trica"<<endl<<"Informe o valor do Sal�rio M�nimo (R$): ";
    cin>>minimo;
    cout<<"Informe a quantidade gasta em quilowatts (kW): ";
    cin>>gastokw;
    valorkw=minimo/700;
    cout<<"Valor de cada quilowatt (R$): "<<valorkw<<endl;
    cout<<"Custo da energia el�trica sem o desconto (R$): "<<valorkw*gastokw<<endl;
    cout<<"Custo da energia el�trica com o desconto (R$): "<<(valorkw*gastokw)*0.9<<endl;
    return 0;
}
*/

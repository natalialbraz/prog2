#include <iostream>
#include <cmath>
using namespace std;
/*
int main(){
    cout<<"Olá, mundo!"<<endl;
    return 0;
}
*/
/*
int main(){
    int dias;
    cout<<"Dias da Semana..."<<endl<<"Digite a quantidade de dias: ";
    cin>>dias;
    cout<<endl<<dias<<" dias são "<<dias/7<<" semanas"<<endl;
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
    cout<<"Cálculo da Média Aritmética..."<<endl<<"Primeiro número real? ";
    cin>>um;
    cout<<"Segundo número real? ";
    cin>>dois;
    cout<<"Terceiro número real? ";
    cin>>tres;
    cout<<endl<<"Média Aritmética: "<<(um+dois+tres)/3<<endl;
    return 0;
}
*/
/*
int main(){
    int placa, centena;
    cout<<"Dígitos de uma placa automotiva..."<<endl<<"Digite a placa do veículo (4 dígitos): ";
    cin>>placa;
    centena=(placa%1000)/100;
    cout<<endl<<"Dígito(s) da(s) centena(s): "<<centena<<endl;
    return 0;
}
*/
/*
int main(){
    int a, b, aux;
    cout<<"Troca de valores na memória..."<<endl<<"Valor de A: ";
    cin>>a;
    cout<<"Valor de B: ";
    cin>>b;
    aux=b;
    b=a;
    a=aux;
    cout<<endl<<"Valores trocados na memória..."<<endl<<"A = "<<a<<endl<<"B = "<<b<<endl;
    return 0;
}
*/
/*
int main(){
    int hora, minuto;
    cout<<"Cálculo do Total de Minutos"<<endl<<"Informe a(s) hora(s): ";
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
    cout<<"Cálculo do Valor do Produto"<<endl<<"Preço bruto do produto (R$): ";
    cin>>bruto;
    desconto=bruto*0.09;
    total=bruto-desconto;
    cout<<"Valor do desconto (R$): "<<desconto<<endl<<"Preço do produto com desconto (R$): "<<total<<endl;
    return 0;
}
*/
/*
int main(){
    float n, k, ak, q, termo;
    cout<<"Determinação de Termo (P.G.)"<<endl<<"Índice do termo desejado (n): ";
    cin>>n;
    cout<<"Informe o índice k: ";
    cin>>k;
    cout<<"Informe o termo ak: ";
    cin>>ak;
    cout<<"Informe a razão q: ";
    cin>>q;
    termo=ak*(pow(q,(n-k)));
    cout<<endl<<"Termo a"<<n<<": "<<termo<<endl;
    return 0;
}
*/
/*
int main(){
    float a1, n, q, termo;
    cout<<"Determinação de Termo(P.G.)"<<endl<<"Informe o termo a1: ";
    cin>>a1;
    cout<<"Informe o índice n: ";
    cin>>n;
    cout<<"Informe a razão q: ";
    cin>>q;
    termo=a1*(pow(q,(n-1)));
    cout<<endl<<"Termo a"<<n<<": "<<termo<<endl;
    return 0;
}
*/
/*
int main(){
    float horaaula, numeroaulas, desconto, total;
    cout<<"Cálculo do Salário Líquido"<<endl<<"Valor da hora-aula          (R$): ";
    cin>>horaaula;
    cout<<"Número de aulas ministradas  (h): ";
    cin>>numeroaulas;
    cout<<"Desconto do INSS             (%): ";
    cin>>desconto;
    desconto=desconto*0.01;
    desconto=(horaaula*numeroaulas)*desconto;
    total=(horaaula*numeroaulas)-desconto;
    cout<<endl<<"Salário líquido (R$): "<<total<<endl;
    return 0;
}
*/
/*
int main(){
    float minimo, gastokw, valorkw;
    cout<<"Cálculo do Custo da Energia Elétrica"<<endl<<"Informe o valor do Salário Mínimo (R$): ";
    cin>>minimo;
    cout<<"Informe a quantidade gasta em quilowatts (kW): ";
    cin>>gastokw;
    valorkw=minimo/700;
    cout<<"Valor de cada quilowatt (R$): "<<valorkw<<endl;
    cout<<"Custo da energia elétrica sem o desconto (R$): "<<valorkw*gastokw<<endl;
    cout<<"Custo da energia elétrica com o desconto (R$): "<<(valorkw*gastokw)*0.9<<endl;
    return 0;
}
*/

#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

class Ponto{
    public:
        Ponto();
        Ponto(double,double);
        double getX();
        void setX(double);
        double getY();
        void setY(double);
        void imprimir();
        Ponto operator+(const Ponto &);
        double distancia(const Ponto &);
        string quadrante(const Ponto &);
    private:
        double x,y;
};

Ponto::Ponto(){
    x=0;
    y=0;
}

Ponto::Ponto(double a, double b){
    x=a;
    y=b;
}

double Ponto::getX(){
    return x;
}

void Ponto::setX(double a){
    x=a;
}

double Ponto::getY(){
    return y;
}

void Ponto::setY(double a){
    y=a;
}

void Ponto::imprimir(){
    cout << "(" << x << ", " << y << ")" << endl;
}

Ponto Ponto::operator+(const Ponto &dir){
    Ponto temp(x+dir.x, y+dir.y);
    return temp;
}

double Ponto::distancia(const Ponto &p){
    return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
}

double triangulo(Ponto p1, Ponto p2, Ponto p3){
    double a,b,c; //lados do triangulo
    a = p1.distancia(p2);
    b = p2.distancia(p3);
    c = p3.distancia(p1);

    bool aOk=false, bOk=false, cOk=false;
    if(fabs(b-c)<a && a<b+c)
        aOk=true;
    if(fabs(a-c)<b && b<a+c)
        bOk=true;
    if(fabs(a-b)<c && c<a+b)
        cOk=true;
    return aOk && bOk && cOk;
}

string Ponto::quadrante(const Ponto &p){
    if (p.x>0 && p.y>0){
        return "o primeiro quadrante";
    }else if(p.x>0 && p.y<0){
        return "o segundo quadrante";
    }else if(p.x<0 && p.y<0){
        return "o terceiro quadrante";
    }else if(p.x<0 && p.y>0){
        return "o quarto quadrante";
    }else if(p.x==0 && p.y==0){
        return "a origem";
    }else if(p.x==0 && p.y!=0){
        return "o eixo x";
    }else if(p.x!=0 && p.y==0){
        return "o eixo y";
    }
}

int main(){
    int n;
    double x,y, dist=0;
    cout<<"Insira uma quantidade de pontos: ";
    cin>>n;
    vector<Ponto> p1(n);
    vector<int> quad {0, 0, 0, 0};
    for(int i=0; i<n; i++){
        cout << "Digite as coordenadas do ponto "<<i+1<<":" << endl;
        cin >> x;
        cin >> y;
        (p1[i]).setX(x);
        (p1[i]).setY(y);
        if(p1[i].quadrante(p1[i])=="o primeiro quadrante")
            quad[0]++;
        else if(p1[i].quadrante(p1[i])=="o segundo quadrante")
            quad[1]++;
        else if(p1[i].quadrante(p1[i])=="o terceiro quadrante")
            quad[2]++;
        else if(p1[i].quadrante(p1[i])=="o quarto quadrante")
            quad[3]++;
    }
    for(int i=1; i<n; i++){
        dist+=(p1[i]).distancia(p1[i-1]);
    }
    cout<<"\nDistancia total percorrida pelo robo: "<<dist;
    cout<<"\n\nQuantidade de pontos em cada quadrante:\n";
    cout<<quad[0]<<" pontos no primeiro quadrante\n";
    cout<<quad[1]<<" pontos no segundo quadrante\n";
    cout<<quad[2]<<" pontos no terceiro quadrante\n";
    cout<<quad[3]<<" pontos no quarto quadrante\n";
    return 0;
}

#include <iostream>
using namespace std;
int main ()
{
int dia;
cout << "Digite o dia da semana: ";
cin >> dia;
switch (dia)
{
case 1 :
    cout << "O dia da semana referente ao numero 1 e domingo." << endl;
    break;
case 2 :
    cout << "O dia da semana referente ao numero 2 e segunda." << endl;
    break;
case 3 :
    cout << "O dia da semana referente ao numero 3 e terca." << endl;
        break;
case 4 :
    cout << "O dia da semana refderente ao numero 4 e quarta." << endl;
    break;
case 5 :
    cout << "O dia da semana referente ao numero 5 e quinta." << endl;
    break;
case 6 :
    cout << "O dia da semana referente ao numero 6 e sexta." << endl;
    break;
case 7 :
    cout << "O dia da semana referente ao numero 7 e sabado." << endl;
    break;
default :
    cout << "Opcao invalida escolhida" << endl;

}


    return (0)
}

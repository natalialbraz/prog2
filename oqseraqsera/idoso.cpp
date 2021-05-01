#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string nome;
    int dia, mes, op;
    cout << "Digite o seu primeiro nome: ";
    cin >> nome;
    cout << "Digite o dia do seu aniversario: ";
    cin >>  dia;
    cout << "Digite tambem o mes do seu aniversário (1-JANEIRO 2-FEVEREIRO...): ";
    cin >> mes;
    if ((nome == "Joao") && (dia==10) && (mes==9))
    {
        cout <<endl << "Fazendo um programinha simples para desejar ao melhor programador um feliz aniversario" << endl;
        cout << "Espero que voce seja muito feliz, nao so hoje, mas todos os dias e nunca duvide do seu potencial, pois voce e uma PESSOA incrivel" << endl;
        cout << "Fico muito feliz em ver o seu crescimento, cada obstaculo que voce supera, toda sua evolucao, e como a cada dia voce consegue ver a vida de uma maneira mais positiva." <<endl;
        cout << "Entao e isso, conte comigo para o que precisar. Tudo de melhor desse mundo pra voce e aproveite o seu dia." << endl;
        cout << "Um beijo <3" << endl;
        cout << endl<< "Escolha um numero de 1 a 3 e digite para descobrir o seu destino: ";
        cin >> op;
        if (op==1)
        {
            cout<< "EBAAAA Vamos tomar um acai :D " << endl;
        }
        else if (op==2)
        {
            cout << "UHUUUL venha aqui em casa hoje e descobrira \o/ " << endl;
        }
        else if (op==3)
        {
            cout << "SURPRESA! Me informe que o numero digitado foi 3" << endl;
        }
        else
        {
            cout << "Numero invalido!" << endl;
        }
    }
    else
    {
        cout << "POXA, hoje nao e seu aniversario. ENCERRAR PROGRAMA ";
    }
    cout << endl <<  "No mais e isso ai, um abraco e ate a aula de SICA :D "<< endl;
    return 0;
}

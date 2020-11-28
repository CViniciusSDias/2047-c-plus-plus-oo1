#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;
};

int main()
{
    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpfTitular = "123.456.789-10";
    umaConta.nomeTitular = "Vinicius";
    umaConta.saldo = 100;
    
    Conta umaOutraConta;
    umaOutraConta.saldo = 200;
    
    cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << umaOutraConta.saldo << endl;
    
    return 0;
}

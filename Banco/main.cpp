#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main()
{
    Conta umaConta("123456", "Vinicius", "123.456.789-10");
    umaConta.depositar(500);
    umaConta.sacar(200);

    cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;

    Conta umaOutraConta("654321", "Dias", "098.765.432-10");
    umaOutraConta.depositar(300);
    umaOutraConta.sacar(50);

    cout << "Uma conta: " << umaOutraConta.recuperaSaldo() << endl;

    Conta maisUmaConta("654321", "Dias", "098.765.432-10");

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    return 0;
}

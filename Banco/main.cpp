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

    return 0;
}
